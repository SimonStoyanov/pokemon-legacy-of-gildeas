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


ArchevaleTown_Lab_Sign::
# 35 "data/maps/ArchevaleTown/scripts.pory"
	lockall
# 36 "data/maps/ArchevaleTown/scripts.pory"
	msgbox ArchevaleTown_Lab_Sign_Text_0
# 37 "data/maps/ArchevaleTown/scripts.pory"
	releaseall
	return


ArchevaleTownRival_Home_Sign::
# 41 "data/maps/ArchevaleTown/scripts.pory"
	lockall
# 42 "data/maps/ArchevaleTown/scripts.pory"
	msgbox ArchevaleTownRival_Home_Sign_Text_0
# 43 "data/maps/ArchevaleTown/scripts.pory"
	releaseall
	return


ArchevaleTownWinda_Home_Sign::
# 47 "data/maps/ArchevaleTown/scripts.pory"
	lockall
# 48 "data/maps/ArchevaleTown/scripts.pory"
	msgbox ArchevaleTownWinda_Home_Sign_Text_0
# 49 "data/maps/ArchevaleTown/scripts.pory"
	releaseall
	return


ArchevaleTownWavey_Home_Sign::
# 53 "data/maps/ArchevaleTown/scripts.pory"
	lockall
# 54 "data/maps/ArchevaleTown/scripts.pory"
	msgbox ArchevaleTownWavey_Home_Sign_Text_0
# 55 "data/maps/ArchevaleTown/scripts.pory"
	releaseall
	return


ArchevaleTown_Warning::
# 59 "data/maps/ArchevaleTown/scripts.pory"
	lockall
# 60 "data/maps/ArchevaleTown/scripts.pory"
	msgbox ArchevaleTown_Warning_Text_0
# 61 "data/maps/ArchevaleTown/scripts.pory"
	releaseall
	return


ArchevaleTown_EventScript_FatMan::
# 65 "data/maps/ArchevaleTown/scripts.pory"
	lockall
# 66 "data/maps/ArchevaleTown/scripts.pory"
	faceplayer
# 67 "data/maps/ArchevaleTown/scripts.pory"
	msgbox ArchevaleTown_EventScript_FatMan_Text_0
# 68 "data/maps/ArchevaleTown/scripts.pory"
	releaseall
	return


ArchevaleTown_EventScript_NinjaBoy::
# 72 "data/maps/ArchevaleTown/scripts.pory"
	lockall
# 73 "data/maps/ArchevaleTown/scripts.pory"
	faceplayer
# 74 "data/maps/ArchevaleTown/scripts.pory"
	msgbox ArchevaleTown_EventScript_NinjaBoy_Text_0
# 75 "data/maps/ArchevaleTown/scripts.pory"
	releaseall
	return


ArchevaleTown_Rock_Enigma::
# 80 "data/maps/ArchevaleTown/scripts.pory"
	lockall
# 81 "data/maps/ArchevaleTown/scripts.pory"
	braillemsgbox ArchevaleTown_Braille
# 82 "data/maps/ArchevaleTown/scripts.pory"
	releaseall
	return


# 85 "data/maps/ArchevaleTown/scripts.pory"

# 86 "data/maps/ArchevaleTown/scripts.pory"
ArchevaleTown_Braille:
# 87 "data/maps/ArchevaleTown/scripts.pory"
	brailleformat 5, 0, 25, 19, 8, 3
# 88 "data/maps/ArchevaleTown/scripts.pory"
	.braille "IT HIDES\n"
# 89 "data/maps/ArchevaleTown/scripts.pory"
	.braille "IN SHADOW.$"

ArchevaleTown_Home_Sign_Text_0:
# 30 "data/maps/ArchevaleTown/scripts.pory"
	.string "{PLAYER}'s house$"

ArchevaleTown_Lab_Sign_Text_0:
# 36 "data/maps/ArchevaleTown/scripts.pory"
	.string "PROF. CHERRY'S POKEMON LAB$"

ArchevaleTownRival_Home_Sign_Text_0:
# 42 "data/maps/ArchevaleTown/scripts.pory"
	.string "It's Percy's house$"

ArchevaleTownWinda_Home_Sign_Text_0:
# 48 "data/maps/ArchevaleTown/scripts.pory"
	.string "It's Winda's house$"

ArchevaleTownWavey_Home_Sign_Text_0:
# 54 "data/maps/ArchevaleTown/scripts.pory"
	.string "It's Wavey's house$"

ArchevaleTown_Warning_Text_0:
# 60 "data/maps/ArchevaleTown/scripts.pory"
	.string "ARCHEVALE TOWN\n"
	.string "Where stone remembers the first frost\p"
	.string "Be wary of stepping on ice$"

ArchevaleTown_EventScript_FatMan_Text_0:
# 67 "data/maps/ArchevaleTown/scripts.pory"
	.string "New discoveries are done everyday\n"
	.string "reagarding Pokémon's biology\p"
	.string "Technology is amazing!$"

ArchevaleTown_EventScript_NinjaBoy_Text_0:
# 74 "data/maps/ArchevaleTown/scripts.pory"
	.string "I love sliding through ice!$"
