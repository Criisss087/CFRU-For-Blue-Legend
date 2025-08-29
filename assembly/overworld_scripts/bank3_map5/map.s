.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.global EventScript_map_3_5

	@---------------
EventScript_map_3_5:
.byte 0x3
.4byte EventScript_map_0X166906
.byte 0x2
.4byte EventScript_map_0X1668E7
.byte 0x0

	@---------------
EventScript_map_0X1668E7:
.2byte 0x501A
.2byte 0x2
.4byte EventScript_map_0X73607D
.2byte 0x0

	@---------------
EventScript_map_0X166906:
	setworldmapflag 0x895
	checkflag 0x2F9
	if 0x1 _call EventScript_map_0X166913
	end

	@---------------
EventScript_map_0X73607D:
	compare 0x501A 0x2
	if 0x1 _call EventScript_map_0X73608B
	release
	end

	@---------------
EventScript_map_0X166913:
	setflag 0xA1
	return

	@---------------
EventScript_map_0X73608B:
	spriteface 0xFF 0x1
	pause 0x40
	applymovement MOVE_PLAYER EventScript_map_0X7360A4
	waitmovement 0xFF
	setvar 0x501A 0x3
	release
	end

EventScript_map_0X7360A4:
.byte 0x10
.byte 0xFE
