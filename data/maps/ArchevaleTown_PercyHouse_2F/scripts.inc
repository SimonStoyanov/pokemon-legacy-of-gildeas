ArchevaleTown_PercyHouse_2F_MapScripts::
# 2 "data/maps/ArchevaleTown_PercyHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ArchevaleTown_PercyHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 3 "data/maps/ArchevaleTown_PercyHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ArchevaleTown_PercyHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 6 "data/maps/ArchevaleTown_PercyHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ArchevaleTown_PercyHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ArchevaleTown_PercyHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

ArchevaleTown_PercyHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0

ArchevaleTown_PercyHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	.2byte 0


ArchevaleTown_PercyHouse_2F_NOTMINE::
# 12 "data/maps/ArchevaleTown_PercyHouse_2F/scripts.pory"
	lock
# 13 "data/maps/ArchevaleTown_PercyHouse_2F/scripts.pory"
	msgbox ArchevaleTown_PercyHouse_2F_NOTMINE_Text_0
# 14 "data/maps/ArchevaleTown_PercyHouse_2F/scripts.pory"
	release
	return


ArchevaleTown_PercyHouse_2F_NOTMINE_Text_0:
# 13 "data/maps/ArchevaleTown_PercyHouse_2F/scripts.pory"
	.string "I shouldn't be reading Percy's stuff$"
