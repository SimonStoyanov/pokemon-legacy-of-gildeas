ArchevaleTown_PlayerHouse_1F_MapScripts::
# 2 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ArchevaleTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 3 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ArchevaleTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 6 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ArchevaleTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ArchevaleTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

ArchevaleTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0

ArchevaleTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	.2byte 0


ArchevaleTown_PlayerHouse_1F_MeetCherry::
# 12 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	lock
# 13 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_ARCHEVALE_HOUSE_STATE, 2
# 14 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	switch VAR_0x8008
# 15 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	case 0, ArchevaleTown_PlayerHouse_1F_MeetCherry_3
# 21 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	case 1, ArchevaleTown_PlayerHouse_1F_MeetCherry_4
# 26 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	case 2, ArchevaleTown_PlayerHouse_1F_MeetCherry_5
ArchevaleTown_PlayerHouse_1F_MeetCherry_1:
# 33 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitmovement LOCALID_PLAYER
# 34 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	release
	return

ArchevaleTown_PlayerHouse_1F_MeetCherry_3:
# 15 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_0
	goto ArchevaleTown_PlayerHouse_1F_MeetCherry_1

ArchevaleTown_PlayerHouse_1F_MeetCherry_4:
# 21 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_1
	goto ArchevaleTown_PlayerHouse_1F_MeetCherry_1

ArchevaleTown_PlayerHouse_1F_MeetCherry_5:
# 26 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_2
	goto ArchevaleTown_PlayerHouse_1F_MeetCherry_1


ArchevaleTown_PlayerHouse_1F_MeetCherry0::
# 38 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 39 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call ArchevaleTown_PlayerHouse_1F_MeetCherry
	return


ArchevaleTown_PlayerHouse_1F_MeetCherry1::
# 43 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 44 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call ArchevaleTown_PlayerHouse_1F_MeetCherry
	return


ArchevaleTown_PlayerHouse_1F_MeetCherry2::
# 48 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 49 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call ArchevaleTown_PlayerHouse_1F_MeetCherry
	return


ArchevaleTown_StarterChoice::
# 53 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	lock
# 54 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 55 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 56 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 57 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	removeobject LOCALID_CHERRY_BAG
# 58 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	special ChooseStarter
# 59 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitstate
# 60 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_HIDE_ARCHVALE_CHERRY_STARTERS_BAG
	return


# 63 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
MoveToCherry:
	step_end

# 15 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_0:
# 16 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 18 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 18 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 18 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 18 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 18 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 18 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 19 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 19 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
	step_end

# 21 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_1:
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 23 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 23 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 23 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 23 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 23 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 23 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 24 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 24 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
	step_end

# 26 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_2:
# 27 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 29 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 29 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 29 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 29 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 29 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 29 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 30 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 30 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
	step_end
