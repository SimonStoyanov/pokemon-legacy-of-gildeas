# 1 "data/maps/ArchevaleTown/scripts.pory"

# 2 "data/maps/ArchevaleTown/scripts.pory"

# 3 "data/maps/ArchevaleTown/scripts.pory"
ArchevaleTown_MapScripts::
# 4 "data/maps/ArchevaleTown/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, ArchevaleTown_OnTransition
# 5 "data/maps/ArchevaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ArchevaleTown_OnFrame
# 6 "data/maps/ArchevaleTown/scripts.pory"
	@ map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ArchevaleTown_OnWarp
# 7 "data/maps/ArchevaleTown/scripts.pory"
	.byte 0
# 8 "data/maps/ArchevaleTown/scripts.pory"

# 9 "data/maps/ArchevaleTown/scripts.pory"

# 10 "data/maps/ArchevaleTown/scripts.pory"
ArchevaleTown_OnTransition:
# 11 "data/maps/ArchevaleTown/scripts.pory"
	setflag FLAG_VISITED_ARCHEVALE_TOWN
# 12 "data/maps/ArchevaleTown/scripts.pory"
    end
# 13 "data/maps/ArchevaleTown/scripts.pory"

# 14 "data/maps/ArchevaleTown/scripts.pory"
ArchevaleTown_OnFrame:
# 15 "data/maps/ArchevaleTown/scripts.pory"
    .2byte 0
# 16 "data/maps/ArchevaleTown/scripts.pory"

# 17 "data/maps/ArchevaleTown/scripts.pory"
ArchevaleTown_OnWarp:
# 18 "data/maps/ArchevaleTown/scripts.pory"
    end

ArchevaleTown_Home_Sign::
# 23 "data/maps/ArchevaleTown/scripts.pory"
	lockall
# 24 "data/maps/ArchevaleTown/scripts.pory"
	msgbox ArchevaleTown_Home_Sign_Text_0
# 25 "data/maps/ArchevaleTown/scripts.pory"
	releaseall
	return


ArchevaleTownRival_Home_Sign::
# 29 "data/maps/ArchevaleTown/scripts.pory"
	lockall
# 30 "data/maps/ArchevaleTown/scripts.pory"
	msgbox ArchevaleTownRival_Home_Sign_Text_0
# 31 "data/maps/ArchevaleTown/scripts.pory"
	releaseall
	return


ArchevaleTown_Home_Sign_Text_0:
# 24 "data/maps/ArchevaleTown/scripts.pory"
	.string "{PLAYER}'s house$"

ArchevaleTownRival_Home_Sign_Text_0:
# 30 "data/maps/ArchevaleTown/scripts.pory"
	.string "It's Ness' house$"
