.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

	@---------------
EventScript_tile18_Start:
	playsong 0x13B 0x0
	special 0x113
	applymovement MOVE_CAMERA EventScript_tile18_Move1
	applymovement MOVE_PLAYER EventScript_tile18_Move2
	pause 0x10
	sound 0x15
	applymovement 0xC EventScript_tile18_Move3
	waitmovement 0x7F
	waitmovement 0xC
	msgbox gText_tile18_String1 MSG_NORMAL @"[green_fr]Admin: Tranquil�zate, a�..."
	closeonkeypress
	sound 0x9
	showsprite 0xD
	pause 0x10
	sound 0x9
	showsprite 0xE
	applymovement 0xD EventScript_tile18_Move4
	pause 0x10
	applymovement 0xE EventScript_tile18_Move5
	waitmovement 0xE
	spriteface 0xC 0x3
	msgbox gText_tile18_String2 MSG_NORMAL @"[green_fr]Admin: V�monos."
	closeonkeypress
	applymovement 0xC EventScript_tile18_Move6
	waitmovement 0xC
	msgbox gText_tile18_String3 MSG_NORMAL @"[green_fr]Admin: �Otra vez t�?"
	closeonkeypress
	applymovement MOVE_PLAYER EventScript_tile18_Move3
	waitmovement 0xFF
	applymovement 0xC EventScript_tile18_Move7
	applymovement 0xD EventScript_tile18_Move8
	applymovement 0xE EventScript_tile18_Move9
	pause 0xA0
	sound 0x9
	pause 0x20
	sound 0x9
	pause 0x20
	sound 0x9
	waitmovement 0xE
	applymovement 0xB EventScript_tile18_Move10
	pause 0x10
	applymovement MOVE_CAMERA EventScript_tile18_Move11
	waitmovement 0x7F
	sound 0x15
	pause 0x20
	spriteface 0xB 0x3
	pause 0x30
	applymovement 0xB EventScript_tile18_Move12
	applymovement MOVE_CAMERA EventScript_tile18_Move12
	waitmovement 0xB
	msgbox gText_tile18_String4 MSG_NORMAL @"[orange_fr]Gary: �Te conozco?"
	closeonkeypress
	sound 0x15
	applymovement MOVE_PLAYER EventScript_tile18_Move13
	waitmovement 0xFF
	pause 0x30
	msgbox gText_tile18_String5 MSG_NORMAL @"[red_fr][player]: Nos vimos en la ..."
	closeonkeypress
	pause 0x30
	msgbox gText_tile18_String6 MSG_NORMAL @"[orange_fr]Gary: Si estas con ello..."
	closeonkeypress
	sound 0x15
	applymovement MOVE_PLAYER EventScript_tile18_Move14
	waitmovement 0xFF
	pause 0x15
	msgbox gText_tile18_String7 MSG_NORMAL @"[red_fr][player]: Los venc� en el ..."
	closeonkeypress
	spriteface 0xB 0x4
	pause 0x40
	spriteface 0xB 0x2
	msgbox gText_tile18_String8 MSG_NORMAL @"[orange_fr]Gary: Seguro nos volver..."
	closeonkeypress
	applymovement 0xB EventScript_tile18_Move15
	applymovement MOVE_CAMERA EventScript_tile18_Move16
	waitmovement 0xB
	sound 0x9
	pause 0x40
	fadescreen 0x1
	applymovement MOVE_CAMERA EventScript_tile18_Move17
	waitmovement 0x7F
	fadescreen 0x0
	special 0x114
	fadedefault
	setflag 0x201
	setflag 0x203
	addvar 0x5005 0x1
	release
	end


	@-----------
	@ Movements
	@-----------
EventScript_tile18_Move1:
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x10
.byte 0xFE

EventScript_tile18_Move2:
.byte 0xE
.byte 0x2
.byte 0x63
.byte 0xFE

EventScript_tile18_Move3:
.byte 0x1E
.byte 0x4
.byte 0xFE

EventScript_tile18_Move4:
.byte 0x10
.byte 0x10
.byte 0x1
.byte 0xFE

EventScript_tile18_Move5:
.byte 0x10
.byte 0x3
.byte 0xFE

EventScript_tile18_Move6:
.byte 0x13
.byte 0x13
.byte 0xFE

EventScript_tile18_Move7:
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0x11
.byte 0x60
.byte 0xFE

EventScript_tile18_Move8:
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0x11
.byte 0x60
.byte 0xFE

EventScript_tile18_Move9:
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0x11
.byte 0x60
.byte 0xFE

EventScript_tile18_Move10:
.byte 0x11
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x62
.byte 0xFE

EventScript_tile18_Move11:
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0xFE

EventScript_tile18_Move12:
.byte 0x12
.byte 0x12
.byte 0x1
.byte 0xFE

EventScript_tile18_Move13:
.byte 0x62
.byte 0xFE

EventScript_tile18_Move14:
.byte 0x63
.byte 0xFE

EventScript_tile18_Move15:
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0x11
.byte 0x60
.byte 0xFE

EventScript_tile18_Move16:
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0x60
.byte 0xFE

EventScript_tile18_Move17:
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0xFE
