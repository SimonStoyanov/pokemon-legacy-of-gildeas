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


ArchevaleTown_PlayerHouse_1F_RunningShoes_L::
# 17 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 18 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call ArchevaleTown_PlayerHouse_1F_RunningShoes
	return


ArchevaleTown_PlayerHouse_1F_RunningShoes_R::
# 22 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 23 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call ArchevaleTown_PlayerHouse_1F_RunningShoes
	return


ArchevaleTown_PlayerHouse_1F_RunningShoes::
# 27 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	lock
# 28 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	switch VAR_0x8008
# 29 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	case 0, ArchevaleTown_PlayerHouse_1F_RunningShoes_3
# 34 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	case 1, ArchevaleTown_PlayerHouse_1F_RunningShoes_4
ArchevaleTown_PlayerHouse_1F_RunningShoes_1:
# 40 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitmovement LOCAL_ID_MOM
# 41 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_PlayerHouse_1F_RunningShoes_Movement_2
# 42 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitmovement LOCALID_PLAYER
# 43 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	msgbox ArchevaleTown_PlayerHouse_1F_RunningShoes_Text_0
# 44 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 45 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 46 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_Text_SwitchShoesWithRunningShoes
# 48 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitfanfare
# 49 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_ARCHEVALE_HOUSE_STATE, 2
# 50 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	release
	return

ArchevaleTown_PlayerHouse_1F_RunningShoes_3:
# 29 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCAL_ID_MOM, ArchevaleTown_PlayerHouse_1F_RunningShoes_Movement_0
	goto ArchevaleTown_PlayerHouse_1F_RunningShoes_1

ArchevaleTown_PlayerHouse_1F_RunningShoes_4:
# 34 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCAL_ID_MOM, ArchevaleTown_PlayerHouse_1F_RunningShoes_Movement_1
	goto ArchevaleTown_PlayerHouse_1F_RunningShoes_1


# 29 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
ArchevaleTown_PlayerHouse_1F_RunningShoes_Movement_0:
# 30 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 30 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 31 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 31 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 31 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 32 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
	step_end

# 34 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
ArchevaleTown_PlayerHouse_1F_RunningShoes_Movement_1:
# 35 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 35 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 36 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 36 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 37 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_down
	step_end

# 41 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
ArchevaleTown_PlayerHouse_1F_RunningShoes_Movement_2:
# 41 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	face_up
	step_end

ArchevaleTown_PlayerHouse_1F_RunningShoes_Text_0:
# 43 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Wait, don't forget to get your\n"
	.string "shoes on$"
