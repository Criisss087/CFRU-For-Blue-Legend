.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"
	
	
	@---------------
EventScript_tile1_Start:
	setdooropened 0x24 0x9
	doorchange
	showsprite 0xC
	sound 0x19
	applymovement MOVE_PLAYER EventScript_tile1_Move1
	applymovement 0xC EventScript_tile1_Move2
	waitmovement 0xC
	setdoorclosed 0x24 0x9
	doorchange
	msgbox gText_tile1_String1 MSG_NORMAL @"[orange_fr]???: �EH!\p[orange_fr]?..."
	applymovement MOVE_PLAYER EventScript_tile1_Move3
	waitmovement 0xFF
	applymovement 0xC EventScript_tile1_Move4
	waitmovement 0xC
	hidesprite 0xC
	msgbox gText_tile1_String2 MSG_NORMAL @"[red_fr][player]: Que modales para..."
	setvar 0x5000 0x6
	setvar 0x5001 0x0
	end


	@-----------
	@ Movements
	@-----------
EventScript_tile1_Move1:
.byte 0x63
.byte 0x4E
.byte 0x5
.byte 0xFE

EventScript_tile1_Move2:
.byte 0x62
.byte 0x1D
.byte 0xFE

EventScript_tile1_Move3:
.byte 0x13
.byte 0x2
.byte 0xFE

EventScript_tile1_Move4:
.byte 0x10
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x60
.byte 0xFE
