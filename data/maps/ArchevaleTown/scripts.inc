# 1 "data/maps/ArchevaleTown/scripts.pory"

# 2 "data/maps/ArchevaleTown/scripts.pory"

# 3 "data/maps/ArchevaleTown/scripts.pory"
ArchevaleTown_OnTransition:
# 4 "data/maps/ArchevaleTown/scripts.pory"
	setflag FLAG_VISITED_ARCHEVALE_TOWN
# 5 "data/maps/ArchevaleTown/scripts.pory"
    end
# 6 "data/maps/ArchevaleTown/scripts.pory"

# 7 "data/maps/ArchevaleTown/scripts.pory"
ArchevaleTown_OnFrame:
# 8 "data/maps/ArchevaleTown/scripts.pory"
    .2byte 0
# 9 "data/maps/ArchevaleTown/scripts.pory"

# 10 "data/maps/ArchevaleTown/scripts.pory"
ArchevaleTown_OnWarp:
# 11 "data/maps/ArchevaleTown/scripts.pory"
    end

ArchevaleTown_MapScripts::
# 16 "data/maps/ArchevaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ArchevaleTown_OnTransition
# 17 "data/maps/ArchevaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ArchevaleTown_OnFrame
# 18 "data/maps/ArchevaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ArchevaleTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ArchevaleTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 19 "data/maps/ArchevaleTown/scripts.pory"
	map_script_2 VAR_ARCHEVALE_HOUSE_STATE, 2, ArchevaleTown_SetIntro
	.2byte 0


ArchevaleTown_SetIntro::
# 24 "data/maps/ArchevaleTown/scripts.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_CHERRY
# 25 "data/maps/ArchevaleTown/scripts.pory"
	setvar VAR_ARCHEVALE_HOUSE_STATE, 3
	return


ArchevaleTown_Home_Sign::
# 29 "data/maps/ArchevaleTown/scripts.pory"
	lockall
# 30 "data/maps/ArchevaleTown/scripts.pory"
	msgbox ArchevaleTown_Home_Sign_Text_0
# 31 "data/maps/ArchevaleTown/scripts.pory"
	releaseall
	return


ArchevaleTownRival_Home_Sign::
# 35 "data/maps/ArchevaleTown/scripts.pory"
	lockall
# 36 "data/maps/ArchevaleTown/scripts.pory"
	msgbox ArchevaleTownRival_Home_Sign_Text_0
# 37 "data/maps/ArchevaleTown/scripts.pory"
	releaseall
	return


ArchevaleTown_Home_Sign_Text_0:
# 30 "data/maps/ArchevaleTown/scripts.pory"
	.string "{PLAYER}'s house$"

ArchevaleTownRival_Home_Sign_Text_0:
# 36 "data/maps/ArchevaleTown/scripts.pory"
	.string "It's Ness' house$"
