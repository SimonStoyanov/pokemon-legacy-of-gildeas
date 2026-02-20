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
	msgbox ArchevaleTown_PlayerHouse_1F_MeetCherry_Text_0
# 36 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_CHERRY, ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_3
# 42 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitmovement LOCALID_CHERRY
# 44 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_ARCHVALE_CHERRY_STARTERS_BAG
# 45 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	addobject LOCALID_CHERRY_BAG, MAP_ARCHEVALE_TOWN_PLAYER_HOUSE_1F
# 47 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	delay 2
# 48 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	msgbox ArchevaleTown_PlayerHouse_1F_MeetCherry_Text_1
# 50 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	releaseall
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
# 54 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 55 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call ArchevaleTown_PlayerHouse_1F_MeetCherry
	return


ArchevaleTown_PlayerHouse_1F_MeetCherry1::
# 59 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 60 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call ArchevaleTown_PlayerHouse_1F_MeetCherry
	return


ArchevaleTown_PlayerHouse_1F_MeetCherry2::
# 64 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 65 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call ArchevaleTown_PlayerHouse_1F_MeetCherry
	return


ArchevaleTown_PlayerHouse_1F_MeetCherry3::
# 69 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	lock
# 70 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	msgbox ArchevaleTown_PlayerHouse_1F_MeetCherry3_Text_0
# 71 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_PlayerHouse_1F_MeetCherry3_Movement_0
# 72 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitmovement LOCALID_PLAYER
# 73 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	release
	return


PlayersHouse_1F_EventScript_Cherry::
# 77 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	lock
# 78 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 79 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Cherry_Text_0
# 80 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_CHERRY, PlayersHouse_1F_EventScript_Cherry_Movement_0
# 81 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitmovement LOCALID_CHERRY
# 82 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	release
	return


ArchevaleTown_StarterChoice::
# 86 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	lock
# 87 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 88 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_ARCHEVALE_HOUSE_STATE, 2
# 89 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 90 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 91 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	special ChooseStarter
# 92 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitstate
# 93 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_PLAYERS_HOUSE_PERCY
# 95 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 96 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	msgbox ArchevaleTown_StarterChoice_Text_0
# 98 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call PlayersHouse_1F_EventScript_Rival
# 100 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	release
	return


PlayersHouse_1F_EventScript_Rival::
# 104 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	lock
# 106 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	addobject LOCALID_PERCY_HOUSE_1F, MAP_ARCHEVALE_TOWN_PLAYER_HOUSE_1F
# 108 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PERCY_HOUSE_1F, PlayersHouse_1F_EventScript_Rival_Movement_0
# 112 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_0
# 113 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_1
# 116 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PERCY_HOUSE_1F, PlayersHouse_1F_EventScript_Rival_Movement_1
# 121 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitmovement LOCALID_PERCY_HOUSE_1F
# 123 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	delay 10
# 125 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PERCY_HOUSE_1F, PlayersHouse_1F_EventScript_Rival_Movement_2
# 128 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	waitmovement LOCALID_PERCY_HOUSE_1F
# 130 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	switch VAR_STARTER_MON
# 131 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	case 0, PlayersHouse_1F_EventScript_Rival_3
# 132 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	case 1, PlayersHouse_1F_EventScript_Rival_4
# 133 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	case 2, PlayersHouse_1F_EventScript_Rival_5
PlayersHouse_1F_EventScript_Rival_1:
# 136 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_2
# 138 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_HIDE_ARCHVALE_CHERRY_STARTERS_BAG
# 139 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	removeobject LOCALID_CHERRY_BAG
# 141 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return

PlayersHouse_1F_EventScript_Rival_3:
# 131 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call PlayerHouse1F_Rival_BudbittChosen
	goto PlayersHouse_1F_EventScript_Rival_1

PlayersHouse_1F_EventScript_Rival_4:
# 132 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call PlayerHouse1F_Rival_GliscaleChosen
	goto PlayersHouse_1F_EventScript_Rival_1

PlayersHouse_1F_EventScript_Rival_5:
# 133 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	call PlayerHouse1F_Rival_WaterChosen
	goto PlayersHouse_1F_EventScript_Rival_1


PlayerHouse1F_Rival_BudbittChosen::
# 145 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	msgbox PlayerHouse1F_Rival_BudbittChosen_Text_0
# 148 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_PERCY_FIRST_BATTLE_TREECKO, Route103_Text_MayDefeated
	return


PlayerHouse1F_Rival_GliscaleChosen::
# 152 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	msgbox PlayerHouse1F_Rival_GliscaleChosen_Text_0
# 155 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_PERCY_FIRST_BATTLE_TORCHIC, Route103_Text_MayDefeated
	return


PlayerHouse1F_Rival_WaterChosen::
# 159 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	msgbox PlayerHouse1F_Rival_WaterChosen_Text_0
# 162 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_PERCY_FIRST_BATTLE_MUDKIP, Route103_Text_MayDefeated
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

# 36 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
ArchevaleTown_PlayerHouse_1F_MeetCherry_Movement_3:
# 37 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 38 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 38 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 39 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 39 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 39 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 40 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	face_down
	step_end

# 71 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
ArchevaleTown_PlayerHouse_1F_MeetCherry3_Movement_0:
# 71 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_up
	step_end

# 80 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
PlayersHouse_1F_EventScript_Cherry_Movement_0:
# 80 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	face_original_direction
	step_end

# 108 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_0:
# 109 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_fast_up
# 109 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_fast_up
	step_end

# 116 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_1:
# 117 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 118 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 119 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	face_right
	step_end

# 125 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_2:
# 126 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	face_up
	step_end

ArchevaleTown_PlayerHouse_1F_MeetCherry_Text_0:
# 33 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	.string "CHERRY: Good to see you {PLAYER},\n"
	.string "today is a special day, ain't it? You may\l"
	.string "finally join the golden pilgrimage.\l"
	.string "To do so, as you know, you will need a\l"
	.string "partner to accompany you through this\l"
	.string "journey.$"

ArchevaleTown_PlayerHouse_1F_MeetCherry_Text_1:
# 48 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	.string "These are my last 3 Pokémon, please\n"
	.string "choose which will be your companion$"

ArchevaleTown_PlayerHouse_1F_MeetCherry3_Text_0:
# 70 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	.string "MOM: Don't go out yet, didn't you want\n"
	.string "to get a partner?$"

PlayersHouse_1F_EventScript_Cherry_Text_0:
# 79 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	.string "CHERRY: A tough decision indeed\n"
	.string "{PLAYER}, but rest assured, these are\l"
	.string "great partners!$"

ArchevaleTown_StarterChoice_Text_0:
# 96 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	.string "???: I'm late!$"

PlayersHouse_1F_EventScript_Rival_Text_0:
# 112 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	.string "PERCY: Can I still get a partner aunty\n"
	.string "Cherry?$"

PlayersHouse_1F_EventScript_Rival_Text_1:
# 113 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	.string "CHERRY: Suit yourself$"

PlayersHouse_1F_EventScript_Rival_Text_2:
# 136 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	.string "PERCY: Well I'll be...\n"
	.string "...\p"
	.string "Begginer's luck! I'll see you soon$"

PlayerHouse1F_Rival_BudbittChosen_Text_0:
# 145 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	.string "PERCY: Hey {PLAYER}! So you've\n"
	.string "chosen Budbitt...\l"
	.string "Then I'll get this little guy! Let's\l"
	.string "tests our skills!$"

PlayerHouse1F_Rival_GliscaleChosen_Text_0:
# 152 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	.string "PERCY: Hey {PLAYER}! So you've\n"
	.string "chosen Gliscale...\l"
	.string "Then I'll get this little guy! Let's\l"
	.string "tests our skills!$"

PlayerHouse1F_Rival_WaterChosen_Text_0:
# 159 "data/maps/ArchevaleTown_PlayerHouse_1F/scripts.pory"
	.string "PERCY: Hey {PLAYER}! So you've\n"
	.string "chosen Water...\l"
	.string "Then I'll get this little guy! Let's\l"
	.string "tests our skills!$"
