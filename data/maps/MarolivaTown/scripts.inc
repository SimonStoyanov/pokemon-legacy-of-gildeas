# 1 "data/maps/MarolivaTown/scripts.pory"

# 2 "data/maps/MarolivaTown/scripts.pory"
MarolivaTown_MapScripts::
# 3 "data/maps/MarolivaTown/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, MarolivaTown_OnTransition
# 4 "data/maps/MarolivaTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MarolivaTown_OnFrame
# 5 "data/maps/MarolivaTown/scripts.pory"
	@ map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MarolivaTown_OnWarp
# 6 "data/maps/MarolivaTown/scripts.pory"
	.byte 0
# 7 "data/maps/MarolivaTown/scripts.pory"

# 8 "data/maps/MarolivaTown/scripts.pory"

# 9 "data/maps/MarolivaTown/scripts.pory"
MarolivaTown_OnTransition:
# 10 "data/maps/MarolivaTown/scripts.pory"
	setflag FLAG_VISITED_MAROLIVA_TOWN
# 11 "data/maps/MarolivaTown/scripts.pory"
    end
# 12 "data/maps/MarolivaTown/scripts.pory"

# 13 "data/maps/MarolivaTown/scripts.pory"
MarolivaTown_OnFrame:
# 14 "data/maps/MarolivaTown/scripts.pory"
    end
# 15 "data/maps/MarolivaTown/scripts.pory"

# 16 "data/maps/MarolivaTown/scripts.pory"
MarolivaTown_OnWarp:
# 17 "data/maps/MarolivaTown/scripts.pory"
    end
# 18 "data/maps/MarolivaTown/scripts.pory"

# 19 "data/maps/MarolivaTown/scripts.pory"

# 20 "data/maps/MarolivaTown/scripts.pory"
MarolivaTown_Home_Sign::
# 21 "data/maps/MarolivaTown/scripts.pory"
	lockall
# 22 "data/maps/MarolivaTown/scripts.pory"
	msgbox MarolivaTown_Home_Text_Sign, MSGBOX_SIGN
# 23 "data/maps/MarolivaTown/scripts.pory"
	releaseall
# 24 "data/maps/MarolivaTown/scripts.pory"
	end
# 25 "data/maps/MarolivaTown/scripts.pory"

# 26 "data/maps/MarolivaTown/scripts.pory"
MarolivaTown_Home_Text_Sign:
# 27 "data/maps/MarolivaTown/scripts.pory"
    .string "{PLAYER}'s HOUSE$"
