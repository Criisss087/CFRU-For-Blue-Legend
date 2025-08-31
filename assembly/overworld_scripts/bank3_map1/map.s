.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.global EventScript_map_3_1

EventScript_map_3_1:
.byte 0x3
.4byte EventScript_map_0X1658D9
.byte 0x5
.4byte EventScript_map_0X71B1CE
.byte 0x2
.4byte EventScript_map_0X71A2B4
.byte 0x0

	@---------------
EventScript_map_0X71A2B4:
.2byte 0x5000
.2byte 0x4 
.4byte EventScript_map_0X71FF9C
.2byte 0x0 

	@---------------
EventScript_map_0X1658D9:
	setworldmapflag 0x891
	compare 0x4051 0x0
	if 0x1 _call EventScript_map_0X165920
	compare 0x4051 0x1
	if 0x1 _call EventScript_map_0X16590F
	compare 0x4051 0x2
	if 0x4 _call EventScript_map_0X165909
	compare 0x405A 0x0
	if 0x1 _call EventScript_map_0X165931
	end

	@---------------
EventScript_map_0X71B1CE:
	copybyte 0x20370D0 0x3005E8C
	compare LASTRESULT 0x20
	if 0x4 _goto EventScript_map_0X71FD9D
	compare LASTRESULT 0x4
	if 0x3 _goto EventScript_map_0X71FD9D
	goto EventScript_map_0X71FF94

	@---------------
EventScript_map_0X71FF9C:
	lock
	setflag 0x566
	getplayerpos 0x8001 0x8002
	compare 0x8002 0x27
	if 0x1 _call EventScript_map_0X71FFBD
	compare 0x8001 0x1A
	if 0x1 _call EventScript_map_0X720021
	end

	@---------------
EventScript_map_0X165920:
	setvar 0x4010 0x22
	return

	@---------------
EventScript_map_0X16590F:
	setvar 0x4010 0x20
	return

	@---------------
EventScript_map_0X165909:
	setvar 0x4010 0x20
	return

	@---------------
EventScript_map_0X165931:
	checkflag 0x821
	if 0x0 _goto EventScript_map_0X1A77A9
	checkflag 0x822
	if 0x0 _goto EventScript_map_0X1A77A9
	checkflag 0x823
	if 0x0 _goto EventScript_map_0X1A77A9
	checkflag 0x824
	if 0x0 _goto EventScript_map_0X1A77A9
	checkflag 0x825
	if 0x0 _goto EventScript_map_0X1A77A9
	checkflag 0x826
	if 0x0 _goto EventScript_map_0X1A77A9
	setvar 0x405A 0x1
	return

	@---------------
EventScript_map_0X71FD9D:
	special 0x8E
	release
	end

	@---------------
EventScript_map_0X71FF94:
	special 0x8E
	release
	end

	@---------------
EventScript_map_0X71FFBD:
	setvar 0x8003 0x0
	fadescreen 0x1
	special 0x113
	compare 0x8001 0x16
	if 0x1 _call EventScript_map_0X720063
	compare 0x8001 0x17
	if 0x1 _call EventScript_map_0X72006F
	compare 0x8001 0x18
	if 0x1 _call EventScript_map_0X72007B
	compare 0x8001 0x19
	if 0x1 _call EventScript_map_0X720087
	playsong 0x12F 0x0
	special 0x114
	fadescreen 0x0
	setdooropened 0x23 0x11
	doorchange
	checkgender
	compare LASTRESULT 0x0
	if 0x1 _call EventScript_map_0X720155
	compare LASTRESULT 0x1
	if 0x1 _call EventScript_map_0X720093
	setvar 0x5000 0x5
	release
	end

	@---------------
EventScript_map_0X720021:
	setvar 0x8003 0x1
	fadescreen 0x1
	special 0x113
	applymovement MOVE_CAMERA EventScript_map_0X720E07
	waitmovement 0x7F
	playsong 0x12F 0x0
	special 0x114
	fadescreen 0x0
	setdooropened 0x23 0x11
	doorchange
	checkgender
	compare LASTRESULT 0x0
	if 0x5 _goto EventScript_map_0X720155
	compare LASTRESULT 0x1
	if 0x5 _goto EventScript_map_0X720155
	setvar 0x5000 0x5
	release
	end

	@---------------
EventScript_map_0X1A77A9:
	return

	@---------------
EventScript_map_0X720063:
	applymovement MOVE_CAMERA EventScript_map_0X720E1B
	waitmovement 0x7F
	return

	@---------------
EventScript_map_0X72006F:
	applymovement MOVE_CAMERA EventScript_map_0X720E3F
	waitmovement 0x7F
	return

	@---------------
EventScript_map_0X72007B:
	applymovement MOVE_CAMERA EventScript_map_0X720E62
	waitmovement 0x7F
	return

	@---------------
EventScript_map_0X720087:
	applymovement MOVE_CAMERA EventScript_map_0X720E84
	waitmovement 0x7F
	return

	@---------------
EventScript_map_0X720155:
	showsprite 0xA
	applymovement 0xA EventScript_map_0X720E04
	waitmovement 0xA
	setdoorclosed 0x23 0x11
	doorchange
	applymovement 0xA EventScript_map_0X720DF9
	waitmovement 0xA
	sound 0x15
	applymovement 0xA 0x8750000
	waitmovement 0xA
	msgbox gText_CV_May_Intro MSG_FACE @"[blue_fr]May: Bien, creo que ya te..."
	special 0x113
	applymovement 0xA EventScript_map_0X720DE6
	applymovement MOVE_CAMERA EventScript_map_0X720DE6
	waitmovement 0xA
	special 0x114
	sound 0x15
	applymovement 0xA 0x8750000
	waitmovement 0xA
	msgbox gText_CV_May_Spot MSG_FACE @"[blue_fr]May: �Pero mira a qui�n t..."
	compare 0x8003 0x0
	if 0x1 _call EventScript_map_0X720232
	compare 0x8003 0x1
	if 0x1 _call EventScript_map_0X720356
	sound 0x15
	applymovement MOVE_PLAYER 0x8750000
	waitmovement 0xFF
	msgbox gText_CV_May_Dialogue MSG_NORMAL @"[red_fr][player]: �[green_fr]May[r..."
	special 0x0
	trainerbattle3 0x3 0x5C 0x0 gText_CV_BattleFail
	msgbox gText_CV_May_After MSG_NORMAL @"[blue_fr]May: Wow, eso estuvo geni..."
	fadescreen 0x1
	hidesprite 0xA
	special 0x113
	compare 0x8003 0x0
	if 0x1 _call EventScript_map_0X72021A
	compare 0x8003 0x1
	if 0x1 _call EventScript_map_0X720226
	special 0x114
	fadescreen 0x0
	setvar 0x5000 0x5
	return

	@---------------
EventScript_map_0X720093:
	showsprite 0xB
	applymovement 0xB EventScript_map_0X720E04
	setdoorclosed 0x23 0x11
	doorchange
	applymovement 0xB EventScript_map_0X720DF9
	waitmovement 0xB
	sound 0x15
	applymovement 0xB 0x8750000
	waitmovement 0xB
	msgbox gText_CV_Brendan_Intro MSG_FACE @"[blue_fr]Brendan: Bien, creo que y..."
	special 0x113
	applymovement 0xB EventScript_map_0X720DE6
	applymovement MOVE_CAMERA EventScript_map_0X720DE6
	waitmovement 0xB
	special 0x114
	sound 0x15
	applymovement 0xB 0x8750000
	waitmovement 0xB
	msgbox gText_CV_Brendan_Spot MSG_FACE @"[blue_fr]Brendan: �Pero mira a qui..."
	compare 0x8003 0x0
	if 0x1 _call EventScript_map_0X720260
	compare 0x8003 0x1
	if 0x1 _call EventScript_map_0X720373
	sound 0x15
	applymovement MOVE_PLAYER 0x8750000
	waitmovement 0xFF
	msgbox gText_CV_Brendan_Dialogue MSG_NORMAL @"[red_fr][player]: �[green_fr]Brend..."
	special 0x0
	trainerbattle3 0x3 0x5D 0x0 gText_CV_BattleFail
	msgbox gText_CV_Brendan_After MSG_NORMAL @"[blue_fr]Brendan: Wow, eso estuvo\..."
	fadescreen 0x1 
	hidesprite 0xB
	special 0x113
	compare 0x8003 0x0
	if 0x1 _call EventScript_map_0X72021A
	compare 0x8003 0x1
	if 0x1 _call EventScript_map_0X720226
	special 0x114
	fadescreen 0x0
	setvar 0x5000 0x5
	return

	@---------------
EventScript_map_0X720232:
	compare 0x8001 0x16
	if 0x1 _call EventScript_map_0X72028E
	compare 0x8001 0x17
	if 0x1 _call EventScript_map_0X7202A7
	compare 0x8001 0x18
	if 0x1 _call EventScript_map_0X7202C0
	compare 0x8001 0x19
	if 0x1 _call EventScript_map_0X7202D9
	return

	@---------------
EventScript_map_0X720356:
	special 0x113
	applymovement 0xA EventScript_map_0X720DD9
	applymovement MOVE_CAMERA EventScript_map_0X720DD9
	waitmovement 0xA
	special 0x114
	spriteface 0xFF 0x3
	return

	@---------------
EventScript_map_0X72021A:
	applymovement MOVE_CAMERA EventScript_map_0X720D79
	waitmovement 0x7F
	return

	@---------------
EventScript_map_0X720226:
	applymovement MOVE_CAMERA EventScript_map_0X720D7C
	waitmovement 0x7F
	return

	@---------------
EventScript_map_0X720260:
	compare 0x8001 0x16
	if 0x1 _call EventScript_map_0X7202F2
	compare 0x8001 0x17
	if 0x1 _call EventScript_map_0X72030B
	compare 0x8001 0x18
	if 0x1 _call EventScript_map_0X720324
	compare 0x8001 0x19
	if 0x1 _call EventScript_map_0X72033D
	return

	@---------------
EventScript_map_0X720373:
	special 0x113
	applymovement 0xB EventScript_map_0X720DD9
	applymovement MOVE_CAMERA EventScript_map_0X720DD9
	waitmovement 0xB
	special 0x114
	spriteface 0xFF 0x3
	return

	@---------------
EventScript_map_0X72028E:
	special 0x113
	applymovement 0xA EventScript_map_0X720D7F
	applymovement MOVE_CAMERA EventScript_map_0X720D7F
	waitmovement 0x7F
	special 0x114
	return

	@---------------
EventScript_map_0X7202A7:
	special 0x113
	applymovement 0xA EventScript_map_0X720D94
	applymovement MOVE_CAMERA EventScript_map_0X720D94
	waitmovement 0x7F
	special 0x114
	return

	@---------------
EventScript_map_0X7202C0:
	special 0x113
	applymovement 0xA EventScript_map_0X720DAA
	applymovement MOVE_CAMERA EventScript_map_0X720DAA
	waitmovement 0x7F
	special 0x114
	return

	@---------------
EventScript_map_0X7202D9:
	special 0x113
	applymovement 0xA EventScript_map_0X720DC1
	applymovement MOVE_CAMERA EventScript_map_0X720DC1
	waitmovement 0x7F
	special 0x114
	return

	@---------------
EventScript_map_0X7202F2:
	special 0x113
	applymovement 0xB EventScript_map_0X720D7F
	applymovement MOVE_CAMERA EventScript_map_0X720D7F
	waitmovement 0x7F
	special 0x114
	return

	@---------------
EventScript_map_0X72030B:
	special 0x113
	applymovement 0xB EventScript_map_0X720D94
	applymovement MOVE_CAMERA EventScript_map_0X720D94
	waitmovement 0x7F
	special 0x114
	return

	@---------------
EventScript_map_0X720324:
	special 0x113
	applymovement 0xB EventScript_map_0X720DAA
	applymovement MOVE_CAMERA EventScript_map_0X720DAA
	waitmovement 0x7F
	special 0x114
	return

	@---------------
EventScript_map_0X72033D:
	special 0x113
	applymovement 0xB EventScript_map_0X720DC1
	applymovement MOVE_CAMERA EventScript_map_0X720DC1
	waitmovement 0x7F
	special 0x114
	return


EventScript_map_0X720E07:
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0xFE

EventScript_map_0X720E1B:
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0xFE

EventScript_map_0X720E3F:
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0xFE

EventScript_map_0X720E62:
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0xFE

EventScript_map_0X720E84:
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0x3C
.byte 0xFE

EventScript_map_0X720E04:
.byte 0x10
.byte 0xFE

EventScript_map_0X720DF9:
.byte 0x2
.byte 0x1C
.byte 0x1C
.byte 0x3
.byte 0x1C
.byte 0x1C
.byte 0x0
.byte 0x1C
.byte 0x1C
.byte 0xFE

EventScript_map_0X750000:
.byte 0x62
.byte 0xFE

EventScript_map_0X720DE6:
.byte 0x10
.byte 0x10
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x4
.byte 0xFE

EventScript_map_0X720DD9:
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0xFE

EventScript_map_0X720D79:
.byte 0x1D
.byte 0xFE

EventScript_map_0X720D7C:
.byte 0x20
.byte 0xFE

EventScript_map_0X720D7F:
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x13
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0xFE

EventScript_map_0X720D94:
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x13
.byte 0x13
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0xFE

EventScript_map_0X720DAA:
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0xFE

EventScript_map_0X720DC1:
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0xFE
