.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@---------------
EventScript_tile2_3_0X71A65A:
	spriteface 0x6 0x3
	checkflag 0x401
	if 0x1 _goto EventScript_tile2_3_0X71A5EA
	playsong 0x12E 0x0
	applymovement 0x6 0x8750000
	sound 0x15
	waitmovement 0x0
	applymovement MOVE_PLAYER EventScript_tile2_3_0X750026
	waitmovement 0x0
	pause 0x20
	msgbox gText_tile2_3_0X770339 MSG_FACE @"[blue_fr]Hey, t�, �Tienes boleto?\..."
	special 0x113
	applymovement MOVE_CAMERA EventScript_tile2_3_0X75002A
	waitmovement 0x0
	pause 0x20
	applymovement 0x5 EventScript_tile2_3_0X750032
	sound 0x15
	waitmovement 0x0
	pause 0x20
	applymovement MOVE_CAMERA EventScript_tile2_3_0X750039
	applymovement 0x5 EventScript_tile2_3_0X750041
	waitmovement 0x0
	special 0x114
	applymovement MOVE_PLAYER EventScript_tile2_3_0X750047
	applymovement 0x6 EventScript_tile2_3_0X750047
	waitmovement 0x0
	msgbox gText_tile2_3_0X7703B8 MSG_NORMAL @"[darknavyblue_fr]Oak: As� que t� d..."
	clearflag 0x2B
	setflag 0x2D
	setflag 0x400
	setflag 0x401
	setvar 0x5000 0x1
	warp 0x4 0x3 0xFF 0x6 0xC
	waitstate
	release
	end

	@---------------
EventScript_tile2_3_0X71A5EA:
	releaseall
	end

EventScript_tile2_3_0X750000:
.byte 0x62
.byte 0xFE

EventScript_tile2_3_0X750026:
.byte 0x3
.byte 0xFE

EventScript_tile2_3_0X75002A:
.byte 0xD
.byte 0xD
.byte 0xD
.byte 0xD
.byte 0xF
.byte 0xFE

EventScript_tile2_3_0X750032:
.byte 0x2F
.byte 0x30
.byte 0x2D
.byte 0x62
.byte 0xFE

EventScript_tile2_3_0X750039:
.byte 0x12
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0xFE

EventScript_tile2_3_0X750041:
.byte 0x12
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0xFE

EventScript_tile2_3_0X750047:
.byte 0x1
.byte 0xFE

@---------------
EventScript_tile4_a_8_0X736035:
	lock
	msgbox gText_tile4_a_8_0X736069 MSG_YESNO @"�Te quieres bajar?"
	compare LASTRESULT 0x0
	if 0x1 _goto EventScript_tile4_a_8_0X736066
	clearflag 0x211
	copyvar 0x8001 0x501B
	copyvar 0x511F 0x8001
	setvar 0x501A 0x4
	warpmuted 0x3 0x5 0xD 0x8 0x1D
	release
	end

	@---------------
EventScript_tile4_a_8_0X736066:
	release
	end


	@---------------
EventScript_tile9_a_11_0X7392EB:
	sound 0x15
	applymovement 0xB 0x8750000
	waitmovement 0xB
	spriteface 0xB 0x3
	pause 0x40
	getplayerpos 0x8000 0x8001
	compare 0x8001 0xA
	if 0x1 _call EventScript_tile9_a_11_0X739377
	compare 0x8001 0xB
	if 0x1 _call EventScript_tile9_a_11_0X739383
	compare 0x8001 0xC
	if 0x1 _call EventScript_tile9_a_11_0X73938F
	msgbox gText_tile9_a_11_0X73939B MSG_NORMAL @"[navyblue_fr]Ash: �[player]!\pPor ..."
	pause 0x10
	applymovement 0xB EventScript_tile9_a_11_0X7394CE
	applymovement MOVE_PLAYER EventScript_tile9_a_11_0X7394D4
	waitmovement 0xFF
	setdooropened 0x24 0x9
	doorchange
	applymovement 0xB EventScript_tile9_a_11_0X7394DB
	applymovement MOVE_PLAYER EventScript_tile9_a_11_0X7394DF
	waitmovement 0xB
	sound 0x9
	waitmovement 0xFF
	setdoorclosed 0x24 0x9
	doorchange
	setflag 0x212
	setvar 0x5005 0x1F
	warp 0x2 0xA 0x1 0x9 0xF
	release
	end

	@---------------
EventScript_tile9_a_11_0X739377:
	applymovement MOVE_PLAYER EventScript_tile9_a_11_0X7394C9
	waitmovement 0xFF
	return

	@---------------
EventScript_tile9_a_11_0X739383:
	applymovement MOVE_PLAYER EventScript_tile9_a_11_0X7394C5
	waitmovement 0xFF
	return

	@---------------
EventScript_tile9_a_11_0X73938F:
	applymovement MOVE_PLAYER EventScript_tile9_a_11_0X7394C0
	waitmovement 0xFF
	return

EventScript_tile9_a_11_0X7394CE:
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0xFE

EventScript_tile9_a_11_0X7394D4:
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x5
.byte 0xFE

EventScript_tile9_a_11_0X7394DB:
.byte 0x11
.byte 0x60
.byte 0xFE

EventScript_tile9_a_11_0X7394DF:
.byte 0x11
.byte 0x11
.byte 0x60
.byte 0xFE

EventScript_tile9_a_11_0X7394C9:
.byte 0x13
.byte 0x10
.byte 0x13
.byte 0xFE

EventScript_tile9_a_11_0X7394C5:
.byte 0x13
.byte 0x13
.byte 0xFE

EventScript_tile9_a_11_0X7394C0:
.byte 0x13
.byte 0x11
.byte 0x13
.byte 0xFE

