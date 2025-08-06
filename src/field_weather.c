#include "defines.h"
#include "../include/bg.h"
#include "../include/global.h"
#include "../include/sprite.h"
#include "../include/task.h"
#include "../include/malloc.h"
#include "../include/event_object_movement.h"
#include "../include/field_screen_effect.h"
#include "../include/gpu_regs.h"
#include "../include/item_menu.h"
#include "../include/field_weather.h"
#include "../include/menu.h"
#include "../include/main.h"
#include "../include/text.h"
#include "../include/overworld.h"
#include "../include/random.h"
#include "../include/palette.h"
#include "../include/pokemon_icon.h"
#include "../include/scanline_effect.h"
#include "../include/script.h"
#include "../include/string_util.h"
#include "../include/field_message_box.h"
#include "../include/window.h"
#include "../include/hall_of_fame.h"
#include "../include/new_menu_helpers.h"
#include "../include/constants/event_objects.h"
#include "../include/constants/songs.h"
#include "../include/gba/io_reg.h"
#include "../include/weather.h"
#include "../include/map_preview_screen.h"

#include "../include/new/build_pokemon.h"
#include "../include/new/frontier.h"
#include "../include/new/mega.h"

//Funciones 
void LightWeather_InitVars(void);
void LightWeather_Main(void);
void LightWeather_InitAll(void);
bool8 LightWeather_Finish(void);
static void CreateLightWeatherSprites(void);
static void DestroyLightWeatherSprites(void);

//Graficos
extern const u8 gWeatherLightTiles[];
extern const u16 gWeatherLightPal[];

#define LIGHT_WEATHER_SCROLL_DELAY 5
#define tSpriteColumn data[0]
#define blendCounter fogDScrollXCounter
#define blendValueIndex fogDScrollYCounter

static const u8 sLightWeatherBlendTable[] = {
    //8, 9, 10, 11, 12, 13, 14, 13, 12, 11, 10, 9
    5, 6, 7, 8, 9, 10, 11, 10, 9, 8, 7, 6
};
#define BLEND_TABLE_LENGTH (sizeof(sLightWeatherBlendTable))

static const struct OamData sOamData_LightW = {
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_BLEND,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};

static const union AnimCmd sAnim_LightW_0[] = {
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LightW_1[] = {
    ANIMCMD_FRAME(32, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LightW_2[] = {
    ANIMCMD_FRAME(64, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LightW_3[] = {
    ANIMCMD_FRAME(96, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LightW_4[] = {
    ANIMCMD_FRAME(128, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LightW_5[] = {
    ANIMCMD_FRAME(160, 16),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnims_LightW[] = {
    sAnim_LightW_0,
    sAnim_LightW_1,
    sAnim_LightW_2,
    sAnim_LightW_3,
    sAnim_LightW_4,
    sAnim_LightW_5,
};

static const union AffineAnimCmd sAffineAnim_LightW[] = {
    AFFINEANIMCMD_FRAME(0x200, 0x200, 0, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd *const sAffineAnims_LightW[] = {
    sAffineAnim_LightW,
};

static void LightWeatherSpriteCallback(struct Sprite *);
static const struct SpriteTemplate sLightWeatherSpriteTemplate = {
    .tileTag = GFXTAG_LIGHT_W,
    .paletteTag = GFXTAG_LIGHT_W,
    .oam = &sOamData_LightW,
    .anims = sAnims_LightW,
    .images = NULL,
    .affineAnims = sAffineAnims_LightW,
    .callback = LightWeatherSpriteCallback,
};


void LightWeather_InitVars(void)
{
    gWeatherPtr->initStep = 0;
    gWeatherPtr->weatherGfxLoaded = FALSE;
    gWeatherPtr->gammaTargetIndex = 0;
    gWeatherPtr->gammaStepDelay = 20;
    if (!gWeatherPtr->fogHSpritesCreated)
    {
        gWeatherPtr->fogHScrollCounter = 0;
        gWeatherPtr->fogHScrollOffset = 0;
        gWeatherPtr->fogHScrollPosX = 0;
        Weather_SetBlendCoeffs(0, 16);
    }

    gWeatherPtr->blendCounter = 0; // blendCounter
    gWeatherPtr->blendValueIndex = 0; // blendIndex
}

void LightWeather_Main(void)
{

    //gWeatherPtr->fogHScrollPosX = (gSpriteCoordOffsetX - gWeatherPtr->fogHScrollOffset) & 0xFF;
    gWeatherPtr->fogHScrollPosX = (-gWeatherPtr->fogHScrollOffset) & 0xFF;
    if (++gWeatherPtr->fogHScrollCounter > LIGHT_WEATHER_SCROLL_DELAY)
    {
        gWeatherPtr->fogHScrollCounter = 0;
        gWeatherPtr->fogHScrollOffset++;
    }
    switch (gWeatherPtr->initStep)
    {
    case 0:
        CreateLightWeatherSprites();
        if (gWeatherPtr->currWeather == WEATHER_FOG_HORIZONTAL)
            Weather_SetTargetBlendCoeffs(12, 8, 3);
        else
            Weather_SetTargetBlendCoeffs(4, 16, 0);
        gWeatherPtr->initStep++;
        break;
    case 1:
        if (Weather_UpdateBlend())
        {
            gWeatherPtr->weatherGfxLoaded = TRUE;
            gWeatherPtr->initStep++;
        }
        break;
    }

    if (++gWeatherPtr->blendCounter > 15) // Control de la velocidad del pulso de luz
    {
        gWeatherPtr->blendCounter = 0;

        gWeatherPtr->blendValueIndex++;
        gWeatherPtr->blendValueIndex %= BLEND_TABLE_LENGTH;

        u8 alpha = sLightWeatherBlendTable[gWeatherPtr->blendValueIndex];
        Weather_SetBlendCoeffs(alpha, 16 - alpha);
    }
}

void LightWeather_InitAll(void)
{

    LightWeather_InitVars();

    // Esperar a que termine el preview antes de iniciar el clima
    //while (ForestMapPreviewScreenIsRunning() || gPaletteFade->active);

    // Ahora sí correr la inicialización
    while (!gWeatherPtr->weatherGfxLoaded)
        LightWeather_Main();

}

bool8 LightWeather_Finish(void)
{
    gWeatherPtr->fogHScrollPosX = (gSpriteCoordOffsetX - gWeatherPtr->fogHScrollOffset) & 0xFF;
    if (++gWeatherPtr->fogHScrollCounter > LIGHT_WEATHER_SCROLL_DELAY)
    {
        gWeatherPtr->fogHScrollCounter = 0;
        gWeatherPtr->fogHScrollOffset++;
    }

    switch (gWeatherPtr->finishStep)
    {
    case 0:
        Weather_SetTargetBlendCoeffs(0, 16, 3);
        gWeatherPtr->finishStep++;
        break;
    case 1:
        if (Weather_UpdateBlend())
            gWeatherPtr->finishStep++;
        break;
    case 2:
        DestroyLightWeatherSprites();
        gWeatherPtr->finishStep++;
        break;
    default:
        return FALSE;
    }
    return TRUE;
}

static void CreateLightWeatherSprites(void)
{
    u16 i;
    u8 spriteId;
    struct Sprite *sprite;

    if (!gWeatherPtr->fogHSpritesCreated)
    {
        struct SpriteSheet lightWeatherSpriteSheet = {
            .data = gWeatherLightTiles,
            .size = 0x0800,
            .tag = GFXTAG_LIGHT_W,
        };
        struct SpritePalette lightWeatherPalSheet = {
            .data = gWeatherLightPal,
            .tag = GFXTAG_LIGHT_W,
        };
        LoadSpritePalette(&lightWeatherPalSheet);
        LoadSpriteSheet(&lightWeatherSpriteSheet);
        for (i = 0; i < NUM_LIGHT_WEATHER_SPRITES; i++)
        {
            spriteId = CreateSpriteAtEnd(&sLightWeatherSpriteTemplate, 0, 0, 0xFF);
            if (spriteId != MAX_SPRITES)
            {
                sprite = &gSprites[spriteId];
                //sprite->tSpriteColumn = i % 5;
                //sprite->pos1.x = (i % 5) * 64 + 32;
                //sprite->pos1.y = (i / 5) * 64 + 32;
                sprite->tSpriteColumn = i;
                sprite->pos1.x = i * 64 + 32;
                sprite->pos1.y = 32; 
                gWeatherPtr->sprites.s2.fogHSprites[i] = sprite;
            }
            else
            {
                gWeatherPtr->sprites.s2.fogHSprites[i] = NULL;
            }
        }

        gWeatherPtr->fogHSpritesCreated = TRUE;
    }
}

static void DestroyLightWeatherSprites(void)
{
    u16 i;

    if (gWeatherPtr->fogHSpritesCreated)
    {
        for (i = 0; i < NUM_LIGHT_WEATHER_SPRITES; i++)
        {
            if (gWeatherPtr->sprites.s2.fogHSprites[i] != NULL)
                DestroySprite(gWeatherPtr->sprites.s2.fogHSprites[i]);
        }

        FreeSpriteTilesByTag(GFXTAG_LIGHT_W);
        gWeatherPtr->fogHSpritesCreated = FALSE;
    }
}

static void LightWeatherSpriteCallback(struct Sprite *sprite)
{
    //sprite->pos2.y = (u8)gSpriteCoordOffsetY;
    sprite->pos2.y = 0;
    sprite->pos1.x = gWeatherPtr->fogHScrollPosX + 32 + sprite->tSpriteColumn * 64;
    if (sprite->pos1.x >= DISPLAY_WIDTH + 32)
    {
        sprite->pos1.x = (DISPLAY_WIDTH * 2) + gWeatherPtr->fogHScrollPosX - (4 - sprite->tSpriteColumn) * 64;
        sprite->pos1.x &= 0x1FF;
    }
}