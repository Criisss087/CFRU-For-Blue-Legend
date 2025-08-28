.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.global EventScript_map_4_2

EventScript_map_1_5:
.byte 0x2
.4byte EventScript_map_0XA000BE
.byte 0x0

	@---------------
EventScript_map_0XA000BE:
.2byte 0x4056
.2byte 0x1
.4byte EventScript_map_0X722130
.2byte 0x0

	@---------------
EventScript_map_0X722130:
	sound 0x15
	applymovement 0x1 EventScript_map_0X750003
	waitmovement 0x0
	lockall
	msgbox gText_map_0X7701D6 MSG_KEEPOPEN @"[green_fr]Hey [player] ven aqu�."
	applymovement MOVE_PLAYER EventScript_map_0X72216A
	waitmovement 0xFF
	msgbox gText_map_0X775017 MSG_KEEPOPEN @"[green_fr]Cap. Arenque: Hola [play..."
	setvar 0x4056 0x2
	releaseall
	end

EventScript_map_0X750003:
.byte 0x62
.byte 0x6
.byte 0xFE

EventScript_map_0X72216A:
.byte 0x11
.byte 0x13
.byte 0x11
.byte 0x7
.byte 0xFE
