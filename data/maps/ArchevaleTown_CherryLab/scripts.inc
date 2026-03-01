ArchevaleTown_CherryLab_MapScripts::
	.byte 0


ArchevaleTown_PlayerHouse_1F_MeetCherry3::
# 4 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lock
# 5 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_PlayerHouse_1F_MeetCherry3_Text_0
# 6 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_PlayerHouse_1F_MeetCherry3_Movement_0
# 7 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 8 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	release
	return


PlayersHouse_1F_EventScript_Cherry::
# 12 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lock
# 13 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	faceplayer
# 14 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Cherry_Text_0
# 15 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_CHERRY, PlayersHouse_1F_EventScript_Cherry_Movement_0
# 16 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_CHERRY
# 17 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	release
	return


ArchevaleTown_StarterChoice::
# 21 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lock
# 22 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	faceplayer
# 23 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_ARCHEVALE_HOUSE_STATE, 2
# 24 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 25 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 26 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	special ChooseStarter
# 27 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitstate
# 28 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	clearflag FLAG_HIDE_PLAYERS_HOUSE_PERCY
# 30 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 31 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_StarterChoice_Text_0
# 33 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call PlayersHouse_1F_EventScript_Rival
# 35 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	release
	return


PlayersHouse_1F_EventScript_Rival::
# 39 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lock
# 41 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	addobject LOCALID_PERCY_HOUSE_1F, MAP_ARCHEVALE_TOWN_PLAYER_HOUSE_1F
# 43 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_HOUSE_1F, PlayersHouse_1F_EventScript_Rival_Movement_0
# 46 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_HOUSE_1F
# 48 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_0
# 49 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_1
# 52 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_HOUSE_1F, PlayersHouse_1F_EventScript_Rival_Movement_1
# 57 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_HOUSE_1F
# 59 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	delay 60
# 61 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_HOUSE_1F, PlayersHouse_1F_EventScript_Rival_Movement_2
# 64 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_HOUSE_1F
# 66 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	switch VAR_STARTER_MON
# 67 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 0, PlayersHouse_1F_EventScript_Rival_3
# 68 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 1, PlayersHouse_1F_EventScript_Rival_4
# 69 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 2, PlayersHouse_1F_EventScript_Rival_5
PlayersHouse_1F_EventScript_Rival_1:
# 72 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_2
# 74 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_HOUSE_1F, PlayersHouse_1F_EventScript_Rival_Movement_3
# 78 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_PERCY
# 79 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_PERCY_HOUSE_1F, MAP_ARCHEVALE_TOWN_PLAYER_HOUSE_1F
# 81 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_3
# 83 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_HIDE_ARCHVALE_CHERRY_STARTERS_BAG
# 84 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_CHERRY_BAG
# 86 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	releaseall
	return

PlayersHouse_1F_EventScript_Rival_3:
# 67 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call PlayerHouse1F_Rival_BudbittChosen
	goto PlayersHouse_1F_EventScript_Rival_1

PlayersHouse_1F_EventScript_Rival_4:
# 68 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call PlayerHouse1F_Rival_GliscaleChosen
	goto PlayersHouse_1F_EventScript_Rival_1

PlayersHouse_1F_EventScript_Rival_5:
# 69 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call PlayerHouse1F_Rival_WaterChosen
	goto PlayersHouse_1F_EventScript_Rival_1


PlayerHouse1F_Rival_BudbittChosen::
# 90 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayerHouse1F_Rival_BudbittChosen_Text_0
# 93 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	trainerbattle_no_intro TRAINER_PERCY_FIRST_BATTLE_TREECKO, Route103_Text_MayDefeated
	return


PlayerHouse1F_Rival_GliscaleChosen::
# 97 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayerHouse1F_Rival_GliscaleChosen_Text_0
# 100 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	trainerbattle_no_intro TRAINER_PERCY_FIRST_BATTLE_TORCHIC, Route103_Text_MayDefeated
	return


PlayerHouse1F_Rival_WaterChosen::
# 104 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayerHouse1F_Rival_WaterChosen_Text_0
# 107 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	trainerbattle_no_intro TRAINER_PERCY_FIRST_BATTLE_MUDKIP, Route103_Text_MayDefeated
	return


# 6 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
ArchevaleTown_PlayerHouse_1F_MeetCherry3_Movement_0:
# 6 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
	step_end

# 15 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Cherry_Movement_0:
# 15 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	face_original_direction
	step_end

# 43 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_0:
# 44 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 44 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
	step_end

# 52 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_1:
# 53 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_left
# 54 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 55 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	face_right
	step_end

# 61 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_2:
# 62 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	face_up
	step_end

# 74 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_3:
# 75 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 75 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
	step_end

ArchevaleTown_PlayerHouse_1F_MeetCherry3_Text_0:
# 5 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "MOM: Don't go out yet, didn't you want\n"
	.string "to get a partner?$"

PlayersHouse_1F_EventScript_Cherry_Text_0:
# 14 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "CHERRY: A tough decision indeed\n"
	.string "{PLAYER}, but rest assured, these are\l"
	.string "great partners!$"

ArchevaleTown_StarterChoice_Text_0:
# 31 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "???: I'm late!$"

PlayersHouse_1F_EventScript_Rival_Text_0:
# 48 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Can I still get a partner aunty\n"
	.string "Cherry?$"

PlayersHouse_1F_EventScript_Rival_Text_1:
# 49 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "CHERRY: Suit yourself$"

PlayersHouse_1F_EventScript_Rival_Text_2:
# 72 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Well I'll be...\n"
	.string "...\p"
	.string "Begginer's luck! I'll see you soon$"

PlayersHouse_1F_EventScript_Rival_Text_3:
# 81 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "CHERRY: An outstanding job, for a first\n"
	.string "battle. I hope you take good care of\l"
	.string "Percy on your journey$"

PlayerHouse1F_Rival_BudbittChosen_Text_0:
# 90 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Hey {PLAYER}! So you've\n"
	.string "chosen Budbitt...\l"
	.string "Then I'll get this little guy! Let's\l"
	.string "tests our skills!$"

PlayerHouse1F_Rival_GliscaleChosen_Text_0:
# 97 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Hey {PLAYER}! So you've\n"
	.string "chosen Gliscale...\l"
	.string "Then I'll get this little guy! Let's\l"
	.string "tests our skills!$"

PlayerHouse1F_Rival_WaterChosen_Text_0:
# 104 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Hey {PLAYER}! So you've\n"
	.string "chosen Water...\l"
	.string "Then I'll get this little guy! Let's\l"
	.string "tests our skills!$"
