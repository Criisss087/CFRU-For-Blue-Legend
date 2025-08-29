.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.global EventScript_map_4_3	
	
	@---------------
EventScript_map_4_3:
.byte 0x3
.4byte EventScript_map_0X168F8E
.byte 0x4
.4byte EventScript_map_0X168FE1
.byte 0x2
.4byte EventScript_map_0X168FF0
.byte 0x0

	@---------------
EventScript_map_0X168FE1:
.2byte 0x5000
.2byte 0x1
.4byte EventScript_map_0X168FEB
.2byte 0x0

	@---------------
EventScript_map_0X168FF0:
.2byte 0x5000
.2byte 0x1
.4byte EventScript_map_0X71A700
.2byte 0x0

	@---------------
EventScript_map_0X168F8E:
	setflag 0x2CF
	compare 0x4055 0x1
	if 0x1 _call EventScript_map_0X168FC6
	compare 0x4055 0x7
	if 0x1 _call EventScript_map_0X168FD5
	compare 0x4055 0x8
	if 0x1 _call EventScript_map_0X168FC0
	checkflag 0x247
	if 0x1 _call EventScript_map_0X168FBC
	end

	@---------------
EventScript_map_0X168FEB:
	spriteface 0xFF 0x2
	end

	@---------------
EventScript_map_0X71A700:
	lockall
	applymovement 0x4 EventScript_map_0X1692B0
	waitmovement 0x0
	hidesprite 0x4
	movesprite2 0x4 0x6 0x3
	spritebehave 0x4 0x8
	clearflag 0x2B
	applymovement MOVE_PLAYER EventScript_map_0X1692B7
	waitmovement 0x0
	msgbox gText_map_0X77049E MSG_NORMAL @"[darknavyblue_fr]Oak: [player], ya..."
	pause 0x20
	sound 0x101
	msgbox gText_map_0X77053C MSG_KEEPOPEN @"[player] entreg� el paquete."
	msgbox gText_map_0X770556 MSG_KEEPOPEN @"[darknavyblue_fr]Oak: Ahora s�, cu..."
	sound 0x15
	applymovement 0x4 EventScript_map_0X750055
	applymovement MOVE_PLAYER EventScript_map_0X750055
	waitmovement 0x0
	showsprite 0x8
	applymovement 0x8 EventScript_map_0X75004B
	waitmovement 0x0
	msgbox gText_map_0X7706FC MSG_KEEPOPEN @"[darknavyblue_fr]�Oak: Pero si es ..."
	spriteface 0xFF 0x3
	msgbox gText_map_0X7707E4 MSG_KEEPOPEN @"[navyblue_fr]Ash: Hola Prof, �Qu� ..."
	spriteface 0x8 0x4
	msgbox gText_map_0X770857 MSG_KEEPOPEN @"[navyblue_fr]Ash: Hoenn eh, es un ..."
	spriteface 0x8 0x2
	spriteface 0xFF 0x2
	msgbox gText_map_0X7708B4 MSG_KEEPOPEN @"[navyblue_fr]Ash: Prof, aqu� traig..."
	applymovement MOVE_PLAYER EventScript_map_0X750059
	waitmovement 0x0
	msgbox gText_map_0X770913 MSG_NORMAL @"[red_fr][player]: Profesor, discul..."
	clearflag 0x4001
	setvar 0x5000 0x2
	setvar 0x4055 0x2
	releaseall
	end

	@---------------
EventScript_map_0X168FC6:
	movesprite2 0x4 0x6 0xB
	spritebehave 0x4 0x7
	playsong2 0x12E
	return

	@---------------
EventScript_map_0X168FD5:
	movesprite2 0x4 0x6 0xB
	spritebehave 0x4 0x7
	return

	@---------------
EventScript_map_0X168FC0:
	setvar 0x4055 0x9
	return

	@---------------
EventScript_map_0X168FBC:
	setflag 0x24F
	return

EventScript_map_0X1692B0:
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0xFE

EventScript_map_0X1692B7:
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0xFE

EventScript_map_0X750055:
.byte 0x62
.byte 0x4
.byte 0xFE

EventScript_map_0X75004B:
.byte 0x61
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0xFE

EventScript_map_0X750059:
.byte 0x26
.byte 0x26
.byte 0xFE
