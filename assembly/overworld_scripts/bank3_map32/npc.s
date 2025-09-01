.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

Event_script_wallyFollower:
	random 0x7
	compare LASTRESULT 0x0
	if 0x1 _goto Event_script_wallyFollower_01
	compare LASTRESULT 0x1
	if 0x1 _goto Event_script_wallyFollower_02
	compare LASTRESULT 0x2
	if 0x1 _goto Event_script_wallyFollower_03
	compare LASTRESULT 0x3
	if 0x1 _goto Event_script_wallyFollower_04
	compare LASTRESULT 0x4
	if 0x1 _goto Event_script_wallyFollower_05
	compare LASTRESULT 0x5
	if 0x1 _goto Event_script_wallyFollower_06
	compare LASTRESULT 0x6
	if 0x1 _goto Event_script_wallyFollower_07
	release
	end

Event_script_wallyFollower_01:
	msgbox gText_wallyFollower_01 MSG_FACE
	release
	end

Event_script_wallyFollower_02:
	msgbox gText_wallyFollower_02 MSG_FACE
	release
	end

Event_script_wallyFollower_03:
	msgbox gText_wallyFollower_03 MSG_FACE
	release
	end

Event_script_wallyFollower_04:
	msgbox gText_wallyFollower_04 MSG_FACE
	release
	end

Event_script_wallyFollower_05:
	msgbox gText_wallyFollower_05 MSG_FACE
	release
	end

Event_script_wallyFollower_06:
	msgbox gText_wallyFollower_06 MSG_FACE
	release
	end

Event_script_wallyFollower_07:
	msgbox gText_wallyFollower_07 MSG_FACE
	release
	end
	