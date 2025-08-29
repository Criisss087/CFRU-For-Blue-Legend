.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

	@---------------
EventScript_npc0_0X169DEE:
	lock
	faceplayer
	checkflag 0x82C
	if 0x1 _goto EventScript_npc0_0X169E03
	msgbox gText_npc0_0X18EBE6 MSG_KEEPOPEN @"�Soy ayudante del PROF. OAK!"
	release
	end

	@---------------
EventScript_npc0_0X169E03:
	setvar 0x8004 0x0
	setvar 0x8005 0x5
	special 0x173
	msgbox gText_npc0_0X18ED15 MSG_KEEPOPEN @"El profesor Oak tiene su\nprograma..."
	release
	end

	@---------------
EventScript_npc1_0X169E46:
	lock
	faceplayer
	setvar 0x8004 0x0
	setvar 0x8005 0x2
	special 0x173
	msgbox gText_npc1_0X18ED81 MSG_KEEPOPEN @"�El PROF. OAK es un experto\nen PO..."
	release
	end

	@---------------
EventScript_npc2_0X169E1A:
	lock
	faceplayer
	checkflag 0x82C
	if 0x1 _goto EventScript_npc2_0X169E2F
	msgbox gText_npc2_0X18EBE6 MSG_KEEPOPEN @"�Soy ayudante del PROF. OAK!"
	release
	end

	@---------------
EventScript_npc2_0X169E2F:
	setvar 0x8004 0x1
	setvar 0x8005 0x0
	special 0x173
	msgbox gText_npc2_0X18EC0B MSG_KEEPOPEN @"Hola, [player]. Seguro que has\nhe..."
	release
	end


	@---------------
EventScript_npc3_0X72458B:
	lock
	faceplayer
	compare 0x5005 0x1
	if 0x1 _goto EventScript_npc3_0X729B51
	compare 0x4055 0x4
	if 0x1 _goto EventScript_npc3_0X169614
	compare 0x4055 0x3
	if 0x1 _goto EventScript_npc3_0X16960A
	msgbox gText_npc3_0X18E116 MSG_KEEPOPEN @"[darknavyblue_fr]Oak: Bueno [playe..."
	release
	end

	@---------------
EventScript_npc3_0X729B51:
	fadescreen 0x1
	compare PLAYERFACING 0x1
	if 0x1 _call EventScript_npc3_0X729D60
	compare PLAYERFACING 0x3
	if 0x1 _call EventScript_npc3_0X729D76
	compare PLAYERFACING 0x4
	if 0x1 _call EventScript_npc3_0X729D8C
	spriteface 0xFF 0x2
	spriteface 0x1 0x1
	fadescreen 0x0
	special 0x114
	spriteface 0x4 0x1
	showsprite 0xB
	applymovement 0xB EventScript_npc3_0X725733
	waitmovement 0xB
	spriteface 0xB 0x1
	fadescreen 0x1
	movesprite 0xFF 0x6 0x5
	fadescreen 0x0
	msgbox gText_npc3_0X72478C MSG_NORMAL @"[darknavyblue_fr]Birch: [red_fr][p..."
	sound 0x15
	applymovement MOVE_PLAYER EventScript_npc3_0X750055
	applymovement 0x4 EventScript_npc3_0X750055
	applymovement 0xB EventScript_npc3_0X750055
	waitmovement 0xB
	showsprite 0x8
	applymovement 0x8 EventScript_npc3_0X725755
	waitmovement 0x8
	spriteface 0xFF 0x4
	msgbox gText_npc3_0X724864 MSG_NORMAL @"[navyblue_fr]Ash: �Profesor Birch!..."
	spriteface 0x8 0x3
	msgbox gText_npc3_0X724899 MSG_NORMAL @"[navyblue_fr]Ash: �Hey, [red_fr][p..."
	sound 0x15
	applymovement MOVE_PLAYER 0x8750000
	applymovement 0x8 0x8750000
	waitmovement 0x8
	spriteface 0xFF 0x2
	spriteface 0x8 0x2
	msgbox gText_npc3_0X724A42 MSG_NORMAL @"[darknavyblue_fr]Oak: �Chicos! �Es..."
	spriteface 0xFF 0x4
	spriteface 0x8 0x3
	msgbox gText_npc3_0X725182 MSG_NORMAL @"[navyblue_fr]Ash: Bueno, [red_fr][..."
	spriteface 0xFF 0x2
	spriteface 0x8 0x2
	msgbox gText_npc3_0X72E4DB MSG_NORMAL @"[navyblue_fr]Ash: �Qu� deber�amos ..."
	spriteface 0xFF 0x1
	applymovement 0x8 EventScript_npc3_0X72575E
	waitmovement 0x8
	hidesprite 0x8
	sound 0x9
	pause 0x10
	applymovement 0xB EventScript_npc3_0X725765
	waitmovement 0xB
	spriteface 0xB 0x3
	spriteface 0xFF 0x4
	msgbox gText_npc3_0X7252C6 MSG_NORMAL @"[green_fr]Birch: Ahora ya sabes c�..."
	spriteface 0xFF 0x1
	applymovement 0xB EventScript_npc3_0X72575E
	waitmovement 0xB
	sound 0x9
	hidesprite 0xB
	spriteface 0xFF 0x2
	msgbox gText_npc3_0X7253FC MSG_NORMAL @"[darknavyblue_fr]Oak: Un momento, ..."
	applymovement 0x4 EventScript_npc3_0X725769
	waitmovement 0x4
	hidesprite 0x9
	setflag 0x56D
	applymovement 0x4 EventScript_npc3_0X72576F
	waitmovement 0x4
	givepokemon 0x17B 0xF 0x0 0x0 0x0 0x0
	preparemsg gText_npc3_0X72543F @"[black_fr]�[player] recibi� un RIO..."
	waitmsg
	fanfare 0x13E
	waitfanfare
	msgbox gText_npc3_0X72546B MSG_NORMAL @"[darknavyblue_fr]Oak: Te pido que ..."
	setflag 0x2D
	setvar 0x5005 0x2
	fadescreen 0x1
	special 0x113
	applymovement MOVE_CAMERA EventScript_npc3_0X724767
	waitmovement 0x7F
	special 0x114
	fadescreen 0x0
	release
	end

	@---------------
EventScript_npc3_0X169614:
	msgbox gText_npc3_0X18E3AD MSG_KEEPOPEN @"[darknavyblue_fr]Oak: [player], a ..."
	release
	end

	@---------------
EventScript_npc3_0X16960A:
	msgbox gText_npc3_0X18E330 MSG_KEEPOPEN @"[darknavyblue_fr]Oak: Cuando un po..."
	release
	end

	@---------------
EventScript_npc3_0X729D60:
	movesprite 0xFF 0x6 0x5
	special 0x113
	applymovement MOVE_CAMERA EventScript_npc3_0X729DA2
	waitmovement 0x7F
	return

	@---------------
EventScript_npc3_0X729D76:
	movesprite 0xFF 0x6 0x5
	special 0x113
	applymovement MOVE_CAMERA EventScript_npc3_0X729DAC
	waitmovement 0x7F
	return

	@---------------
EventScript_npc3_0X729D8C:
	movesprite 0xFF 0x6 0x5
	special 0x113
	applymovement MOVE_CAMERA EventScript_npc3_0X729DA7
	waitmovement 0x7F
	return

EventScript_npc3_0X725733:
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0xFE

EventScript_npc3_0X750055:
.byte 0x62
.byte 0x4
.byte 0xFE

EventScript_npc3_0X725755:
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0xFE

EventScript_npc3_0X750000:
.byte 0x62
.byte 0xFE

EventScript_npc3_0X72575E:
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0xFE

EventScript_npc3_0X725765:
.byte 0x10
.byte 0x10
.byte 0xFE

EventScript_npc3_0X725769:
.byte 0x11
.byte 0x12
.byte 0x12
.byte 0x1
.byte 0xFE

EventScript_npc3_0X72576F:
.byte 0x10
.byte 0x13
.byte 0x13
.byte 0x0
.byte 0xFE

EventScript_npc3_0X724767:
.byte 0x10
.byte 0xFE

EventScript_npc3_0X729DA2:
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0xFE

EventScript_npc3_0X729DAC:
.byte 0x10
.byte 0x10
.byte 0x12
.byte 0xFE

EventScript_npc3_0X729DA7:
.byte 0x10
.byte 0x10
.byte 0x13
.byte 0xFE

	@---------------
EventScript_npc7_0X16955F:
	lock
	faceplayer
	compare 0x4055 0x3
	if 0x1 _goto EventScript_npc7_0X16958B
	compare 0x4055 0x2
	if 0x1 _goto EventScript_npc7_0X169581
	msgbox gText_npc7_0X18DC67 MSG_KEEPOPEN @"[rival]: What, it@s only [player]?..."
	release
	end

	@---------------
EventScript_npc7_0X16958B:
	msgbox gText_npc7_0X18DD75 MSG_KEEPOPEN @"[navyblue_fr]Ash: [player] tu pok�..."
	release
	end

	@---------------
EventScript_npc7_0X169581:
	msgbox gText_npc7_0X18DCE2 MSG_KEEPOPEN @"[navyblue_fr]Ash: Vamos [player], ..."
	release
	end


