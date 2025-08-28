.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"


EventScript_tile1_0X71A535:
	lock
	sound 0x15
	applymovement 0x1 EventScript_tile1_0X750003
	waitmovement 0x0
	pause 0x20
	msgbox 0x87701AA MSG_NORMAL @"[green_fr]�[player], el profesor t..."
	applymovement MOVE_PLAYER EventScript_tile1_0X750007
	waitmovement 0x0
	release
	end

EventScript_tile1_0X750003:
.byte 0x62
.byte 0x6
.byte 0xFE

EventScript_tile1_0X750007:
.byte 0x13
.byte 0xFE

EventScript_tile2_0X71A559:
	lock
	sound 0x15
	applymovement 0x1 EventScript_tile2_0X75000B
	waitmovement 0x0
	pause 0x20
	msgbox gText_tile1_0X7701AA MSG_NORMAL 
	applymovement MOVE_PLAYER EventScript_tile2_0X75000F
	waitmovement 0x0
	release
	end

EventScript_tile2_0X75000B:
.byte 0x62
.byte 0x7
.byte 0xFE

EventScript_tile2_0X75000F:
.byte 0x12
.byte 0xFE
