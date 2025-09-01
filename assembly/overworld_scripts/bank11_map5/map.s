.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.global EventScript_map_11_5	
	@---------------
EventScript_map_11_5:
.byte 0x3
.4byte EventScript_map_0X16D6FC
.byte 0x5
.4byte EventScript_map_0X1BC05C
.byte 0x2
.4byte EventScript_map_0XA00990
.byte 0x0

	@---------------
EventScript_map_0XA00990:
.2byte 0x5005
.2byte 0x1A
.4byte EventScript_map_0X733655
.2byte 0x0

	@---------------
EventScript_map_0X16D6FC:
	sethealingplace 0x8
	end

	@---------------
EventScript_map_0X1BC05C:
	special 0x182
	end

	@---------------
EventScript_map_0X733655:
	checkgender
	copyvar 0x8001 LASTRESULT
	compare 0x8001 0x1
	if 0x1 _call EventScript_map_0X733679
	compare 0x8001 0x0
	if 0x1 _call EventScript_map_0X7337BA
	setvar 0x5005 0x1B
	release
	end

	@---------------
EventScript_map_0X733679:
	setvar 0x8001 0x6
	special 0xD2
	special 0x113
	sound 0x15
	spriteface 0x5 0x4
	applymovement 0x5 0x8750000
	waitmovement 0x5
	applymovement MOVE_CAMERA EventScript_map_0X7345ED
	applymovement MOVE_PLAYER EventScript_map_0X7345E1
	waitmovement 0xFF
	showsprite 0xA
	applymovement MOVE_PLAYER EventScript_map_0X7345E4
	applymovement 0xA EventScript_map_0X7345F6
	waitmovement 0x0
	sound 0x100
	applymovement 0x1 EventScript_map_0X1A75E7
	waitmovement 0xFF
	msgbox gText_birch_found_brendan MSG_NORMAL
	spriteface 0xFF 0x1
	spriteface 0x5 0x1
	applymovement 0x1 EventScript_map_0X1A75ED
	waitmovement 0x0
	applymovement 0x1 EventScript_map_0X1A666C
	applymovement 0xA EventScript_map_0X7345D5
	waitmovement 0xA
	msgbox gText_wally_arrival MSG_NORMAL @[green_fr]Wally: Siento la demora
	sound 0x15
	applymovement 0x5 EventScript_map_0X72590B
	pause 0x20
	spriteface 0xFF 0x3
	spriteface 0x5 0x4
	msgbox gText_birch_what_is_he_talking_brendan MSG_NORMAL @[darknavyblue_fr]Birch: �De qu� es
	spriteface 0xFF 0x1
	spriteface 0x5 0x1
	spriteface 0xA 0x1
	sound 0x15
	applymovement MOVE_PLAYER 0x8750000
	applymovement 0xA 0x8750000
	applymovement 0x5 0x8750000
	sound 0x9
	showsprite 0x8001
	applymovement 0x8001 EventScript_map_0X7345C9
	waitmovement 0x8001
	spriteface 0xA 0x3
	msgbox gText_brendan_arrival_block MSG_NORMAL @"[blue_fr]Brendan: Bien bien, ya es..."
	call EventScript_map_0X7338FB
	msgbox gText_wally_brendan_birch_starter_block MSG_NORMAL @"[green_fr]Wally: Que bueno que Gal..."
	giveitem 0x161 0x1 MSG_OBTAIN
	call EventScript_map_0X73391E
	msgbox gText_birch_megaevo_prep MSG_NORMAL @"[darknavyblue_fr]Birch: Si vamos a..."
	pause 0x5
	msgbox gText_megaevo_howto MSG_NORMAL @"[black_fr]Para activar la megaevol..."
	pause 0x1
	msgbox gText_brendan_wally_battlecue MSG_NORMAL @"[blue_fr]Brendan: [red_fr][player]..."
	pause 0x10
	sound 0x15
	applymovement 0x5 EventScript_map_0X72590B
	waitmovement 0x5
	msgbox gText_birch_let_player_equip MSG_NORMAL @"[darknavyblue_fr]Birch: Pero, qu� ..."
	applymovement MOVE_CAMERA EventScript_map_0X7345C6
	waitmovement 0x7F
	special 0x114
	return

	@---------------
EventScript_map_0X7337BA:
	setvar 0x8001 0x7
	special 0xD2
	special 0x113
	sound 0x15
	spriteface 0x5 0x4
	applymovement 0x5 0x8750000
	waitmovement 0x5
	applymovement MOVE_CAMERA EventScript_map_0X7345ED
	applymovement MOVE_PLAYER EventScript_map_0X7345E1
	waitmovement 0xFF
	showsprite 0xA
	applymovement MOVE_PLAYER EventScript_map_0X7345E4
	applymovement 0xA EventScript_map_0X7345F6
	waitmovement 0x0
	sound 0x100
	applymovement 0x1 EventScript_map_0X1A75E7
	waitmovement 0xFF
	msgbox gText_birch_found_may MSG_NORMAL @"[darknavyblue_fr]Birch: Parece que..."
	spriteface 0xFF 0x1
	spriteface 0x5 0x1
	applymovement 0x1 EventScript_map_0X1A75ED
	waitmovement 0x0
	applymovement 0x1 EventScript_map_0X1A666C
	applymovement 0xA EventScript_map_0X7345D5
	waitmovement 0xA
	msgbox gText_wally_arrival MSG_NORMAL @"[green_fr]Wally: Siento la demora ..."
	sound 0x15
	applymovement 0x5 EventScript_map_0X72590B
	pause 0x20
	spriteface 0xFF 0x3
	spriteface 0x5 0x4
	msgbox gText_birch_what_is_he_talking_may MSG_NORMAL @"[darknavyblue_fr]Birch: �De qu� es..."
	spriteface 0xFF 0x1
	spriteface 0x5 0x1
	spriteface 0xA 0x1
	sound 0x15
	applymovement MOVE_PLAYER 0x8750000
	applymovement 0xA 0x8750000
	applymovement 0x5 0x8750000
	sound 0x9
	showsprite 0x8001
	applymovement 0x8001 EventScript_map_0X7345C9
	waitmovement 0x8001
	spriteface 0xA 0x3
	msgbox gText_may_arrival_block MSG_NORMAL @"[blue_fr]May: Bien bien, ya estamo..."
	call EventScript_map_0X7338FB
	msgbox gText_wally_may_birch_starter_block MSG_NORMAL @"[green_fr]Wally: Que bueno que Gal..."
	giveitem 0x161 0x1 MSG_OBTAIN
	call EventScript_map_0X73391E
	msgbox gText_birch_megaevo_prep MSG_NORMAL @"[darknavyblue_fr]Birch: Si vamos a..."
	pause 0x5
	msgbox gText_megaevo_howto MSG_NORMAL @"[black_fr]Para activar la megaevol..."
	pause 0x1
	msgbox gText_may_wally_battlecue MSG_NORMAL @"[blue_fr]May: [red_fr][player][blu..."
	pause 0x10
	sound 0x15
	applymovement 0x5 EventScript_map_0X72590B
	waitmovement 0x5
	msgbox gText_birch_let_player_equip MSG_NORMAL @"[darknavyblue_fr]Birch: Pero, qu� ..."
	applymovement MOVE_CAMERA EventScript_map_0X7345C6
	waitmovement 0x7F
	special 0x114
	return

	@---------------
EventScript_map_0X7338FB:
	compare 0x5018 0x1
	if 0x1 _call EventScript_map_0X733983
	compare 0x5018 0x2
	if 0x1 _call EventScript_map_0X733999
	compare 0x5018 0x3
	if 0x1 _call EventScript_map_0X7339AF
	return

	@---------------
EventScript_map_0X73391E:
	compare 0x4031 0x0
	if 0x1 _call EventScript_map_0X73394D
	compare 0x4031 0x2
	if 0x1 _call EventScript_map_0X73395B
	compare 0x4031 0x1
	if 0x1 _call EventScript_map_0X733975
	giveitem 0x8008 0x1 MSG_OBTAIN
	return

	@---------------
EventScript_map_0X733983:
	setvar 0x8007 0x117
	setvar 0x8008 0x1D3
	setvar 0x8009 0x9
	call EventScript_map_0X7339C5
	return

	@---------------
EventScript_map_0X733999:
	setvar 0x8007 0x11A
	setvar 0x8008 0x1D4
	setvar 0x8009 0xB
	call EventScript_map_0X7339C5
	return

	@---------------
EventScript_map_0X7339AF:
	setvar 0x8007 0x11D
	setvar 0x8008 0x1D5
	setvar 0x8009 0xC
	call EventScript_map_0X7339C5
	return

	@---------------
EventScript_map_0X73394D:
	giveitem 0x1BE 0x1 MSG_OBTAIN
	return

	@---------------
EventScript_map_0X73395B:
	giveitem 0x1BF 0x1 MSG_OBTAIN
	giveitem 0x1C0 0x1 MSG_OBTAIN
	return

	@---------------
EventScript_map_0X733975:
	giveitem 0x1C1 0x1 MSG_OBTAIN
	return

	@---------------
EventScript_map_0X7339C5:
	bufferpokemon 0x0 0x8007
	givepokemon 0x8007 0x24 0x0 0x0 0x0 0x0
	compare LASTRESULT 0x0
	if 0x1 _goto EventScript_map_0X7339FB
	compare LASTRESULT 0x1
	if 0x1 _goto EventScript_map_0X733A8C
	compare LASTRESULT 0x2
	if 0x1 _goto EventScript_map_0X733AE2
	return

	@---------------
EventScript_map_0X7339FB:
	textcolor 0x3
	fanfare 0x103
	preparemsg gText_prepare_may_starter @"[black_fr]�[player], May recibiero..."
	waitmsg
	waitfanfare
	call EventScript_map_0X733A22
	return

	@---------------
EventScript_map_0X733A8C:
	textcolor 0x3
	fanfare 0x103
	checkgender
	compare LASTRESULT 0x1
	if 0x1 _call EventScript_map_0X733A84
	compare LASTRESULT 0x0
	if 0x1 _call EventScript_map_0X733A7C
	waitfanfare
	call EventScript_map_0X733A22
	bufferboxname 0x0 0x4037
	bufferpokemon 0x1 0x8007
	special2 LASTRESULT 0x165
	compare LASTRESULT 0x1
	if 0x1 _goto EventScript_map_0X1A8C9B
	msgbox 0x8774052 MSG_KEEPOPEN @"[buffer2] fue enviado al PC\nde BI..."
	return

	@---------------
EventScript_map_0X733AE2:
	textcolor 0x3
	msgbox gText_birch_no_space MSG_KEEPOPEN @"[darknavyblue_fr]Birch: �No tienes..."
	setflag 0x206
	return

	@---------------
EventScript_map_0X733A22:
	sound 0xF
	spriteface 0xFF 0x4
	applymovement MOVE_PLAYER 0x8750000
	waitmovement 0xFF
	showsprite 0x8009
	bufferpokemon 0x0 0x8007
	checkgender
	compare LASTRESULT 0x1
	if 0x1 _call EventScript_map_0X733A18
	compare LASTRESULT 0x0
	if 0x1 _call EventScript_map_0X733A0E
	pause 0x10
	cry 0x8007 0x0
	waitcry
	pause 0x10
	sound 0x15
	applymovement 0x8009 EventScript_map_0X726328
	waitmovement 0x8009
	pause 0x25
	sound 0xF
	hidesprite 0x8009
	pause 0x10
	spriteface 0xFF 0x1
	return

	@---------------
EventScript_map_0X733A84:
	preparemsg gText_prepare_brendan_starter @"[black_fr]�[player], Brendan recib..."
	waitmsg
	return

	@---------------
EventScript_map_0X733A7C:
	preparemsg gText_prepare_may_starter @"[black_fr]�[player], May recibiero..."
	waitmsg
	return

	@---------------
EventScript_map_0X1A8C9B:
	special2 LASTRESULT 0x18A
	bufferboxname 0x2 LASTRESULT
	msgbox 0x87740E0 MSG_KEEPOPEN @"La CAJA ["][buffer3]" del PC\nde B..."
	return

	@---------------
EventScript_map_0X733A18:
	msgbox gText_brendan_no_me_lo_creo MSG_NORMAL @"[blue_fr]Brendan: �No me lo creo!\..."
	return

	@---------------
EventScript_map_0X733A0E:
	msgbox gText_may_no_me_lo_creo MSG_NORMAL @"[blue_fr]May: �No me lo creo!\p[re..."
	return

EventScript_map_0X750000:
.byte 0x62
.byte 0xFE

EventScript_map_0X7345ED:
.byte 0x11
.byte 0x11
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0xFE

EventScript_map_0X7345E1:
.byte 0x11
.byte 0xFE

EventScript_map_0X7345E4:
.byte 0x11
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x11
.byte 0x12
.byte 0x12
.byte 0xFE

EventScript_map_0X7345F6:
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0xFE

EventScript_map_0X1A75E7:
.byte 0x2F
.byte 0xFE

EventScript_map_0X1A75ED:
.byte 0x2D
.byte 0xFE

EventScript_map_0X1A666C:
.byte 0x5B
.byte 0x1A
.byte 0xFE

EventScript_map_0X7345D5:
.byte 0x1C
.byte 0x1C
.byte 0x1C
.byte 0x1C
.byte 0x10
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x10
.byte 0x12
.byte 0xFE

EventScript_map_0X72590B:
.byte 0x63
.byte 0xFE

EventScript_map_0X7345C9:
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x11
.byte 0x11
.byte 0x3
.byte 0xFE

EventScript_map_0X7345C6:
.byte 0x11
.byte 0xFE

EventScript_map_0X726328:
.byte 0x66
.byte 0xFE

