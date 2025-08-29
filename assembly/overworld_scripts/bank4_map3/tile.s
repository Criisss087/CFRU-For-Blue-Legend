.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

	@---------------
EventScript_tile0_0X1692C3:
	lockall
	textcolor 0x0
	applymovement 0x4 EventScript_tile0_0X1A75F1
	waitmovement 0x0
	msgbox gText_tile0_0X18E177 MSG_KEEPOPEN @"OAK: �No te vayas todav�a!"
	closeonkeypress
	applymovement MOVE_PLAYER EventScript_tile0_0X1692E5
	waitmovement 0x0
	releaseall
	end

EventScript_tile0_0X1A75F1:
.byte 0x0
.byte 0xFE

EventScript_tile0_0X1692E5:
.byte 0x11
.byte 0xFE

	@---------------
EventScript_tile3_0X71AA58:
	lockall
	playsong 0x13B 0x0
	sound 0x15
	applymovement 0x8 EventScript_tile3_0X75005D
	waitmovement 0x0
	spriteface 0xFF 0x2
	spriteface 0x4 0x1
	msgbox gText_tile3_0X7709B3 MSG_KEEPOPEN @"[navyblue_fr]Ash: �Hey, [player]!\..."
	trainerbattle9 0x9 0xD6 0x3 gText_tile3_0X18DDEA gText_tile3_0X18DE1A
	special 0x0
	msgbox gText_tile3_0X770A26 MSG_NORMAL @"[navyblue_fr]Ash: Excelente batall..."
	applymovement 0x8 EventScript_tile3_0X750069
	pause 0x7B
	sound 0x15
	waitmovement 0x0
	spriteface 0xFF 0x4
	msgbox gText_tile3_0X770AD1 MSG_NORMAL @"[navyblue_fr]Ash: Me olvidaba, ant..."
	applymovement 0x8 EventScript_tile3_0X750079
	pause 0x59
	sound 0x9
	waitmovement 0x0
	setflag 0x2D
	spriteface 0xFF 0x2
	msgbox gText_tile3_0X770BB9 MSG_NORMAL @"[darknavyblue_fr]Oak: [player] ven..."
	applymovement MOVE_PLAYER EventScript_tile3_0X750083
	waitmovement 0x0
	msgbox gText_tile3_0X770BE2 MSG_KEEPOPEN @"[darknavyblue_fr]Oak: Quiero darte..."
	applymovement 0x4 EventScript_tile3_0X75008C
	waitmovement 0x0
	hidesprite 0xA
	setflag 0x3A
	applymovement 0x4 EventScript_tile3_0X750090
	waitmovement 0x0
	msgbox gText_tile3_0X770BFD MSG_KEEPOPEN @"[darknavyblue_fr][.]Pok�dex. Te se..."
	sound 0x101
	msgbox gText_tile3_0X770CC5 MSG_KEEPOPEN @"[player] recibi� Pok�dex del\nProf..."
	setflag 0x829
	special 0x181
	special 0x16F
	msgbox gText_tile3_0X770CEA MSG_KEEPOPEN @"[darknavyblue_fr]Oak: �sto tambi�n..."
	giveitem 0x4 0x5 MSG_OBTAIN
	msgbox gText_tile3_0X775166 MSG_NORMAL @"[darknavyblue_fr]Oak: Adem�s, recu..."
	setvar 0x4055 0x4
	releaseall
	end

EventScript_tile3_0X75005D:
.byte 0x0
.byte 0x62
.byte 0x1C
.byte 0x1C
.byte 0x1C
.byte 0x1C
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0xFE

EventScript_tile3_0X750069:
.byte 0xF
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0x62
.byte 0x1C
.byte 0x1C
.byte 0x1E
.byte 0x1E
.byte 0x1E
.byte 0x1E
.byte 0x6
.byte 0xFE

EventScript_tile3_0X750079:
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0x60
.byte 0xC
.byte 0xC
.byte 0xFE

EventScript_tile3_0X750083:
.byte 0xD
.byte 0xD
.byte 0xD
.byte 0xD
.byte 0xF
.byte 0x1
.byte 0xFE

EventScript_tile3_0X75008C:
.byte 0xE
.byte 0xD
.byte 0xFE

EventScript_tile3_0X750090:
.byte 0xF
.byte 0xC
.byte 0x0
.byte 0xFE

	@---------------
EventScript_tile4_0X71A89D:
	lockall
	playsong 0x13B 0x0
	sound 0x15
	applymovement 0x8 EventScript_tile4_0X750095
	waitmovement 0x0
	spriteface 0xFF 0x2
	spriteface 0x4 0x1
	msgbox gText_tile3_0X7709B3 MSG_KEEPOPEN @"[navyblue_fr]Ash: �Hey, [player]!\..."
	trainerbattle9 0x9 0xD6 0x3 gText_tile3_0X18DDEA gText_tile3_0X18DE1A
	special 0x0
	msgbox gText_tile3_0X770A26 MSG_NORMAL @"[navyblue_fr]Ash: Excelente batall..."
	applymovement 0x8 EventScript_tile4_0X7500A2
	pause 0x90
	sound 0x15
	waitmovement 0x8
	spriteface 0xFF 0x1
	msgbox gText_tile3_0X770AD1 MSG_NORMAL @"[navyblue_fr]Ash: Me olvidaba, ant..."
	applymovement 0x8 EventScript_tile4_0X7500B3
	pause 0x40
	sound 0x9
	waitmovement 0x0
	setflag 0x2D
	spriteface 0xFF 0x2
	msgbox gText_tile3_0X770BB9 MSG_NORMAL @"[darknavyblue_fr]Oak: [player] ven..."
	applymovement MOVE_PLAYER EventScript_tile4_0X7500BC
	waitmovement 0x0
	msgbox gText_tile3_0X770BE2 MSG_KEEPOPEN @"[darknavyblue_fr]Oak: Quiero darte..."
	applymovement 0x4 EventScript_tile4_0X75008C
	waitmovement 0x0
	hidesprite 0xA
	setflag 0x3A
	applymovement 0x4 EventScript_tile4_0X750090
	waitmovement 0x0
	msgbox gText_tile3_0X770BFD MSG_KEEPOPEN @"[darknavyblue_fr][.]Pok�dex. Te se..."
	sound 0x101
	msgbox gText_tile3_0X770CC5 MSG_KEEPOPEN @"[player] recibi� Pok�dex del\nProf..."
	setflag 0x829
	special 0x181
	special 0x16F
	msgbox gText_tile3_0X770CEA MSG_KEEPOPEN @"[darknavyblue_fr]Oak: �sto tambi�n..."
	giveitem 0x4 0x5 MSG_OBTAIN
	msgbox gText_tile3_0X775166 MSG_NORMAL @"[darknavyblue_fr]Oak: Adem�s, recu..."
	setvar 0x4055 0x4
	releaseall
	end

EventScript_tile4_0X750095:
.byte 0x0
.byte 0x62
.byte 0x1C
.byte 0x1C
.byte 0x1C
.byte 0x1C
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x13
.byte 0x0
.byte 0xFE

EventScript_tile4_0X7500A2:
.byte 0xF
.byte 0xC
.byte 0xC
.byte 0xE
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0x62
.byte 0x1C
.byte 0x1C
.byte 0x1E
.byte 0x1E
.byte 0x1E
.byte 0x1
.byte 0xFE

EventScript_tile4_0X7500B3:
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0x60
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0xFE

EventScript_tile4_0X7500BC:
.byte 0xD
.byte 0xD
.byte 0xD
.byte 0xD
.byte 0x1
.byte 0xFE

EventScript_tile4_0X75008C:
.byte 0xE
.byte 0xD
.byte 0xFE

EventScript_tile4_0X750090:
.byte 0xF
.byte 0xC
.byte 0x0
.byte 0xFE


	@---------------
EventScript_tile5_0X71AB48:
	lockall
	playsong 0x13B 0x0
	sound 0x15
	applymovement 0x8 EventScript_tile5_0X7500C3
	waitmovement 0x0
	spriteface 0xFF 0x2
	spriteface 0x4 0x1
	msgbox gText_tile3_0X7709B3 MSG_KEEPOPEN @"[navyblue_fr]Ash: �Hey, [player]!\..."
	trainerbattle9 0x9 0xD6 0x3 gText_tile3_0X18DDEA gText_tile3_0X18DE1A
	special 0x0
	msgbox gText_tile3_0X770A26 MSG_NORMAL @"[navyblue_fr]Ash: Excelente batall..."
	applymovement 0x8 EventScript_tile5_0X7500D1
	pause 0x7B
	sound 0x15
	waitmovement 0x8
	spriteface 0xFF 0x3
	msgbox gText_tile3_0X770AD1 MSG_NORMAL @"[navyblue_fr]Ash: Me olvidaba, ant..."
	applymovement 0x8 EventScript_tile5_0X7500E1
	pause 0x59
	sound 0x9
	waitmovement 0x8
	setflag 0x2D
	spriteface 0xFF 0x2
	msgbox gText_tile3_0X770BB9 MSG_NORMAL @"[darknavyblue_fr]Oak: [player] ven..."
	applymovement MOVE_PLAYER EventScript_tile5_0X7500EB
	waitmovement 0x0
	msgbox gText_tile3_0X770BE2 MSG_KEEPOPEN @"[darknavyblue_fr]Oak: Quiero darte..."
	applymovement 0x4 EventScript_tile5_0X75008C
	waitmovement 0x0
	hidesprite 0xA
	setflag 0x3A
	applymovement 0x4 EventScript_tile5_0X750090
	waitmovement 0x0
	msgbox gText_tile3_0X770BFD MSG_KEEPOPEN @"[darknavyblue_fr][.]Pok�dex. Te se..."
	sound 0x101
	msgbox gText_tile3_0X770CC5 MSG_KEEPOPEN @"[player] recibi� Pok�dex del\nProf..."
	setflag 0x829
	special 0x181
	special 0x16F
	msgbox gText_tile3_0X770CEA MSG_KEEPOPEN @"[darknavyblue_fr]Oak: �sto tambi�n..."
	giveitem 0x4 0x5 MSG_OBTAIN
	msgbox gText_tile3_0X775166 MSG_NORMAL @"[darknavyblue_fr]Oak: Adem�s, recu..."
	setvar 0x4055 0x4
	releaseall
	end


EventScript_tile5_0X7500C3:
.byte 0x0
.byte 0x62
.byte 0x1C
.byte 0x1C
.byte 0x1C
.byte 0x1C
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x13
.byte 0x13
.byte 0x0
.byte 0xFE

EventScript_tile5_0X7500D1:
.byte 0xE
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0x62
.byte 0x1C
.byte 0x1C
.byte 0x1E
.byte 0x1E
.byte 0x1E
.byte 0x1E
.byte 0x7
.byte 0xFE

EventScript_tile5_0X7500E1:
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0x60
.byte 0xC
.byte 0xC
.byte 0xC
.byte 0xFE

EventScript_tile5_0X7500EB:
.byte 0xD
.byte 0xD
.byte 0xD
.byte 0xD
.byte 0xE
.byte 0x1
.byte 0xFE

EventScript_tile5_0X75008C:
.byte 0xE
.byte 0xD
.byte 0xFE

EventScript_tile5_0X750090:
.byte 0xF
.byte 0xC
.byte 0x0
.byte 0xFE
