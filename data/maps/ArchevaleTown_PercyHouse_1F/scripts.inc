ArchevaleTown_PercyHouse_1F_MapScripts::
# 2 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ArchevaleTown_PercyHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 3 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ArchevaleTown_PercyHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 6 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ArchevaleTown_PercyHouse_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ArchevaleTown_PercyHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

ArchevaleTown_PercyHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0

ArchevaleTown_PercyHouse_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	.2byte 0


PercyHouse_1F_EventScript_Mom::
# 12 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	lock
# 13 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	faceplayer
# 14 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	msgbox PercyHouse_1F_EventScript_Mom_Text_0
# 15 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	applymovement LOCALID_PERCYMOM, PercyHouse_1F_EventScript_Mom_Movement_0
# 16 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	release
	return


PercyHouse_1F_EventScript_Grandma::
# 20 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	lock
# 21 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	faceplayer
# 22 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	msgbox PercyHouse_1F_EventScript_Grandma_Text_0
# 23 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	applymovement LOCALID_GRANDMA, PercyHouse_1F_EventScript_Mom_Movement_0
# 24 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	release
	return


PercyHouse_1F_EventScript_Sister::
# 28 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	lock
# 29 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	faceplayer
# 30 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	msgbox PercyHouse_1F_EventScript_Sister_Text_0
# 31 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	applymovement LOCALID_SISTER, PercyHouse_1F_EventScript_Mom_Movement_0
# 32 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	release
	return


# 15 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
PercyHouse_1F_EventScript_Mom_Movement_0:
# 15 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	face_original_direction
	step_end

PercyHouse_1F_EventScript_Mom_Text_0:
# 14 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	.string "Have you seen Percy? I think he went\n"
	.string "out already.\p"
	.string "Take care!$"

PercyHouse_1F_EventScript_Grandma_Text_0:
# 22 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	.string "Oh... to be young... Get a hold of these\n"
	.string "memories to come$"

PercyHouse_1F_EventScript_Sister_Text_0:
# 30 "data/maps/ArchevaleTown_PercyHouse_1F/scripts.pory"
	.string "I want to go out too!$"
