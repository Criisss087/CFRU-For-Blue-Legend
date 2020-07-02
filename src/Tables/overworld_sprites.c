#include "../defines.h"
#include "../../include/constants/event_objects.h"

#define EVENT_OBJ_PAL_TAG_NONE 0x1102
#define gEventObjectBaseOam_16x16 ((const struct OamData*) 0x83A36F8)
#define gEventObjectBaseOam_16x32 ((const struct OamData*) 0x83A3710)
#define gEventObjectBaseOam_32x32 ((const struct OamData*) 0x83A3718)
#define gEventObjectBaseOam_64x64 ((const struct OamData*) 0x83A3720)
#define gEventObjectSpriteOamTables_16x16 ((const struct SubspriteTable*) 0x83A3748)
#define gEventObjectSpriteOamTables_16x32 ((const struct SubspriteTable*) 0x83A379C)
#define gEventObjectSpriteOamTables_32x32 ((const struct SubspriteTable*) 0x83A37F0)
#define gEventObjectSpriteOamTables_64x64 ((const struct SubspriteTable*) 0x83A38D0)
#define gEventObjectImageAnimTable_PlayerNormal ((const union AnimCmd* const*) 0x83A3470)
#define gEventObjectImageAnimTable_Standard ((const union AnimCmd* const*) 0x83A3368)
#define gEventObjectImageAnimTable_Surfing ((const union AnimCmd* const*) 0x83A3584)
#define gEventObjectImageAnimTable_FieldMove ((const union AnimCmd* const*) 0x83A3638)
#define gEventObjectImageAnimTable_Fishing ((const union AnimCmd* const*) 0x83A3668)
#define gEventObjectImageAnimTable_VsSeekerBike ((const union AnimCmd* const*) 0x83A3640)

extern const u8 gEventObjectPic_GastlyTiles[];
extern const u8 gEventObjectPic_GengarTiles[];
extern const u8 gEventObjectPic_19Tiles[];
extern const u8 gEventObjectPic_21Tiles[];
extern const u8 gEventObjectPic_29Tiles[];
extern const u8 gEventObjectPic_34Tiles[];

static const struct SpriteFrameImage gEventObjectPicTable_19[] =
{
    overworld_frame(gEventObjectPic_19Tiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_19Tiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_19Tiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_19Tiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_19Tiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_19Tiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_19Tiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_19Tiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_19Tiles, 2, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_19 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1105,  //PAL 5
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = MALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_19,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_21[] =
{
    overworld_frame(gEventObjectPic_21Tiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_21Tiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_21Tiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_21Tiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_21Tiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_21Tiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_21Tiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_21Tiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_21Tiles, 2, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_21 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1104,  //PAL 4
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = MALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_21,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_29[] =
{
    overworld_frame(gEventObjectPic_29Tiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_29Tiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_29Tiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_29Tiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_29Tiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_29Tiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_29Tiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_29Tiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_29Tiles, 2, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_29 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1105,  //PAL 5
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = FEMALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_29,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_34[] =
{
    overworld_frame(gEventObjectPic_34Tiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_34Tiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_34Tiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_34Tiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_34Tiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_34Tiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_34Tiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_34Tiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_34Tiles, 2, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_34 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1104,  //PAL 4
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = MALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_34,
    .affineAnims = gDummySpriteAffineAnimTable,
};
static const struct SpriteFrameImage gEventObjectPicTable_Gengar[] =
{
    overworld_frame(gEventObjectPic_GengarTiles, 4, 4, 0),
    overworld_frame(gEventObjectPic_GengarTiles, 4, 4, 1),
    overworld_frame(gEventObjectPic_GengarTiles, 4, 4, 2),
    overworld_frame(gEventObjectPic_GengarTiles, 4, 4, 3),
    overworld_frame(gEventObjectPic_GengarTiles, 4, 4, 4),
    overworld_frame(gEventObjectPic_GengarTiles, 4, 4, 5),
    overworld_frame(gEventObjectPic_GengarTiles, 4, 4, 6),
    overworld_frame(gEventObjectPic_GengarTiles, 4, 4, 7),
    overworld_frame(gEventObjectPic_GengarTiles, 4, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_Gengar =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x110B,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (32 * 32) / 2,
    .width = 32,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = MALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_32x32,
    .subspriteTables = gEventObjectSpriteOamTables_32x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_Gengar,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_Gastly[] =
{
    overworld_frame(gEventObjectPic_GastlyTiles, 4, 4, 0),
    overworld_frame(gEventObjectPic_GastlyTiles, 4, 4, 1),
    overworld_frame(gEventObjectPic_GastlyTiles, 4, 4, 2),
    overworld_frame(gEventObjectPic_GastlyTiles, 4, 4, 3),
    overworld_frame(gEventObjectPic_GastlyTiles, 4, 4, 4),
    overworld_frame(gEventObjectPic_GastlyTiles, 4, 4, 5),
    overworld_frame(gEventObjectPic_GastlyTiles, 4, 4, 6),
    overworld_frame(gEventObjectPic_GastlyTiles, 4, 4, 7),
    overworld_frame(gEventObjectPic_GastlyTiles, 4, 4, 8),
};
const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_Gastly =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1125,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (32 * 32) / 2,
    .width = 32,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = MALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_32x32,
    .subspriteTables = gEventObjectSpriteOamTables_32x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_Gastly,
    .affineAnims = gDummySpriteAffineAnimTable,
};