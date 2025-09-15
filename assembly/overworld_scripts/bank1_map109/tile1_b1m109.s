.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"
	
	@---------------
EventScript_tile1_b1m109_Start:
	checkflag 0x230
	if 0x1 _goto EventScript_tile1_b1m109_Snippet1
	lock
	sound 0x15
	applymovement MOVE_PLAYER EventScript_tile1_b1m109_Move1
	waitmovement 0xFF
	pause 0x10
	sound 0x15
	applymovement 0x1 EventScript_tile1_b1m109_Move2
	waitmovement 0x1
	spriteface 0x1 0x3
	pause 0x20
	fadeoutbgm 0x1
	special 0x113
	fadescreen 0x1
	applymovement MOVE_CAMERA EventScript_tile1_b1m109_Move3
	waitmovement 0x7F
	showsprite 0x14
	fadescreen 0x0
	cry 0xD6 0x0
	waitcry
	pause 0x25
	fadescreen 0x1
	applymovement MOVE_CAMERA EventScript_tile1_b1m109_Move4
	waitmovement 0x7F
	showsprite 0x16
	fadescreen 0x0
	cry 0x7F 0x0
	waitcry
	pause 0x25
	fadescreen 0x1
	applymovement MOVE_CAMERA EventScript_tile1_b1m109_Move5
	waitmovement 0x7F
	fadescreen 0x0
	playsong 0x11B 0x0
	getplayerpos 0x8000 0x8001
	compare 0x8001 0x31
	if 0x1 _call EventScript_tile1_b1m109_Snippet2
	compare 0x8001 0x30
	if 0x1 _call EventScript_tile1_b1m109_Snippet3
	showsprite 0x14
	applymovement 0x14 EventScript_tile1_b1m109_Move6
	applymovement 0x16 EventScript_tile1_b1m109_Move7
	pause 0x40
	sound 0x79
	waitmovement 0x14
	pause 0x20
	sound 0xA
	applymovement 0x14 EventScript_tile1_b1m109_Move8
	waitmovement 0x14
	sound 0xA
	applymovement 0x16 EventScript_tile1_b1m109_Move9
	waitmovement 0x16
	special 0xD3
	msgbox gText_tile1_b1m109_String1 MSG_NORMAL @"[green_fr]Lidia: ��Y ahora qu� hac..."
	pause 0x20
	sound 0x15
	applymovement 0x1 EventScript_tile1_b1m109_Move10
	waitmovement 0x1
	applymovement 0x14 EventScript_tile1_b1m109_Move11
	applymovement 0x16 EventScript_tile1_b1m109_Move12
	waitmovement 0x16
	spriteface 0x1 0x3
	spriteface 0xFF 0x4
	cry 0xD6 0x0
	waitcry
	setflag 0x903
	wildbattle 0xD6 0x20 0x0
	spriteface 0xFF 0x2
	sound 0xA
	applymovement 0x14 EventScript_tile1_b1m109_Move13
	waitmovement 0x14
	msgbox gText_tile1_b1m109_String2 MSG_NORMAL @"[green_fr]Lidia: ��[player]!?"
	pause 0x20
	applymovement 0x1 EventScript_tile1_b1m109_Move14
	applymovement MOVE_PLAYER EventScript_tile1_b1m109_Move15
	applymovement MOVE_CAMERA EventScript_tile1_b1m109_Move15
	waitmovement 0xFF
	special 0x114
	cry 0x7F 0x0
	waitcry
	setflag 0x903
	wildbattle 0x7F 0x20 0x0

	getplayerpos 0x8000 0x8001
	compare 0x8001 0x31
	if 0x1 _call EventScript_tile1_b1m109_Snippet_cam2
	compare 0x8001 0x30
	if 0x1 _call EventScript_tile1_b1m109_Snippet_cam1

	spriteface 0xFF 0x1
	spriteface 0x1 0x1
	sound 0xA
	applymovement 0x16 EventScript_tile1_b1m109_Move17
	waitmovement 0x16
	special 0xD3
	msgbox gText_tile1_b1m109_String3 MSG_NORMAL @"[green_fr]Lidia: Parece que estamo..."
	pause 0x20
	sound 0xA
	spriteface 0x1 0x2
	applymovement 0x1 EventScript_tile1_b1m109_Move18
	waitmovement 0x1
	msgbox gText_tile1_b1m109_String4 MSG_NORMAL @"[green_fr]Lidia: �Y a�n no ha term..."
	fadeoutbgm 0x0
	spriteface 0xFF 0x1
	pause 0x30
	showsprite 0x17
	showsprite 0x18
	showsprite 0x19
	showsprite 0x1A
	showsprite 0x1B
	showsprite 0x1C
	showsprite 0x1D
	showsprite 0x1E
	showsprite 0x1F
	showsprite 0x20
	applymovement 0x17 EventScript_tile1_b1m109_Move19
	applymovement 0x18 EventScript_tile1_b1m109_Move19
	applymovement 0x19 EventScript_tile1_b1m109_Move19
	applymovement 0x1A EventScript_tile1_b1m109_Move19
	applymovement 0x1E EventScript_tile1_b1m109_Move19
	applymovement 0x1B EventScript_tile1_b1m109_Move20
	applymovement 0x1C EventScript_tile1_b1m109_Move20
	applymovement 0x1D EventScript_tile1_b1m109_Move20
	applymovement 0x1F EventScript_tile1_b1m109_Move20
	applymovement 0x20 EventScript_tile1_b1m109_Move20
	pause 0x15
	sound 0xA
	pause 0x15
	sound 0xA
	pause 0x15
	sound 0xA
	pause 0x20
	setflag 0x910
	setflag 0x908
	setwildbattle 0xFFFF 0x0 0x0
	setwildbattle 0x7F 0x20 0x0
	setwildbattle 0xD6 0x20 0x0
	special 0x138
	waitstate 
	fadeoutbgm 0x1
	msgbox gText_tile1_b1m109_String5 MSG_NORMAL @"[darknavyblue_fr]�Arcanine, usa ru..."
	sound 0x15
	spriteface 0xFF 0x3
	spriteface 0x1 0x3
	applymovement MOVE_PLAYER EventScript_tile1_b1m109_Move10
	applymovement 0x1 EventScript_tile1_b1m109_Move10
	waitmovement 0x1
	pause 0x20
	sound 0xF
	showsprite 0x21
	pause 0x10
	cry 0x3B 0x0
	waitcry
	pause 0x40
	sound 0x9
	hidesprite 0x17
	hidesprite 0x18
	hidesprite 0x19
	hidesprite 0x1A
	hidesprite 0x1B
	hidesprite 0x1C
	hidesprite 0x1D
	hidesprite 0x1E
	hidesprite 0x1F
	hidesprite 0x20
	fadescreen 0x0
	fadeinbgm 0xF
	pause 0x20
	sound 0xF
	hidesprite 0x21
	pause 0x20
	showsprite 0x22
	applymovement 0x22 EventScript_tile1_b1m109_Move21
	waitmovement 0x22
	spriteface 0xFF 0x1
	spriteface 0x1 0x1
	msgbox gText_tile1_b1m109_String6 MSG_NORMAL @"[darknavyblue_fr]Siento haberlos a..."
	spriteface 0x22 0x1
	pause 0x60
	msgbox gText_tile1_b1m109_String7 MSG_NORMAL @"[darknavyblue_fr]Creo que logramos..."
	pause 0x40
	spriteface 0x22 0x2
	msgbox gText_tile1_b1m109_String8 MSG_NORMAL @"[darknavyblue_fr]�Adi�s!"
	fadescreen 0x1
	hidesprite 0x22
	sound 0x9
	pause 0x10
	fadescreen 0x0
	pause 0x40
	spriteface 0xFF RIGHT
	spriteface 0x1 LEFT
	msgbox gText_tile1_b1m109_String9 MSG_NORMAL
	pause 0x20 
	spriteface 0x1 RIGHT
	msgbox gText_tile1_b1m109_String10 MSG_NORMAL
	setflag 0x230
	release
	end

EventScript_tile1_b1m109_Snippet_cam1:
	return

EventScript_tile1_b1m109_Snippet_cam2:
	special 0x113
	applymovement MOVE_CAMERA EventScript_tile1_b1m109_Move16
	waitmovement 0x7F
	special 0x114
	return

	@---------------
EventScript_tile1_b1m109_Snippet1:
	release
	end

	@---------------
EventScript_tile1_b1m109_Snippet2:
	sound 0x15
	applymovement MOVE_PLAYER EventScript_tile1_b1m109_Move22
	applymovement 0x1 EventScript_tile1_b1m109_Move22
	waitmovement 0xFF
	return

	@---------------
EventScript_tile1_b1m109_Snippet3:
	sound 0x15
	applymovement MOVE_PLAYER EventScript_tile1_b1m109_Move23
	applymovement 0x1 EventScript_tile1_b1m109_Move23
	waitmovement 0xFF
	return


	@-----------
	@ Movements
	@-----------
EventScript_tile1_b1m109_Move1:
.byte 0x62
.byte 0xFE

EventScript_tile1_b1m109_Move2:
.byte 0x63
.byte 0xFE

EventScript_tile1_b1m109_Move3:
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0xFE

EventScript_tile1_b1m109_Move4:
.byte 0x3B
.byte 0x3B
.byte 0x3B
.byte 0x3B
.byte 0x3B
.byte 0x3B
.byte 0x3B
.byte 0x3B
.byte 0x3B
.byte 0x3B
.byte 0x3B
.byte 0x3B
.byte 0x3B
.byte 0xFE

EventScript_tile1_b1m109_Move5:
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0xFE

EventScript_tile1_b1m109_Move6:
.byte 0x1F
.byte 0x1F
.byte 0x1F
.byte 0x1F
.byte 0x1F
.byte 0x1F
.byte 0x1F
.byte 0x1F
.byte 0x17
.byte 0x6
.byte 0xFE

EventScript_tile1_b1m109_Move7:
.byte 0x20
.byte 0x20
.byte 0x20
.byte 0x20
.byte 0x20
.byte 0x20
.byte 0x20
.byte 0x16
.byte 0x7
.byte 0xFE

EventScript_tile1_b1m109_Move8:
.byte 0x54
.byte 0x54
.byte 0xFE

EventScript_tile1_b1m109_Move9:
.byte 0x55
.byte 0x55
.byte 0xFE

EventScript_tile1_b1m109_Move10:
.byte 0x62
.byte 0xFE

EventScript_tile1_b1m109_Move11:
.byte 0x11
.byte 0x6
.byte 0xFE

EventScript_tile1_b1m109_Move12:
.byte 0x11
.byte 0x7
.byte 0xFE

EventScript_tile1_b1m109_Move13:
.byte 0x15
.byte 0x15
.byte 0x15
.byte 0x15
.byte 0x15
.byte 0xFE

EventScript_tile1_b1m109_Move14:
.byte 0x13
.byte 0x6
.byte 0xFE

EventScript_tile1_b1m109_Move15:
.byte 0x12
.byte 0xFE

EventScript_tile1_b1m109_Move16:
.byte 0x11
.byte 0xFE

EventScript_tile1_b1m109_Move17:
.byte 0x14
.byte 0x14
.byte 0x14
.byte 0x14
.byte 0x14
.byte 0xFE

EventScript_tile1_b1m109_Move18:
.byte 0x53
.byte 0xFE

EventScript_tile1_b1m109_Move19:
.byte 0x14
.byte 0x14
.byte 0xFE

EventScript_tile1_b1m109_Move20:
.byte 0x15
.byte 0x15
.byte 0xFE

EventScript_tile1_b1m109_Move21:
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x1
.byte 0xFE

EventScript_tile1_b1m109_Move22:
.byte 0x62
.byte 0x11
.byte 0x4
.byte 0xFE

EventScript_tile1_b1m109_Move23:
.byte 0x62
.byte 0x4
.byte 0xFE
