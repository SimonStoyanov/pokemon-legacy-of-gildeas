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
	switch VAR_0x8008
# 14 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	case 0, ArchevaleTown_PlayerHouse_1F_MeetCherry_3
# 20 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	case 1, ArchevaleTown_PlayerHouse_1F_MeetCherry_4
# 25 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	case 2, ArchevaleTown_PlayerHouse_1F_MeetCherry_5
ArchevaleTown_PlayerHouse_1F_MeetCherry_1:
# 32 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitmovement LOCALID_PLAYER
# 33 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	release
	return

ArchevaleTown_PlayerHouse_1F_MeetCherry_3:
# 14 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_0
	goto ArchevaleTown_PlayerHouse_1F_MeetCherry_1

ArchevaleTown_PlayerHouse_1F_MeetCherry_4:
# 20 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_1
	goto ArchevaleTown_PlayerHouse_1F_MeetCherry_1

ArchevaleTown_PlayerHouse_1F_MeetCherry_5:
# 25 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_2
	goto ArchevaleTown_PlayerHouse_1F_MeetCherry_1


ArchevaleTown_PlayerHouse_1F_MeetCherry0::
# 37 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 38 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call ArchevaleTown_PlayerHouse_1F_MeetCherry
	return


ArchevaleTown_PlayerHouse_1F_MeetCherry1::
# 42 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 43 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call ArchevaleTown_PlayerHouse_1F_MeetCherry
	return


ArchevaleTown_PlayerHouse_1F_MeetCherry2::
# 47 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 48 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call ArchevaleTown_PlayerHouse_1F_MeetCherry
	return


ArchevaleTown_StarterChoice::
# 52 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	lock
# 53 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 54 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_ARCHEVALE_HOUSE_STATE, 2
# 55 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_STARTER_GAINED
# 56 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 57 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	removeobject LOCALID_CHERRY_BAG
# 59 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	special ChooseStarter
# 60 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitstate
# 61 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_HIDE_ARCHVALE_CHERRY_STARTERS_BAG
	return


# 14 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_0:
# 15 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 16 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 16 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 16 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 16 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 16 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 16 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 16 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 18 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 18 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
	step_end

# 20 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_1:
# 21 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 21 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 21 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 21 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 21 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 21 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 21 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 21 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 23 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 23 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
	step_end

# 25 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_2:
# 26 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 27 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 27 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 27 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 27 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 27 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 27 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 27 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 27 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 27 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 29 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 29 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
	step_end
