ArchevaleTown_PlayerHouse_2F_MapScripts::
# 3 "data/maps/ArchevaleTown_PlayerHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ArchevaleTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 4 "data/maps/ArchevaleTown_PlayerHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ArchevaleTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/ArchevaleTown_PlayerHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ArchevaleTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ArchevaleTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

ArchevaleTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0

ArchevaleTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 8 "data/maps/ArchevaleTown_PlayerHouse_2F/scripts.pory"
	map_script_2 VAR_ARCHEVALE_HOUSE_STATE, 0, ArchevaleTown_PlayerHouse_2F_SetIntroFlags
	.2byte 0


ArchevaleTown_PlayerHouse_2F_SetIntroFlags::
# 15 "data/maps/ArchevaleTown_PlayerHouse_2F/scripts.pory"
	setrespawn HEAL_LOCATION_ARCHEVALE_TOWN_PLAYER_HOUSE_2F
	return


ArchevaleTown_Test::
# 19 "data/maps/ArchevaleTown_PlayerHouse_2F/scripts.pory"
	lockall
# 20 "data/maps/ArchevaleTown_PlayerHouse_2F/scripts.pory"
	msgbox ArchevaleTown_Test_Text_0
# 21 "data/maps/ArchevaleTown_PlayerHouse_2F/scripts.pory"
	releaseall
# 22 "data/maps/ArchevaleTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_ARCHEVALE_HOUSE_STATE, 1
	return


# 25 "data/maps/ArchevaleTown_PlayerHouse_2F/scripts.pory"
MyMovement:
# 26 "data/maps/ArchevaleTown_PlayerHouse_2F/scripts.pory"
	walk_left
	step_end

ArchevaleTown_Test_Text_0:
# 20 "data/maps/ArchevaleTown_PlayerHouse_2F/scripts.pory"
	.string "{PLAYER}, COME DOWNSTAIRS, THERE'S A\n"
	.string "SURPRISE FOR YOU$"
