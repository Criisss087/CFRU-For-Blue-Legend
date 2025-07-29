#include "../defines.h"
#include "../../include/data2.h"
#include "../../include/sprite.h"
#include "../../include/constants/trainers.h"

/*
back_pic_tables.c
	Set up tables to switch the player's back sprite

tables to edit:
	gTrainerBackPicPaletteTable
	gTrainerBackAnimsPtrTable
	gTrainerBackPicCoords
	sTrainerBackPicTable_[backsprite]
	gSpriteTemplateTable_TrainerBackSprites
*/

extern const u8 gTrainerBackPic_BrendanPal[];
#define gTrainerPalette_Brendan gTrainerBackPic_BrendanPal

extern const u8 gTrainerBackPic_MayPal[];
#define gTrainerPalette_May gTrainerBackPic_MayPal

extern const u8 gTrainerBackPic_Brendan1Pal[];
#define gTrainerPalette_Brendan1 gTrainerBackPic_Brendan1Pal

extern const u8 gTrainerBackPic_WallyPal[];
#define gTrainerPalette_Wally gTrainerBackPic_WallyPal

extern const u8 gTrainerBackPic_LancePal[];
#define gTrainerPalette_Lance gTrainerBackPic_LancePal

extern const u8 gTrainerBackPic_LidiaPal[];
#define gTrainerPalette_Lidia gTrainerBackPic_LidiaPal

extern const u8 gTrainerBackPic_May1Pal[];
#define gTrainerPalette_May1 gTrainerBackPic_May1Pal

#define gTrainerPalette_PokeDude (const u8*) 0x8E76F0C
#define gTrainerPalette_OldMan (const u8*) 0x8E76F34

const struct CompressedSpritePalette gTrainerBackPicPaletteTable[] =
{
	[TRAINER_BACK_PIC_BRENDAN1] =	{gTrainerPalette_Brendan1, 		TRAINER_BACK_PIC_BRENDAN1},
	[TRAINER_BACK_PIC_MAY1] =		{gTrainerPalette_May1,		 	TRAINER_BACK_PIC_MAY1},
	[TRAINER_BACK_PIC_BRENDAN] =	{gTrainerPalette_Brendan, 		TRAINER_BACK_PIC_BRENDAN},
	[TRAINER_BACK_PIC_MAY] =		{gTrainerPalette_May, 			TRAINER_BACK_PIC_MAY},
	[TRAINER_BACK_PIC_POKE_DUDE] =	{gTrainerPalette_PokeDude, 		TRAINER_BACK_PIC_POKE_DUDE},
	[TRAINER_BACK_PIC_OLD_MAN] =	{gTrainerPalette_OldMan, 		TRAINER_BACK_PIC_OLD_MAN},
	[TRAINER_BACK_PIC_WALLY] =		{gTrainerPalette_Wally, 		TRAINER_BACK_PIC_WALLY},
	[TRAINER_BACK_PIC_LANCE] =		{gTrainerPalette_Lance, 		TRAINER_BACK_PIC_LANCE},
	[TRAINER_BACK_PIC_LIDIA] =		{gTrainerPalette_Lidia, 		TRAINER_BACK_PIC_LIDIA},

};

#define gTrainerBackAnims_Red (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Leaf (const union AnimCmd* const*) 0x8239F4C
#define gTrainerBackAnims_Brendan (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_May (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_PokeDude (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_OldMan (const union AnimCmd* const*) 0x8239F5C
#define gTrainerBackAnims_Brendan1 (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_Wally (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_Lance (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_Lidia (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_May1 (const union AnimCmd* const*) 0x8239F54

static const union AnimCmd sAnimCmd_Marlon[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_END
};

const union AnimCmd *const gTrainerBackAnims_Marlon[] =
{
	(void*) 0x82347E8, //sAnim_GeneralFrame0
	sAnimCmd_Marlon,
};

const union AnimCmd* const* const gTrainerBackAnimsPtrTable[] =
{
	[TRAINER_BACK_PIC_BRENDAN1] = gTrainerBackAnims_Brendan1,
	[TRAINER_BACK_PIC_MAY1] = gTrainerBackAnims_May1,
	[TRAINER_BACK_PIC_BRENDAN] = gTrainerBackAnims_Brendan,
	[TRAINER_BACK_PIC_MAY] = gTrainerBackAnims_May,
	[TRAINER_BACK_PIC_POKE_DUDE] = gTrainerBackAnims_PokeDude,
	[TRAINER_BACK_PIC_OLD_MAN] = gTrainerBackAnims_OldMan,
	[TRAINER_BACK_PIC_WALLY] = gTrainerBackAnims_Wally,
	[TRAINER_BACK_PIC_LANCE] = gTrainerBackAnims_Lance,
	[TRAINER_BACK_PIC_LIDIA] = gTrainerBackAnims_Lidia,

};

const struct MonCoords gTrainerBackPicCoords[] =
{
	[TRAINER_BACK_PIC_BRENDAN1] = 	{.coords = 8, .y_offset = 5},
	[TRAINER_BACK_PIC_MAY1] = 		{.coords = 8, .y_offset = 5},
	[TRAINER_BACK_PIC_BRENDAN] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_MAY] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_POKE_DUDE] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_OLD_MAN] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_WALLY] = 		{.coords = 8, .y_offset = 7},
	[TRAINER_BACK_PIC_LANCE] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_LIDIA] = 		{.coords = 8, .y_offset = 4},

};

#define gOamData_TrainerBacksprite (void*) 0x824F018
#define gAffineAnims_TrainerBacksprite (void*) 0x82348C8
#define gSpriteCB_TrainerBacksprite (void*) (0x80120C4 | 1)

//#define gTrainerBackPicTable_Red (void*) 0x8234718
//#define gTrainerBackPicTable_Leaf (void*) 0x8234740
//#define gTrainerBackPicTable_Brendan (void*) 0x82347A8
//#define gTrainerBackPicTable_May (void*) 0x82347C8
#define gTrainerBackPicTable_PokeDude (void*) 0x8234768
#define gTrainerBackPicTable_OldMan (void*) 0x8234788

extern const u8 gTrainerBackPic_BrendanTiles[];
extern const u8 gTrainerBackPic_MayTiles[];
extern const u8 gTrainerBackPic_Brendan1Tiles[];
extern const u8 gTrainerBackPic_May1Tiles[];
extern const u8 gTrainerBackPic_WallyTiles[];
extern const u8 gTrainerBackPic_LanceTiles[];
extern const u8 gTrainerBackPic_LidiaTiles[];


#define FIVE_FRAME_TABLE(name)                                           \
	extern const u8 gTrainerBackPic_##name##Tiles[];                     \
	static const struct SpriteFrameImage sTrainerBackPicTable_##name[] = \
	{                                                                    \
		{gTrainerBackPic_##name##Tiles + 0x0000, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x0800, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x1000, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x1800, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x2000, 0x800, 0},              \
	};

#define FOUR_FRAME_TABLE(name)                                           \
	extern const u8 gTrainerBackPic_##name##Tiles[];                     \
	static const struct SpriteFrameImage sTrainerBackPicTable_##name[] = \
	{                                                                    \
		{gTrainerBackPic_##name##Tiles + 0x0000, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x0800, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x1000, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x1800, 0x800, 0},              \
	};

FOUR_FRAME_TABLE(Brendan)
FOUR_FRAME_TABLE(May)

static const struct SpriteFrameImage sTrainerBackPicTable_Brendan1[] =
{
	{gTrainerBackPic_Brendan1Tiles, 			0x800, 0},
	{gTrainerBackPic_Brendan1Tiles + 0x0800, 0x800, 0},
	{gTrainerBackPic_Brendan1Tiles + 0x1000, 0x800, 0},
	{gTrainerBackPic_Brendan1Tiles + 0x1800, 0x800, 0},
};
static const struct SpriteFrameImage sTrainerBackPicTable_May1[] =
{
	{gTrainerBackPic_May1Tiles, 			0x800, 0},
	{gTrainerBackPic_May1Tiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_May1Tiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_May1Tiles + 0x1800, 	0x800, 0},
};
static const struct SpriteFrameImage sTrainerBackPicTable_Wally[] =
{
	{gTrainerBackPic_WallyTiles, 			0x800, 0},
	{gTrainerBackPic_WallyTiles + 0x0800, 0x800, 0},
	{gTrainerBackPic_WallyTiles + 0x1000, 0x800, 0},
	{gTrainerBackPic_WallyTiles + 0x1800, 0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Lance[] =
{
	{gTrainerBackPic_LanceTiles, 			0x800, 0},
	{gTrainerBackPic_LanceTiles + 0x0800, 0x800, 0},
	{gTrainerBackPic_LanceTiles + 0x1000, 0x800, 0},
	{gTrainerBackPic_LanceTiles + 0x1800, 0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Lidia[] =
{
	{gTrainerBackPic_LidiaTiles, 			0x800, 0},
	{gTrainerBackPic_LidiaTiles + 0x0800, 0x800, 0},
	{gTrainerBackPic_LidiaTiles + 0x1000, 0x800, 0},
	{gTrainerBackPic_LidiaTiles + 0x1800, 0x800, 0},
};

const struct SpriteTemplate gSpriteTemplateTable_TrainerBackSprites[] =
{
	[TRAINER_BACK_PIC_BRENDAN1] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Brendan1,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_MAY1] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_May1,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_BRENDAN] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Brendan,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_MAY] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_May,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_POKE_DUDE] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = gTrainerBackPicTable_PokeDude,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_OLD_MAN] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = gTrainerBackPicTable_OldMan,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},

	[TRAINER_BACK_PIC_WALLY] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Wally,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_LANCE] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Lance,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_LIDIA] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Lidia,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},

};
