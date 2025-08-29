.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"
	
	@---------------
EventScript_npc8_0X735FAA:
	faceplayer
	checkgender
	compare LASTRESULT 0x0
	if 0x1 _call EventScript_npc8_0X735FFB
	compare LASTRESULT 0x1
	if 0x1 _call EventScript_npc8_0X736002
	msgbox gText_npc8_0X73600C MSG_YESNO @"[darknavyblue_fr]�Quieres que [gre..."
	compare LASTRESULT 0x0
	if 0x1 _goto EventScript_npc8_0X736009
	setflag 0x211
	cry 0x12 0x0
	waitcry
	hidesprite 0xA
	copyvar 0x501B 0x511F
	copyvar 0x511F 0x8001
	setvar 0x501A 0x2
	warpmuted 0x3 0x5 0xD 0x8 0x1D
	release
	end

	@---------------
EventScript_npc8_0X735FFB:
	setvar 0x8001 0x7F
	return

	@---------------
EventScript_npc8_0X736002:
	setvar 0x8001 0x7E
	return

	@---------------
EventScript_npc8_0X736009:
	release
	end

