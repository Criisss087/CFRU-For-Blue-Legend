
@{{BLOCK(StartersPointer)

@=======================================================================
@
@	StartersPointer, 32x64@4, 
@	+ palette 12 entries, lz77 compressed
@	+ 32 tiles lz77 compressed
@	Total size: 24 + 288 = 312
@
@	Time-stamp: 2020-06-20, 03:41:32
@	Exported by Cearn's GBA Image Transmogrifier, v0.8.6
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global StartersPointerTiles		@ 288 bytes
StartersPointerTiles:
	.byte 0x10,0x00,0x04,0x00,0x3D,0x00,0x00,0xF0,0x01,0xF0,0x01,0xF0,0x01,0x00,0x0F,0x30
	.byte 0x00,0x02,0x40,0x13,0xF0,0x17,0x03,0x00,0x00,0x33,0x31,0x00,0x00,0x33,0x11,0x15
	.byte 0x03,0x11,0x55,0x54,0x31,0xF0,0xF0,0x1F,0xF0,0x01,0xF0,0x01,0x90,0x05,0x13,0x51
	.byte 0x00,0x30,0x03,0x51,0x55,0x00,0x13,0x55,0x55,0x00,0x06,0x20,0x03,0x84,0x00,0x0A
	.byte 0x44,0x13,0x55,0x45,0x10,0x03,0x12,0x55,0x16,0x55,0x45,0x15,0x00,0x03,0x31,0x00
	.byte 0x12,0x00,0x03,0x14,0x40,0x03,0x50,0x03,0x54,0x45,0x14,0x03,0x44,0x44,0x3F,0x12
	.byte 0x03,0x00,0x8D,0xF0,0x01,0xF0,0x01,0x00,0xCB,0xE0,0x03,0x30,0x7D,0x00,0x55,0x24
	.byte 0x22,0x41,0x55,0x14,0x22,0x51,0x01,0x55,0x12,0x11,0x51,0x45,0x31,0x33,0x00,0x03

	.byte 0x00,0x00,0x41,0x24,0x31,0x00,0x13,0x11,0x03,0x00,0x00,0x30,0x33,0x00,0x00,0x41
	.byte 0x44,0x31,0x1F,0x00,0x21,0x22,0x70,0x0F,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01
	.byte 0xFF,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0
	.byte 0x01,0xFF,0xF0,0x01,0x61,0x37,0xF0,0x01,0x82,0x03,0xF0,0x1B,0xF0,0x01,0xF0,0x01
	.byte 0xA2,0x66,0xE0,0x02,0x63,0xF2,0x03,0x02,0x12,0x54,0x13,0x54,0x45,0x44,0xFF,0x12
	.byte 0x63,0xF2,0x03,0x42,0x07,0x02,0x03,0x42,0x91,0xF0,0x01,0xF0,0x01,0xF0,0x01,0x92
	.byte 0x21,0xFF,0x45,0x12,0x30,0x03,0x24,0x21,0x02,0x0B,0x11,0x09,0x13,0x55,0x14,0x33
	.byte 0x00,0x03,0x03,0x13,0x02,0x5B,0x0A,0x30,0x11,0x31,0x00,0x12,0x63,0x42,0x42,0x03

	.byte 0x11,0xBE,0x02,0x13,0x33,0xF2,0x03,0xF0,0x01,0xF0,0x01,0xF0,0x01,0x50,0x0A,0x33
	.byte 0xFC,0xF0,0xBD,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0x10,0x01,0x00,0x00,0x00
	.size	StartersPointerTiles, .-StartersPointerTiles

	.section .rodata
	.align	2
	.global StartersPointerPal		@ 24 bytes
StartersPointerPal:
	.hword 0x2010,0x0000,0xE000,0x4A03,0x9F2D,0x5202,0x0256,0x36DF
	.hword 0x2F9F,0x0000,0x01F0,0xFF00
	.size	StartersPointerPal, .-StartersPointerPal

@}}BLOCK(StartersPointer)
