#include "defines.h"
#include "../include/bg.h"
#include "../include/event_object_movement.h"
#include "../include/field_screen_effect.h"
#include "../include/gpu_regs.h"
#include "../include/item_menu.h"
#include "../include/menu.h"
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
 

#include "../include/new/build_pokemon.h"
#include "../include/new/frontier.h"
#include "../include/new/mega.h"

//Funciones
static void CB2_StartersIntro(void);
static void ClearVramOamPlttRegs(void);
static void ClearTasksAndGraphicalStructs(void);
static void VBlankCB_StartersIntro(void);
static void MainCB2_StartersIntro(void);
static void SpriteCB_StartersCursor(struct Sprite* sprite);
static void LoadStartersIntroGfx(void);
static void InitStartersIntro(void);
static void CleanWindows(void);
static void CommitWindows(void);
static void PrintStaticTexts(void);
static void ShowStarter1PokemonSprite(void);
static void ShowPokemonTypes(void);
static void ShowStartersIcons(void);
static void ShowSelectionPointer(void);
static void Task_StartersIntroFadeIn(u8 taskId);
static void Task_StartersIntroFadeOut(u8 taskId);
static void Task_StartersWaitForKeyPress(u8 taskId);
static void Task_StartersConfirm(u8 taskId);
static void Task_StartersYes(u8 taskId);
void sp122_StartersInterface(void);

// Gráficos
extern const u8 StartersIntroBGTiles[];
extern const u8 StartersIntroBGPal[];
extern const u8 StartersIntroBGMap[];
extern const u8 StartersCursorTiles[];
extern const u8 StartersCursorPal[];

extern const u8 StartersBox1Tiles[];
extern const u8 StartersBox1Pal[];
extern const u8 StartersBox2Tiles[];
extern const u8 StartersBox2Pal[];

// Textos
extern const u8 gText_StartersButtons[];
extern const u8 gText_StartersEasy[];
extern const u8 gText_StartersMedium[];
extern const u8 gText_StartersHard[]; 
extern const u8 gText_StartersConfirm[];
extern const u8 gText_YesNo[];

extern const u8 gText_Nro[];
extern const u8 gText_Atk[];
extern const u8 gText_Def[];
extern const u8 gText_SpAtk[];
extern const u8 gText_SpDef[];
extern const u8 gText_Spe[];
extern const u8 gText_Hp[];
extern const u8 gText_Style[];
extern const u8 gText_Ataque[];
extern const u8 gText_Defensa[];
extern const u8 gText_Equilibrado[];

struct StartersIntro 
{
	u8* tilemapPtr;
	u8 monSpriteId;
	u8 monId;
	u8 species;
	u8 textConfirm;
	u8 textTime;
};
#define sStartersIntroPtr (*((struct StartersIntro**) 0x203E038))

enum
{
	STARTERS_CURSOR_TAG = 0x2710,
	STARTERS_BOX1_TAG,
	STARTERS_BOX2_TAG,
};

enum Windows
{
	WIN_DIALOG,
	WIN_YESNO_BOX,
	WIN_TYPE_1,
	WIN_TYPE_2,
	WIN_NAME,
	WIN_HP,
	WIN_ATK,
	WIN_DEF,
	WIN_SPATK,
	WIN_SPDEF,
	WIN_SPE,
	WIN_INSTRUCTIONS,
	WINDOW_COUNT,
};

static const struct WindowTemplate sStartersIntroWinTemplates[WINDOW_COUNT + 1] =
{
	[WIN_DIALOG] =
	{
        .bg = 0,
        .tilemapLeft = 11,
        .tilemapTop = 11,
        .width = 14,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 1
    },
	[WIN_YESNO_BOX] =
	{
        .bg = 0,
        .tilemapLeft = 24,
        .tilemapTop = 11,
        .width = 6,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x0180
    },
	[WIN_TYPE_1] =
	{
		.bg = 1,
		.tilemapLeft = 21,
		.tilemapTop = 0,
		.width = 4,
		.height = 2,
		.paletteNum = 12,
		.baseBlock = 140,
	},
	[WIN_TYPE_2] =
	{
		.bg = 1,
		.tilemapLeft = 25,
		.tilemapTop = 0,
		.width = 4,
		.height = 2,
		.paletteNum = 12,
		.baseBlock = 149,
	},
	[WIN_NAME] =
	{
		.bg = 1,
		.tilemapLeft = 8,
		.tilemapTop = 0,
		.width = 12,
		.height = 2,
		.paletteNum = 15,
		.baseBlock = 28,
	},
	[WIN_HP] =
	{
		.bg = 1,
		.tilemapLeft = 7,
		.tilemapTop = 3,
		.width = 6,
		.height = 2,
		.paletteNum = 15,
		.baseBlock = 56,
	},
	[WIN_ATK] =
	{
		.bg = 1,
		.tilemapLeft = 7,
		.tilemapTop = 5,
		.width = 6,
		.height = 2,
		.paletteNum = 15,
		.baseBlock = 84,
	},	
	[WIN_DEF] =
	{
		.bg = 1,
		.tilemapLeft = 7,
		.tilemapTop = 7,
		.width = 6,
		.height = 2,
		.paletteNum = 15,
		.baseBlock = 98,
	},		
	[WIN_SPATK] =
	{
		.bg = 1,
		.tilemapLeft = 7,
		.tilemapTop = 9,
		.width = 6,
		.height = 2,
		.paletteNum = 15,
		.baseBlock = 112,
	},
	[WIN_SPDEF] =
	{
		.bg = 1,
		.tilemapLeft = 7,
		.tilemapTop = 11,
		.width = 6,
		.height = 2,
		.paletteNum = 15,
		.baseBlock = 126,
	},			
	[WIN_SPE] =
	{
		.bg = 1,
		.tilemapLeft = 7,
		.tilemapTop = 13,
		.width = 6,
		.height = 2,
		.paletteNum = 15,
		.baseBlock = 70,
	},
	[WIN_INSTRUCTIONS] =
	{
		.bg = 1,
		.tilemapLeft = 12,
		.tilemapTop = 18,
		.width = 22,
		.height = 2,
		.paletteNum = 15,
		.baseBlock = 167,
	},
	DUMMY_WIN_TEMPLATE
};
static const struct BgTemplate sStartersIntroBgTemplates[] =
{
	{ //Intro Background
		.bg = 2,
		.charBaseIndex = 0,
		.mapBaseIndex = 31,
		.screenSize = 0,
		.paletteMode = 0,
		.priority = 2,
		.baseTile = 0,
	},
	{ //Text
		.bg = 1,
		.charBaseIndex = 2,
		.mapBaseIndex = 6,
		.screenSize = 0,
		.paletteMode = 0,
		.priority = 1,
		.baseTile = 0,
	},
	{ //Instructions
		.bg = 0,
		.charBaseIndex = 1,
		.mapBaseIndex = 24,
		.screenSize = 0,
		.paletteMode = 0,
		.priority = 0,
		.baseTile = 0,
	}
};

static const struct OamData sOamData_Cursor =
{
	.affineMode = ST_OAM_AFFINE_OFF,
	.objMode = ST_OAM_OBJ_NORMAL,
	.shape = SPRITE_SHAPE(16x16),
	.size = SPRITE_SIZE(16x16),
	.priority = 0, 
};

static const struct SpriteTemplate sStartersCursorSpriteTemplate =
{
	.tileTag = STARTERS_CURSOR_TAG,
	.paletteTag = STARTERS_CURSOR_TAG,
	.oam = &sOamData_Cursor,
	.anims = gDummySpriteAnimTable,
	.images = NULL,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = SpriteCB_StartersCursor,
};
static const struct CompressedSpriteSheet sStartersCursorSpriteSheet = 
{
	StartersCursorTiles, 
	(16 * 16) / 2, 
	STARTERS_CURSOR_TAG
};
static const struct CompressedSpritePalette sStartersCursorSpritePalette = 
{
	StartersCursorPal, 
	STARTERS_CURSOR_TAG
};




static const struct OamData sOamData_Box1 =
{
	.affineMode = ST_OAM_AFFINE_OFF,
	.objMode = ST_OAM_OBJ_NORMAL,
	.shape = SPRITE_SHAPE(64x64),
	.size = SPRITE_SIZE(64x64),
	.priority = 1, 
};

static const struct SpriteTemplate sStartersBox1SpriteTemplate =
{
	.tileTag = STARTERS_BOX1_TAG,
	.paletteTag = STARTERS_BOX1_TAG,
	.oam = &sOamData_Box1,
	.anims = gDummySpriteAnimTable,
	.images = NULL,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = SpriteCallbackDummy,
};
static const struct CompressedSpriteSheet sStartersBox1SpriteSheet = 
{
	StartersBox1Tiles, 
	(64 * 64) / 2, 
	STARTERS_BOX1_TAG
};
static const struct CompressedSpritePalette sStartersBox1SpritePalette = 
{
	StartersBox1Pal, 
	STARTERS_BOX1_TAG
};
static const struct OamData sOamData_Box2 =
{
	.affineMode = ST_OAM_AFFINE_OFF,
	.objMode = ST_OAM_OBJ_NORMAL,
	.shape = SPRITE_SHAPE(64x64),
	.size = SPRITE_SIZE(64x64),
	.priority = 1, 
};

static const struct SpriteTemplate sStartersBox2SpriteTemplate =
{
	.tileTag = STARTERS_BOX2_TAG,
	.paletteTag = STARTERS_BOX2_TAG,
	.oam = &sOamData_Box2,
	.anims = gDummySpriteAnimTable,
	.images = NULL,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = SpriteCallbackDummy,
};
static const struct CompressedSpriteSheet sStartersBox2SpriteSheet = 
{
	StartersBox2Tiles, 
	(64 * 64) / 2, 
	STARTERS_BOX2_TAG
};
static const struct CompressedSpritePalette sStartersBox2SpritePalette = 
{
	StartersBox2Pal, 
	STARTERS_BOX2_TAG
};


static void CB2_StartersIntro(void)
{
	if (gMain.state <= 7)
	{
		switch (gMain.state) {
			case 0:
				SetVBlankCallback(NULL);
				ClearVramOamPlttRegs();
				gMain.state++;
				break;
			case 1:
				ClearTasksAndGraphicalStructs();
				gMain.state++;
				break;
			case 2:
				sStartersIntroPtr->tilemapPtr = Malloc(0x1000);
				ResetBgsAndClearDma3BusyFlags(0);
				InitBgsFromTemplates(0, sStartersIntroBgTemplates, 3);
				SetBgTilemapBuffer(2, sStartersIntroPtr->tilemapPtr);
				gMain.state++;
				break;
			case 3:
				LoadStartersIntroGfx();
				gMain.state++;
				break;
			case 4:
				if (IsDma3ManagerBusyWithBgCopy() != TRUE)
				{
					ShowBg(0);
					ShowBg(1);
					ShowBg(2);
					CopyBgTilemapBufferToVram(2);
					gMain.state++;
				}
				break;
			case 5:
				InitWindows(sStartersIntroWinTemplates);
				DeactivateAllTextPrinters();
				gMain.state++;
				break;
			case 6:
				BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
				gMain.state++;
				break;
			case 7:
				SetVBlankCallback(VBlankCB_StartersIntro);
				InitStartersIntro();
				CreateTask(Task_StartersIntroFadeIn, 0);
				SetMainCallback2(MainCB2_StartersIntro);
				gMain.state = 0;
				break;
		}
	}
}
static void ClearVramOamPlttRegs(void)
{
	DmaFill16(3, 0, VRAM, VRAM_SIZE);
	DmaFill32(3, 0, OAM, OAM_SIZE);
	DmaFill16(3, 0, PLTT, PLTT_SIZE);
	SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
	SetGpuReg(REG_OFFSET_BG3CNT, DISPCNT_MODE_0);
	SetGpuReg(REG_OFFSET_BG2CNT, DISPCNT_MODE_0);
	SetGpuReg(REG_OFFSET_BG1CNT, DISPCNT_MODE_0);
	SetGpuReg(REG_OFFSET_BG0CNT, DISPCNT_MODE_0);
	SetGpuReg(REG_OFFSET_BG3HOFS, DISPCNT_MODE_0);
	SetGpuReg(REG_OFFSET_BG3VOFS, DISPCNT_MODE_0);
	SetGpuReg(REG_OFFSET_BG2HOFS, DISPCNT_MODE_0);
	SetGpuReg(REG_OFFSET_BG2VOFS, DISPCNT_MODE_0);
	SetGpuReg(REG_OFFSET_BG1HOFS, DISPCNT_MODE_0);
	SetGpuReg(REG_OFFSET_BG1VOFS, DISPCNT_MODE_0);
	SetGpuReg(REG_OFFSET_BG0HOFS, DISPCNT_MODE_0);
	SetGpuReg(REG_OFFSET_BG0VOFS, DISPCNT_MODE_0);
}
static void ClearTasksAndGraphicalStructs(void)
{
	ScanlineEffect_Stop();
	ResetTasks();
	ResetSpriteData();
	ResetTempTileDataBuffers();
	ResetPaletteFade();
	FreeAllSpritePalettes();
}
typedef void (*TransferPlttBuffer_T) (void);
#define TransferPlttBuffer ((TransferPlttBuffer_T) (0x08070474 |1))
static void VBlankCB_StartersIntro(void)
{
	LoadOam();
	ProcessSpriteCopyRequests();
	TransferPlttBuffer();
}

static void MainCB2_StartersIntro(void)
{
	RunTasks();
	AnimateSprites();
	BuildOamBuffer();
	UpdatePaletteFade();
}
static void SpriteCB_StartersCursor(struct Sprite* sprite)
{
	sprite->pos1.y = 31 + ((sStartersIntroPtr->monId-1) * 20);

	if (sprite->data[1])
	{
		sprite->data[0] -= 1;
		if (sprite->data[0] == 0)
			sprite->data[1] = FALSE;
	}
	else
	{
		sprite->data[0] += 1;
		if (sprite->data[0] == 20)
			sprite->data[1] = TRUE;
	}

	sprite->pos2.x = 170 - ((sStartersIntroPtr->monId%2)*25) - sprite->data[0] / 4;
}

static void LoadStartersIntroGfx(void)
{
	decompress_and_copy_tile_data_to_vram(2, &StartersIntroBGTiles, 0, 0, 0);
	LZDecompressWram(StartersIntroBGMap, sStartersIntroPtr->tilemapPtr);
	LoadPalette(StartersIntroBGPal, 0, 0x20);
	LoadMenuElementsPalette(0xC0, 1);
}

static void InitStartersIntro(void)
{
	CleanWindows();
	CommitWindows();

	ShowStarter1PokemonSprite();
	PrintStaticTexts();
	ShowPokemonTypes();
	ShowStartersIcons();
	ShowSelectionPointer();

	CommitWindows();
}
static void CleanWindows(void)
{
	for (int i = 0; i < WINDOW_COUNT; ++i)
		FillWindowPixelBuffer(i, PIXEL_FILL(0));
}
static void CommitWindows(void)
{
	for (u8 i = 0; i < WINDOW_COUNT; ++i)
	{
		CopyWindowToVram(i, 3);
		PutWindowTilemap(i);
	}
}
static void PrintStaticTexts(void)
{
	struct TextColor white =
	{
		.bgColor = 0, //Transparent
		.fgColor = 1, //White
		.shadowColor = 2,
	};

	struct TextColor black =
	{
		.bgColor = 0, 
		.fgColor = 15,
		.shadowColor = 3,
	};

	if(sStartersIntroPtr->monId == 0)
	{
		sStartersIntroPtr->monId = 1;
		sStartersIntroPtr->species = SPECIES_BULBASAUR;
	}
	else
	{
		switch (sStartersIntroPtr->monId)
		{
		case 1:
			sStartersIntroPtr->species = SPECIES_BULBASAUR;
			break;
		case 2:
			sStartersIntroPtr->species = SPECIES_CHARMANDER;
			break;
		case 3:
			sStartersIntroPtr->species = SPECIES_SQUIRTLE;
		default:
			break;
		}
	}

	WindowPrint(WIN_INSTRUCTIONS, 0, 2, 4, &white, 0, gText_StartersButtons);

	ClearStdWindowAndFrameToTransparent(WIN_NAME, 1);
	ClearStdWindowAndFrameToTransparent(WIN_HP, 1);
	ClearStdWindowAndFrameToTransparent(WIN_SPE, 1);
	ClearStdWindowAndFrameToTransparent(WIN_ATK, 1);
	ClearStdWindowAndFrameToTransparent(WIN_DEF, 1);
	ClearStdWindowAndFrameToTransparent(WIN_SPATK, 1);
	ClearStdWindowAndFrameToTransparent(WIN_SPDEF, 1);

	GetSpeciesName(gStringVar1,sStartersIntroPtr->species);
	StringAppend(gStringVar1, gText_Nro);
	ConvertIntToDecimalStringN(gStringVar2, sStartersIntroPtr->species, STR_CONV_MODE_LEADING_ZEROS, 3);
	StringAppend(gStringVar1, gStringVar2);	
	WindowPrint(WIN_NAME, 0, 0, 0, &white, 0, gStringVar1);

	ConvertIntToDecimalStringN(gStringVar2, gBaseStats[sStartersIntroPtr->species].baseHP, STR_CONV_MODE_LEADING_ZEROS, 3);
	StringExpandPlaceholders(gStringVar1, gStringVar2);	
	WindowPrint(WIN_HP, 0, 0, 0, &black, 0, gStringVar1);

	ConvertIntToDecimalStringN(gStringVar2, gBaseStats[sStartersIntroPtr->species].baseSpeed, STR_CONV_MODE_LEADING_ZEROS, 3);
	StringExpandPlaceholders(gStringVar1, gStringVar2);	
	WindowPrint(WIN_SPE, 0, 0, 0, &black, 0, gStringVar1);

	ConvertIntToDecimalStringN(gStringVar2, gBaseStats[sStartersIntroPtr->species].baseAttack, STR_CONV_MODE_LEADING_ZEROS, 3);
	StringExpandPlaceholders(gStringVar1, gStringVar2);	
	WindowPrint(WIN_ATK, 0, 0, 0, &black, 0, gStringVar1);

	ConvertIntToDecimalStringN(gStringVar2, gBaseStats[sStartersIntroPtr->species].baseDefense, STR_CONV_MODE_LEADING_ZEROS, 3);
	StringExpandPlaceholders(gStringVar1, gStringVar2);	
	WindowPrint(WIN_DEF, 0, 0, 0, &black, 0, gStringVar1);

	ConvertIntToDecimalStringN(gStringVar2, gBaseStats[sStartersIntroPtr->species].baseSpAttack, STR_CONV_MODE_LEADING_ZEROS, 3);
	StringExpandPlaceholders(gStringVar1, gStringVar2);	
	WindowPrint(WIN_SPATK, 0, 0, 0, &black, 0, gStringVar1);

	ConvertIntToDecimalStringN(gStringVar2, gBaseStats[sStartersIntroPtr->species].baseSpDefense, STR_CONV_MODE_LEADING_ZEROS, 3);
	StringExpandPlaceholders(gStringVar1, gStringVar2);	
	WindowPrint(WIN_SPDEF, 0, 0, 0, &black, 0, gStringVar1);

}

static void ShowStarter1PokemonSprite(void)
{
	u32 personality = 0xFFFFFFFF;
	u32 otid = T1_READ_32(gSaveBlock2->playerTrainerId);

	if (sStartersIntroPtr->monId != 0)
	{
		FreeAndDestroyMonPicSprite(sStartersIntroPtr->monSpriteId);
	}
	else
	{
		sStartersIntroPtr->monId = 1;
		sStartersIntroPtr->species = SPECIES_BULBASAUR;
	}
	
	const struct CompressedSpritePalette* pal = GetMonSpritePalStructFromOtIdPersonality(sStartersIntroPtr->species, otid, personality);
	sStartersIntroPtr->monSpriteId = CreateMonPicSprite_HandleDeoxys(sStartersIntroPtr->species, otid, personality, 1, 133, 54, 0, pal->tag);
		
}
static void ShowPokemonTypes(void)
{
	u8 type1 = gBaseStats[sStartersIntroPtr->species].type1;
	u8 type2 = gBaseStats[sStartersIntroPtr->species].type2;

	blit_move_info_icon(WIN_TYPE_1, type1 + 1, 0, 2);
	if (type1 != type2)
		blit_move_info_icon(WIN_TYPE_2, type2 + 1, 0, 2);
	else
		FillWindowPixelBuffer(WIN_TYPE_2, PIXEL_FILL(0));
	
}

static void ShowStartersIcons(void)
{

	LoadMonIconPalette(SPECIES_BULBASAUR);
	CreateMonIcon(SPECIES_BULBASAUR, SpriteCB_PokeIcon, 195, 26, 0, 0xFFFFFFFF, FALSE);

	LoadMonIconPalette(SPECIES_CHARMANDER);
	CreateMonIcon(SPECIES_CHARMANDER, SpriteCB_PokeIcon, 220, 46, 0, 0xFFFFFFFF, FALSE);

	LoadMonIconPalette(SPECIES_SQUIRTLE);
	CreateMonIcon(SPECIES_SQUIRTLE, SpriteCB_PokeIcon, 195, 66, 0, 0xFFFFFFFF, FALSE);
	
}
static void ShowSelectionPointer(void)
{
	LoadCompressedSpriteSheetUsingHeap(&sStartersCursorSpriteSheet);
	LoadCompressedSpritePaletteUsingHeap(&sStartersCursorSpritePalette);		
	CreateSprite(&sStartersCursorSpriteTemplate, 30, 105, 0);
}

static void Task_StartersIntroFadeIn(u8 taskId)
{
	if (!gPaletteFade->active)
	{
		//PlaySE(SE_RG_CARD3); Buscar un sonido mejor
		gTasks[taskId].func = Task_StartersWaitForKeyPress;
	}
}

static void Task_StartersIntroFadeOut(u8 taskId)
{
	if (!gPaletteFade->active)
	{
		SetMainCallback2(CB2_ReturnToFieldContinueScript);
		Free(sStartersIntroPtr->tilemapPtr);
		Free(sStartersIntroPtr);
		FreeAllWindowBuffers();
		DestroyTask(taskId);
	}
}
static void Task_StartersConfirm(u8 taskId)
{

	struct TextColor MenuTextBlack =
	{
		.bgColor = 0, //Transparent
		.fgColor = 15, //White
		.shadowColor = 3,
	};	

	if (sStartersIntroPtr->textConfirm == 1)
	{
		PlaySE(SE_CORRECT);

		LoadCompressedSpriteSheetUsingHeap(&sStartersBox1SpriteSheet);
		LoadCompressedSpritePaletteUsingHeap(&sStartersBox1SpritePalette);
		CreateSprite(&sStartersBox1SpriteTemplate, 122, 104, 0);

		LoadCompressedSpriteSheetUsingHeap(&sStartersBox2SpriteSheet);
		LoadCompressedSpritePaletteUsingHeap(&sStartersBox2SpritePalette);
		CreateSprite(&sStartersBox2SpriteTemplate, 186, 104, 0);

		WindowPrint(WIN_DIALOG, 1, 8, 2, &MenuTextBlack, 0, gText_StartersConfirm);
		CopyWindowToVram(WIN_DIALOG, 3);
		PutWindowTilemap(WIN_DIALOG);

		sStartersIntroPtr->textConfirm = 0;
		sStartersIntroPtr->textTime = 10;
	}
	else if(!IsTextPrinterActive(0))
	{	
		WindowPrint(WIN_YESNO_BOX, 1, 8, 2, &MenuTextBlack, 0, gText_YesNo);
		ChoiceSetupSimple(WIN_YESNO_BOX, 2, 0, 1, 16, 2, 0);
		CopyWindowToVram(WIN_YESNO_BOX, 3);
		PutWindowTilemap(WIN_YESNO_BOX);

		gTasks[taskId].func = Task_StartersYes;
	}
}
static void Task_StartersYes(u8 taskId)
{	
	s8 choice = RboxChoiceUpdate();
    switch (choice)
    {
    case 0:
        PlaySE(SE_SELECT);
		BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_StartersIntroFadeOut;        
        break;
    case 1:
    case -1:
        PlaySE(SE_SELECT);

		FreeSpritePaletteByTag(STARTERS_BOX1_TAG);
		FreeSpriteTilesByTag(STARTERS_BOX1_TAG);
		FreeSpritePaletteByTag(STARTERS_BOX2_TAG);
		FreeSpriteTilesByTag(STARTERS_BOX2_TAG);

		for (int i = 0; i < MAX_SPRITES; ++i)
		{
			if (gSprites[i].template->tileTag == STARTERS_BOX1_TAG
			||  gSprites[i].template->tileTag == STARTERS_BOX2_TAG)
			{
				DestroySprite(&gSprites[i]);
			}
		}

		ClearStdWindowAndFrameToTransparent(WIN_DIALOG, 1);
		ClearStdWindowAndFrameToTransparent(WIN_YESNO_BOX, 1);

		gTasks[taskId].func = Task_StartersWaitForKeyPress;
        break;
    }
	 
}
static void Task_StartersWaitForKeyPress(u8 taskId)
{

	if (gMain.newKeys & A_BUTTON)
	{
		PRESSED_A:

		gSpecialVar_LastResult = sStartersIntroPtr->monSpriteId;	
		sStartersIntroPtr->textConfirm = 1;
		gTasks[taskId].func = Task_StartersConfirm;

	}
	else if (gMain.newKeys & B_BUTTON)
	{
		gSpecialVar_LastResult = 0;

		PlaySE(SE_ERROR);
		BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
		gTasks[taskId].func = Task_StartersIntroFadeOut;
	}
	else if (gMain.newAndRepeatedKeys & START_BUTTON)
	{
		PlaySE(SE_SELECT);
		sStartersIntroPtr->monId = (Random() % 3) + 1;	
		PrintStaticTexts();
		ShowPokemonTypes();
		CommitWindows();
		ShowStarter1PokemonSprite();
		goto PRESSED_A;
	}
	else if (gMain.newAndRepeatedKeys & DPAD_UP)
	{
		PlaySE(SE_SELECT);
		if (sStartersIntroPtr->monId == 1)
			sStartersIntroPtr->monId = 3;
		else
			sStartersIntroPtr->monId--;

		PrintStaticTexts();
		ShowPokemonTypes();
		CommitWindows();
		ShowStarter1PokemonSprite();
	}
	else if (gMain.newAndRepeatedKeys & DPAD_DOWN)
	{
		PlaySE(SE_SELECT);
		if (sStartersIntroPtr->monId == 3)
			sStartersIntroPtr->monId = 1;
		else
			sStartersIntroPtr->monId++;

		PrintStaticTexts();
		ShowPokemonTypes();
		CommitWindows();
		ShowStarter1PokemonSprite();
	}
}

void sp122_StartersInterface(void)
{
	sStartersIntroPtr = Calloc(sizeof(struct StartersIntro));
	sStartersIntroPtr->monId = 0;
	gSpecialVar_LastResult = FALSE;
	
	SetMainCallback2(CB2_StartersIntro);
}
