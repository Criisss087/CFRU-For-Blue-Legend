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
 
#define gTrainerBackPicPalette_Red (const u8*) 0x8E76EBC
#define gTrainerBackPicPalette_Leaf (const u8*) 0x8E76EE4
//#define gTrainerPalette_Brendan (const u8*) 0x8E550A4
//#define gTrainerPalette_May (const u8*) 0x8E553CC
#define gTrainerPalette_PokeDude (const u8*) 0x8E76F0C
#define gTrainerPalette_OldMan (const u8*) 0x8E76F34

extern const u8 gTrainerBackPic_BrendanPal[];
#define gTrainerPalette_Brendan gTrainerBackPic_BrendanPal
extern const u8 gTrainerBackPic_MayPal[];
#define gTrainerPalette_May gTrainerBackPic_MayPal

extern const u8 gTrainerBackPic_WallyPal[];
#define gTrainerPalette_Wally gTrainerBackPic_WallyPal
extern const u8 gTrainerBackPic_LancePal[];
#define gTrainerPalette_Lance gTrainerBackPic_LancePal

const struct CompressedSpritePalette gTrainerBackPicPaletteTable[] =
{
	[TRAINER_BACK_PIC_RED] =		{gTrainerBackPicPalette_Red, 	TRAINER_BACK_PIC_RED},
	[TRAINER_BACK_PIC_LEAF] =		{gTrainerBackPicPalette_Leaf, 	TRAINER_BACK_PIC_LEAF},
	[TRAINER_BACK_PIC_BRENDAN] =	{gTrainerPalette_Brendan, 		TRAINER_BACK_PIC_BRENDAN},
	[TRAINER_BACK_PIC_MAY] =		{gTrainerPalette_May, 			TRAINER_BACK_PIC_MAY},
	[TRAINER_BACK_PIC_POKE_DUDE] =	{gTrainerPalette_PokeDude, 		TRAINER_BACK_PIC_POKE_DUDE},
	[TRAINER_BACK_PIC_OLD_MAN] =	{gTrainerPalette_OldMan, 		TRAINER_BACK_PIC_OLD_MAN},
	[TRAINER_BACK_PIC_WALLY] =		{gTrainerPalette_Wally, 		TRAINER_BACK_PIC_WALLY},
	[TRAINER_BACK_PIC_LANCE] =		{gTrainerPalette_Lance, 		TRAINER_BACK_PIC_LANCE},

};

#define gTrainerBackAnims_Red (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Leaf (const union AnimCmd* const*) 0x8239F4C
#define gTrainerBackAnims_Brendan (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_May (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_PokeDude (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_OldMan (const union AnimCmd* const*) 0x8239F5C

#define gTrainerBackAnims_Wally (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_Lance (const union AnimCmd* const*) 0x8239F54

const union AnimCmd* const* const gTrainerBackAnimsPtrTable[] =
{
	[TRAINER_BACK_PIC_RED] = gTrainerBackAnims_Red,
	[TRAINER_BACK_PIC_LEAF] = gTrainerBackAnims_Leaf,
	[TRAINER_BACK_PIC_BRENDAN] = gTrainerBackAnims_Brendan,
	[TRAINER_BACK_PIC_MAY] = gTrainerBackAnims_May,
	[TRAINER_BACK_PIC_POKE_DUDE] = gTrainerBackAnims_PokeDude,
	[TRAINER_BACK_PIC_OLD_MAN] = gTrainerBackAnims_OldMan,
	[TRAINER_BACK_PIC_WALLY] = gTrainerBackAnims_Wally,
	[TRAINER_BACK_PIC_LANCE] = gTrainerBackAnims_Lance,

};

const struct MonCoords gTrainerBackPicCoords[] =
{
	[TRAINER_BACK_PIC_RED] = 		{.coords = 8, .y_offset = 5},
	[TRAINER_BACK_PIC_LEAF] = 		{.coords = 8, .y_offset = 5},
	[TRAINER_BACK_PIC_BRENDAN] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_MAY] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_POKE_DUDE] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_OLD_MAN] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_WALLY] = 		{.coords = 8, .y_offset = 7},
	[TRAINER_BACK_PIC_LANCE] = 		{.coords = 8, .y_offset = 4},

};

#define gOamData_TrainerBacksprite (void*) 0x824F018
#define gAffineAnims_TrainerBacksprite (void*) 0x82348C8
#define gSpriteCB_TrainerBacksprite (void*) (0x80120C4 | 1)

#define gTrainerBackPicTable_Red (void*) 0x8234718
#define gTrainerBackPicTable_Leaf (void*) 0x8234740
//#define gTrainerBackPicTable_Brendan (void*) 0x82347A8
//#define gTrainerBackPicTable_May (void*) 0x82347C8
#define gTrainerBackPicTable_PokeDude (void*) 0x8234768
#define gTrainerBackPicTable_OldMan (void*) 0x8234788

extern const u8 gTrainerBackPic_BrendanTiles[];
extern const u8 gTrainerBackPic_MayTiles[];

extern const u8 gTrainerBackPic_WallyTiles[];
extern const u8 gTrainerBackPic_LanceTiles[];


static const struct SpriteFrameImage sTrainerBackPicTable_Brendan[] =
{
	{gTrainerBackPic_BrendanTiles, 			0x800, 0},
	{gTrainerBackPic_BrendanTiles + 0x0800, 0x800, 0},
	{gTrainerBackPic_BrendanTiles + 0x1000, 0x800, 0},
	{gTrainerBackPic_BrendanTiles + 0x1800, 0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_May[] =
{
	{gTrainerBackPic_MayTiles, 				0x800, 0},
	{gTrainerBackPic_MayTiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_MayTiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_MayTiles + 0x1800, 	0x800, 0},
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

const struct SpriteTemplate gSpriteTemplateTable_TrainerBackSprites[] =
{
	[TRAINER_BACK_PIC_RED] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = gTrainerBackPicTable_Red,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_LEAF] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = gTrainerBackPicTable_Leaf,
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

};
