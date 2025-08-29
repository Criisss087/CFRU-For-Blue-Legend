.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"


.global EventScript_map_4_1

EventScript_map_4_1:
.byte 0x3
.4byte EventScript_map_0X168CAE
.byte 0x2
.4byte EventScript_map_0X168CBE
.byte 0x0

EventScript_map_0X168CBE:
.2byte 0x4056
.2byte 0x0
.4byte EventScript_map_0X722BD6
.2byte 0x0

EventScript_map_0X168CAE:
	compare 0x4056 0x0
	if 0x1 _call EventScript_map_0X168CBA
	end

EventScript_map_0X722BD6:
	fadesong 0x120
	setflag 0x567
	special 0x113
	fadescreen 0x1
	hidesprite 0x2
	hidesprite 0xF
	applymovement CAMERA EventScript_map_0X723960
	waitmovement 0x7F
	checkgender
	compare LASTRESULT 0x1
	if 0x1 _call EventScript_map_0X722E58
	compare LASTRESULT 0x0
	if 0x1 _call EventScript_map_0X722E5D
	fadescreen 0x0
	opendoor 0x3 0x1
	waitdooranim
	showsprite 0x1
	applymovement 0x1 EventScript_map_0X723970
	waitmovement 0x1
	closedoor 0x3 0x1
	waitdooranim
	sound 0x15
	applymovement 0x1 0x8750000
	waitmovement 0x1
	pause 0x30
	spriteface 0x1 0x2
	setdooropened 0x3 0x1
	waitdooranim
	applymovement 0x1 EventScript_map_0X723975
	waitmovement 0x1
	hidesprite 0x1
	closedoor 0x3 0x1 
	waitdooranim
	fadescreen 0x1
	pause 0x10
	msgbox gText_map_0X722E62 MSG_FACE @"[blue_fr]- Una hora despu�s -"
	special 0x113
	movesprite 0xFF 0x2 0x6
	showsprite 0xFF
	spriteface 0xFF 0x3
	setflag 0x568
	hidesprite 0x2
	hidesprite 0xF
	special 0x114
	fadescreen 0x0
	opendoor 0x3 0x1
	waitdooranim
	showsprite 0x1
	applymovement 0x1 EventScript_map_0X723970
	waitmovement 0x1
	closedoor 0x3 0x1
	waitdooranim
	sound 0x15
	applymovement 0x1 0x8750000
	waitmovement 0x1
	pause 0x30
	applymovement 0x1 EventScript_map_0X7238D0
	waitmovement 0x1
	spriteface 0xFF 0x2
	special 0x113
	applymovement CAMERA EventScript_map_0X7238D6
	waitmovement 0x7F
	special 0x114
	msgbox gText_map_0X722E7C MSG_FACE @"[navyblue_fr]Steven: [red_fr][play..."
	waitmsg
	spriteface 0xFF 0x3
	pause 0x50
	spriteface 0xFF 0x2
	msgbox gText_map_0X72306E MSG_FACE @"[red_fr][player]: �Cr�es que falte..."
	waitmsg
	fadescreen 0x1
	msgbox gText_map_0X72313A MSG_FACE @"[navyblue_fr]Steven: �sta es la le..."
	waitmsg
	special 0x113
	movesprite 0xFF 0x0 0x14
	pause 0x2
	hidesprite 0x1
	applymovement CAMERA EventScript_map_0X7238DA
	waitmovement 0x7F
	showsprite 0x1
	movesprite 0x1 0x2 0x5
	special 0x114
	fadescreen 0x0
	applymovement 0xC EventScript_map_0X7238F7
	applymovement 0xB EventScript_map_0X7238F7
	applymovement 0xD EventScript_map_0X7238F7
	waitmovement 0xC
	waitmovement 0xB
	waitmovement 0xD
	spriteface 0xB 0x1
	spriteface 0xC 0x4
	spriteface 0xD 0x3
	msgbox gText_map_0X723167 MSG_FACE @"[navyblue_fr]Steven: El [green_fr]..."
	waitmsg
	applymovement 0xC EventScript_map_0X723906
	applymovement 0xB EventScript_map_0X723906
	applymovement 0xD EventScript_map_0X723906
	waitmovement 0xD
	fadescreen 0x1
	special 0x113
	setflag 0x569
	applymovement CAMERA EventScript_map_0X72390F
	waitmovement 0x7F
	showsprite 0x3
	showsprite 0x4
	showsprite 0x5
	showsprite 0x6
	showsprite 0x7
	showsprite 0x8
	showsprite 0xA
	fadescreen 0x0
	cry 0xF9 0x0
	msgbox gText_map_0X72332C MSG_NORMAL @"[navyblue_fr]Steven: Uno de sus pr..."
	fadescreen 0x1
	cry 0xF9 0x0
	hidesprite 0xA
	fadescreen 0x0
	msgbox gText_map_0X7233E7 MSG_NORMAL @"[navyblue_fr]Steven: Pero [blue_fr..."
	fadescreen 0x1
	applymovement CAMERA EventScript_map_0X723934
	waitmovement 0x7F
	movesprite 0xFF 0x2 0x6
	showsprite 0x1
	movesprite 0x1 0x2 0x5
	spriteface 0x1 0x1
	special 0x114
	fadescreen 0x0
	msgbox gText_map_0X723417 MSG_FACE @"[navyblue_fr]Steven: Nunca lograro..."
	sound 0x4
	pause 0x30
	sound 0x15
	applymovement PLAYER EventScript_map_0X750DBF
	waitmovement 0xFF
	spriteface 0xFF 0x3
	msgbox gText_map_0X723559 MSG_FACE @"[red_fr][player]: �Qu� fue eso?\p[..."
	sound 0x4
	msgbox gText_map_0X723628 MSG_FACE @"[red_fr][player]: �Hola?\p[darknav..."
	sound 0x3
	additem 0x119 0x1
	msgbox gText_map_0X7237D9 MSG_FACE @"[red_fr][player]: Qui�n lo dir�a, ..."
	spriteface 0xFF 0x2
	msgbox gText_map_0X72387A MSG_FACE @"[navyblue_fr]Steven: Creo que es h..."
	applymovement 0x1 0x872395A
	waitmovement 0x1
	opendoor 0x3 0x1
	waitdooranim
	applymovement 0x1 EventScript_map_0X723975
	waitmovement 0x1
	hidesprite 0x1
	closedoor 0x3 0x1
	waitdooranim
	special 0x113
	applymovement CAMERA EventScript_map_0X723970
	waitmovement 0x7F
	special 0x114
	setvar 0x4056 0x1
	release
	end

	@---------------
EventScript_map_0X168CBA:
	sethealingplace 0x1
	return

	@---------------
EventScript_map_0X722E58:
	showsprite 0xF
	return

	@---------------
EventScript_map_0X722E5D:
	showsprite 0x2
	return

	@-----------
	@ Movements
	@-----------
EventScript_map_0X723960:
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
.byte 0x3A
.byte 0x3A
.byte 0x3A
.byte 0xFE

EventScript_map_0X723970:
.byte 0x10
.byte 0xFE

EventScript_map_0X750000:
.byte 0x62
.byte 0xFE

EventScript_map_0X723975:
.byte 0x11
.byte 0xFE

EventScript_map_0X7238D0:
.byte 0x10
.byte 0x12
.byte 0x10
.byte 0x10
.byte 0xFE

EventScript_map_0X7238D6:
.byte 0x10
.byte 0x10
.byte 0xFE

EventScript_map_0X7238DA:
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
.byte 0x3C
.byte 0xFE

EventScript_map_0X7238F7:
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0xFE

EventScript_map_0X723906:
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0xFE

EventScript_map_0X72390F:
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
.byte 0x39
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

EventScript_map_0X723934:
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
.byte 0x3B
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
.byte 0x3A
.byte 0xFE

EventScript_map_0X750DBF:
.byte 0x65
.byte 0xFE

EventScript_map_0X72395A:
.byte 0x11
.byte 0x11
.byte 0x13
.byte 0x11
.byte 0xFE
