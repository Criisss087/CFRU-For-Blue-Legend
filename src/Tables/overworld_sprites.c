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

const union AnimCmd gAnimCmd_Bird_FaceDown[] = {
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};
const union AnimCmd gAnimCmd_Bird_FaceUp[] = {
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(5, 8),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};
const union AnimCmd gAnimCmd_Bird_FaceLeft[] = {
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_FRAME(7, 8),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};
const union AnimCmd gAnimCmd_Bird_FaceRight[] = {
    ANIMCMD_FRAME(2, 16, .hFlip = TRUE),
    ANIMCMD_FRAME(7, 8, .hFlip = TRUE),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};
const union AnimCmd gAnimCmd_Bird_StepDown[] = {
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};
const union AnimCmd gAnimCmd_Bird_StepUp[] = {
    ANIMCMD_FRAME(5, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};
const union AnimCmd gAnimCmd_Bird_StepLeft[] = {
    ANIMCMD_FRAME(7, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(8, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};
const union AnimCmd gAnimCmd_Bird_StepRight[] = {
    ANIMCMD_FRAME(7, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 8, .hFlip = TRUE),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};
const union AnimCmd gAnimCmd_Bird_StepDown_Fast[] = {
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_StepUp_Fast[] = {
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_StepLeft_Fast[] = {
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(8, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_StepRight_Fast[] = {
    ANIMCMD_FRAME(7, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};
const union AnimCmd gAnimCmd_Bird_StepDown_Fast2[] = {
    ANIMCMD_FRAME(3, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(4, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_StepUp_Fast2[] = {
    ANIMCMD_FRAME(5, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(6, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_StepLeft_Fast2[] = {
    ANIMCMD_FRAME(7, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_FRAME(8, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_StepRight_Fast2[] = {
    ANIMCMD_FRAME(7, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};
const union AnimCmd gAnimCmd_Bird_StepDown_Fast3[] = {
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_StepUp_Fast3[] = {
    ANIMCMD_FRAME(5, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(6, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_StepLeft_Fast3[] = {
    ANIMCMD_FRAME(7, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(8, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_StepRight_Fast3[] = {
    ANIMCMD_FRAME(7, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_RunDown[] = {
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(3, 3),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(4, 3),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_RunUp[] = {
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(5, 3),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(6, 3),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_RunLeft[] = {
    ANIMCMD_FRAME(2, 5),
    ANIMCMD_FRAME(7, 3),
    ANIMCMD_FRAME(2, 5),
    ANIMCMD_FRAME(8, 3),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gAnimCmd_Bird_RunRight[] = {
    ANIMCMD_FRAME(2, 5, .hFlip = TRUE),
    ANIMCMD_FRAME(7, 3, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 5, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 3, .hFlip = TRUE),
    ANIMCMD_LOOP(1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd *const gObjectEventImageAnimTable_Bird[] = {
    gAnimCmd_Bird_FaceDown,
    gAnimCmd_Bird_FaceUp,
    gAnimCmd_Bird_FaceLeft,
    gAnimCmd_Bird_FaceRight,
    gAnimCmd_Bird_StepDown,
    gAnimCmd_Bird_StepUp,
    gAnimCmd_Bird_StepLeft,
    gAnimCmd_Bird_StepRight,
    gAnimCmd_Bird_StepDown_Fast,
    gAnimCmd_Bird_StepUp_Fast,
    gAnimCmd_Bird_StepLeft_Fast,
    gAnimCmd_Bird_StepRight_Fast,
    gAnimCmd_Bird_StepDown_Fast2,
    gAnimCmd_Bird_StepUp_Fast2,
    gAnimCmd_Bird_StepLeft_Fast2,
    gAnimCmd_Bird_StepRight_Fast2,
    gAnimCmd_Bird_StepDown_Fast3,
    gAnimCmd_Bird_StepUp_Fast3,
    gAnimCmd_Bird_StepLeft_Fast3,
    gAnimCmd_Bird_StepRight_Fast3,
    gAnimCmd_Bird_RunDown,
    gAnimCmd_Bird_RunUp,
    gAnimCmd_Bird_RunLeft,
    gAnimCmd_Bird_RunRight,
};

extern const u8 gEventObjectPic_1Tiles[];
extern const u8 gEventObjectPic_133Tiles[];
extern const u8 gEventObjectPic_134Tiles[];
extern const u8 gEventObjectPic_19Tiles[];
extern const u8 gEventObjectPic_21Tiles[];
extern const u8 gEventObjectPic_22Tiles[];
extern const u8 gEventObjectPic_29Tiles[];
extern const u8 gEventObjectPic_34Tiles[];
extern const u8 gEventObjectPic_82Tiles[];
extern const u8 gEventObjectPic_135Tiles[];
extern const u8 gEventObjectPic_102Tiles[];
extern const u8 gEventObjectPic_103Tiles[];
extern const u8 gEventObjectPic_104Tiles[];
extern const u8 gEventObjectPic_105Tiles[];
extern const u8 gEventObjectPic_106Tiles[];
extern const u8 gEventObjectPic_107Tiles[];
extern const u8 gEventObjectPic_124Tiles[];
extern const u8 gEventObjectPic_136Tiles[];
extern const u8 gEventObjectPic_137Tiles[];
extern const u8 gEventObjectPic_148Tiles[];
extern const u8 gEventObjectPic_149Tiles[];
extern const u8 gEventObjectPic_150Tiles[];

static const struct SpriteFrameImage gEventObjectPicTable_1[] =
{
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 8),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 9),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 10),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 11),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 12),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 13),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 14),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 15),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 16),
    overworld_frame(gEventObjectPic_1Tiles, 2, 4, 17),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_1 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1100,  //PAL 0
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
    .anims = gEventObjectImageAnimTable_PlayerNormal,
    .images = gEventObjectPicTable_1,
    .affineAnims = gDummySpriteAffineAnimTable,
};

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
static const struct SpriteFrameImage gEventObjectPicTable_22[] =
{
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 8),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 9),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 10),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 11),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 12),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 13),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 14),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 15),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 16),
    overworld_frame(gEventObjectPic_22Tiles, 2, 4, 17),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_22 =
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
    .gender = FEMALE,
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_PlayerNormal,
    .images = gEventObjectPicTable_22,
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


static const struct SpriteFrameImage gEventObjectPicTable_82[] =
{
    overworld_frame(gEventObjectPic_82Tiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_82Tiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_82Tiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_82Tiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_82Tiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_82Tiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_82Tiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_82Tiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_82Tiles, 2, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_82 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1126, 
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
    .images = gEventObjectPicTable_82,
    .affineAnims = gDummySpriteAffineAnimTable,
};
static const struct SpriteFrameImage gEventObjectPicTable_102[] =
{
    overworld_frame(gEventObjectPic_102Tiles, 8, 8, 0),
    overworld_frame(gEventObjectPic_102Tiles, 8, 8, 1),
    overworld_frame(gEventObjectPic_102Tiles, 8, 8, 2),
    overworld_frame(gEventObjectPic_102Tiles, 8, 8, 3),
    overworld_frame(gEventObjectPic_102Tiles, 8, 8, 4),
    overworld_frame(gEventObjectPic_102Tiles, 8, 8, 5),
    overworld_frame(gEventObjectPic_102Tiles, 8, 8, 6),
    overworld_frame(gEventObjectPic_102Tiles, 8, 8, 7),
    overworld_frame(gEventObjectPic_102Tiles, 8, 8, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_102 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1128,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (64 * 64) / 2,
    .width = 64,
    .height = 64,
    .shadowSize = SHADOW_SIZE_M, 
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, 
    .gender = MALE, 
    .oam = gEventObjectBaseOam_64x64,
    .subspriteTables = gEventObjectSpriteOamTables_64x64,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_102,
    .affineAnims = gDummySpriteAffineAnimTable,
};
static const struct SpriteFrameImage gEventObjectPicTable_103[] =
{
    overworld_frame(gEventObjectPic_103Tiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_103Tiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_103Tiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_103Tiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_103Tiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_103Tiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_103Tiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_103Tiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_103Tiles, 2, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_103 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1123,  //PAL 4
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
    .images = gEventObjectPicTable_103,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_104[] =
{
    overworld_frame(gEventObjectPic_104Tiles, 8, 8, 0),
    overworld_frame(gEventObjectPic_104Tiles, 8, 8, 1),
    overworld_frame(gEventObjectPic_104Tiles, 8, 8, 2),
    overworld_frame(gEventObjectPic_104Tiles, 8, 8, 3),
    overworld_frame(gEventObjectPic_104Tiles, 8, 8, 4),
    overworld_frame(gEventObjectPic_104Tiles, 8, 8, 5),
    overworld_frame(gEventObjectPic_104Tiles, 8, 8, 6),
    overworld_frame(gEventObjectPic_104Tiles, 8, 8, 7),
    overworld_frame(gEventObjectPic_104Tiles, 8, 8, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_104 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1128,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (64 * 64) / 2,
    .width = 64,
    .height = 64,
    .shadowSize = SHADOW_SIZE_M, 
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, 
    .gender = MALE, 
    .oam = gEventObjectBaseOam_64x64,
    .subspriteTables = gEventObjectSpriteOamTables_64x64,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_104,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_105[] =
{
    overworld_frame(gEventObjectPic_105Tiles, 4, 4, 0),
    overworld_frame(gEventObjectPic_105Tiles, 4, 4, 1),
    overworld_frame(gEventObjectPic_105Tiles, 4, 4, 2),
    overworld_frame(gEventObjectPic_105Tiles, 4, 4, 3),
    overworld_frame(gEventObjectPic_105Tiles, 4, 4, 4),
    overworld_frame(gEventObjectPic_105Tiles, 4, 4, 5),
    overworld_frame(gEventObjectPic_105Tiles, 4, 4, 6),
    overworld_frame(gEventObjectPic_105Tiles, 4, 4, 7),
    overworld_frame(gEventObjectPic_105Tiles, 4, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_105 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1105,
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
    .images = gEventObjectPicTable_105,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_106[] =
{
    overworld_frame(gEventObjectPic_106Tiles, 4, 4, 0),
    overworld_frame(gEventObjectPic_106Tiles, 4, 4, 1),
    overworld_frame(gEventObjectPic_106Tiles, 4, 4, 2),
    overworld_frame(gEventObjectPic_106Tiles, 4, 4, 3),
    overworld_frame(gEventObjectPic_106Tiles, 4, 4, 4),
    overworld_frame(gEventObjectPic_106Tiles, 4, 4, 5),
    overworld_frame(gEventObjectPic_106Tiles, 4, 4, 6),
    overworld_frame(gEventObjectPic_106Tiles, 4, 4, 7),
    overworld_frame(gEventObjectPic_106Tiles, 4, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_106 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1127,
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
    .images = gEventObjectPicTable_106,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_107[] =
{
    overworld_frame(gEventObjectPic_107Tiles, 4, 4, 0),
    overworld_frame(gEventObjectPic_107Tiles, 4, 4, 1),
    overworld_frame(gEventObjectPic_107Tiles, 4, 4, 2),
    overworld_frame(gEventObjectPic_107Tiles, 4, 4, 3),
    overworld_frame(gEventObjectPic_107Tiles, 4, 4, 4),
    overworld_frame(gEventObjectPic_107Tiles, 4, 4, 5),
    overworld_frame(gEventObjectPic_107Tiles, 4, 4, 6),
    overworld_frame(gEventObjectPic_107Tiles, 4, 4, 7),
    overworld_frame(gEventObjectPic_107Tiles, 4, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_107 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1104,
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
    .images = gEventObjectPicTable_107,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_124[] =
{
    overworld_frame(gEventObjectPic_124Tiles, 4, 4, 0),
    overworld_frame(gEventObjectPic_124Tiles, 4, 4, 1),
    overworld_frame(gEventObjectPic_124Tiles, 4, 4, 2),
    overworld_frame(gEventObjectPic_124Tiles, 4, 4, 3),
    overworld_frame(gEventObjectPic_124Tiles, 4, 4, 4),
    overworld_frame(gEventObjectPic_124Tiles, 4, 4, 5),
    overworld_frame(gEventObjectPic_124Tiles, 4, 4, 6),
    overworld_frame(gEventObjectPic_124Tiles, 4, 4, 7),
    overworld_frame(gEventObjectPic_124Tiles, 4, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_124 =
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
    .images = gEventObjectPicTable_124,
    .affineAnims = gDummySpriteAffineAnimTable,
};


static const struct SpriteFrameImage gEventObjectPicTable_133[] =
{
    overworld_frame(gEventObjectPic_133Tiles, 4, 4, 0),
    overworld_frame(gEventObjectPic_133Tiles, 4, 4, 1),
    overworld_frame(gEventObjectPic_133Tiles, 4, 4, 2),
    overworld_frame(gEventObjectPic_133Tiles, 4, 4, 3),
    overworld_frame(gEventObjectPic_133Tiles, 4, 4, 4),
    overworld_frame(gEventObjectPic_133Tiles, 4, 4, 5),
    overworld_frame(gEventObjectPic_133Tiles, 4, 4, 6),
    overworld_frame(gEventObjectPic_133Tiles, 4, 4, 7),
    overworld_frame(gEventObjectPic_133Tiles, 4, 4, 8),
};
const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_133 =
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
    .images = gEventObjectPicTable_133,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_134[] =
{
    overworld_frame(gEventObjectPic_134Tiles, 4, 4, 0),
    overworld_frame(gEventObjectPic_134Tiles, 4, 4, 1),
    overworld_frame(gEventObjectPic_134Tiles, 4, 4, 2),
    overworld_frame(gEventObjectPic_134Tiles, 4, 4, 3),
    overworld_frame(gEventObjectPic_134Tiles, 4, 4, 4),
    overworld_frame(gEventObjectPic_134Tiles, 4, 4, 5),
    overworld_frame(gEventObjectPic_134Tiles, 4, 4, 6),
    overworld_frame(gEventObjectPic_134Tiles, 4, 4, 7),
    overworld_frame(gEventObjectPic_134Tiles, 4, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_134 =
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
    .images = gEventObjectPicTable_134,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_135[] =
{
    overworld_frame(gEventObjectPic_135Tiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_135Tiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_135Tiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_135Tiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_135Tiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_135Tiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_135Tiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_135Tiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_135Tiles, 2, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_135 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1104,  //PAL 4
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, 
    .gender = MALE, 
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_135,
    .affineAnims = gDummySpriteAffineAnimTable,
};
static const struct SpriteFrameImage gEventObjectPicTable_136[] =
{
    overworld_frame(gEventObjectPic_136Tiles, 4, 4, 0),
    overworld_frame(gEventObjectPic_136Tiles, 4, 4, 1),
    overworld_frame(gEventObjectPic_136Tiles, 4, 4, 2),
    overworld_frame(gEventObjectPic_136Tiles, 4, 4, 3),
    overworld_frame(gEventObjectPic_136Tiles, 4, 4, 4),
    overworld_frame(gEventObjectPic_136Tiles, 4, 4, 5),
    overworld_frame(gEventObjectPic_136Tiles, 4, 4, 6),
    overworld_frame(gEventObjectPic_136Tiles, 4, 4, 7),
    overworld_frame(gEventObjectPic_136Tiles, 4, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_136 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1129,
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
    .anims = gObjectEventImageAnimTable_Bird,
    .images = gEventObjectPicTable_136,
    .affineAnims = gDummySpriteAffineAnimTable,
};
static const struct SpriteFrameImage gEventObjectPicTable_137[] =
{
    overworld_frame(gEventObjectPic_137Tiles, 4, 4, 0),
    overworld_frame(gEventObjectPic_137Tiles, 4, 4, 1),
    overworld_frame(gEventObjectPic_137Tiles, 4, 4, 2),
    overworld_frame(gEventObjectPic_137Tiles, 4, 4, 3),
    overworld_frame(gEventObjectPic_137Tiles, 4, 4, 4),
    overworld_frame(gEventObjectPic_137Tiles, 4, 4, 5),
    overworld_frame(gEventObjectPic_137Tiles, 4, 4, 6),
    overworld_frame(gEventObjectPic_137Tiles, 4, 4, 7),
    overworld_frame(gEventObjectPic_137Tiles, 4, 4, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_137 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1129,
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
    .anims = gObjectEventImageAnimTable_Bird,
    .images = gEventObjectPicTable_137,
    .affineAnims = gDummySpriteAffineAnimTable,
};
static const struct SpriteFrameImage gEventObjectPicTable_148[] =
{
    overworld_frame(gEventObjectPic_148Tiles, 8, 8, 0),
    overworld_frame(gEventObjectPic_148Tiles, 8, 8, 1),
    overworld_frame(gEventObjectPic_148Tiles, 8, 8, 2),
    overworld_frame(gEventObjectPic_148Tiles, 8, 8, 3),
    overworld_frame(gEventObjectPic_148Tiles, 8, 8, 4),
    overworld_frame(gEventObjectPic_148Tiles, 8, 8, 5),
    overworld_frame(gEventObjectPic_148Tiles, 8, 8, 6),
    overworld_frame(gEventObjectPic_148Tiles, 8, 8, 7),
    overworld_frame(gEventObjectPic_148Tiles, 8, 8, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_148 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1113,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (64 * 64) / 2,
    .width = 64,
    .height = 64,
    .shadowSize = SHADOW_SIZE_M, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = MALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_64x64,
    .subspriteTables = gEventObjectSpriteOamTables_64x64,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_148,
    .affineAnims = gDummySpriteAffineAnimTable,
};
static const struct SpriteFrameImage gEventObjectPicTable_149[] =
{
    overworld_frame(gEventObjectPic_149Tiles, 8, 8, 0),
    overworld_frame(gEventObjectPic_149Tiles, 8, 8, 1),
    overworld_frame(gEventObjectPic_149Tiles, 8, 8, 2),
    overworld_frame(gEventObjectPic_149Tiles, 8, 8, 3),
    overworld_frame(gEventObjectPic_149Tiles, 8, 8, 4),
    overworld_frame(gEventObjectPic_149Tiles, 8, 8, 5),
    overworld_frame(gEventObjectPic_149Tiles, 8, 8, 6),
    overworld_frame(gEventObjectPic_149Tiles, 8, 8, 7),
    overworld_frame(gEventObjectPic_149Tiles, 8, 8, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_149 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1113,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (64 * 64) / 2,
    .width = 64,
    .height = 64,
    .shadowSize = SHADOW_SIZE_M, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = MALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_64x64,
    .subspriteTables = gEventObjectSpriteOamTables_64x64,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_149,
    .affineAnims = gDummySpriteAffineAnimTable,
};
static const struct SpriteFrameImage gEventObjectPicTable_150[] =
{
    overworld_frame(gEventObjectPic_150Tiles, 8, 8, 0),
    overworld_frame(gEventObjectPic_150Tiles, 8, 8, 1),
    overworld_frame(gEventObjectPic_150Tiles, 8, 8, 2),
    overworld_frame(gEventObjectPic_150Tiles, 8, 8, 3),
    overworld_frame(gEventObjectPic_150Tiles, 8, 8, 4),
    overworld_frame(gEventObjectPic_150Tiles, 8, 8, 5),
    overworld_frame(gEventObjectPic_150Tiles, 8, 8, 6),
    overworld_frame(gEventObjectPic_150Tiles, 8, 8, 7),
    overworld_frame(gEventObjectPic_150Tiles, 8, 8, 8),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_150 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1113,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (64 * 64) / 2,
    .width = 64,
    .height = 64,
    .shadowSize = SHADOW_SIZE_M, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = MALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_64x64,
    .subspriteTables = gEventObjectSpriteOamTables_64x64,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_150,
    .affineAnims = gDummySpriteAffineAnimTable,
};