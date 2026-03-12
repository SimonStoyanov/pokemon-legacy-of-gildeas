ArchevaleTown_CherryLab_MapScripts::
	.byte 0


ArchevaleTown_CherryLab_MoveTowardsCherry_0::
# 4 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_0x8008, 0
# 5 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call ArchevaleTown_CherryLab_Intro
	return


ArchevaleTown_CherryLab_MoveTowardsCherry_1::
# 8 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_0x8008, 1
# 9 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call ArchevaleTown_CherryLab_Intro
	return


ArchevaleTown_CherryLab_MoveTowardsCherry_2::
# 12 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_0x8008, 2
# 13 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call ArchevaleTown_CherryLab_Intro
	return


ArchevaleTown_CherryLab_MoveTowardsCherry_3::
# 16 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_0x8008, 3
# 17 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call ArchevaleTown_CherryLab_Intro
	return


ArchevaleTown_CherryLab_MoveTowardsCherry_4::
# 20 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_0x8008, 4
# 21 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call ArchevaleTown_CherryLab_Intro
	return


ArchevaleTown_CherryLab_Intro::
# 25 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lock
# 26 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	switch VAR_0x8008
# 28 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 0, ArchevaleTown_CherryLab_Intro_3
# 35 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 1, ArchevaleTown_CherryLab_Intro_4
# 41 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 2, ArchevaleTown_CherryLab_Intro_5
# 46 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 3, ArchevaleTown_CherryLab_Intro_6
# 52 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 4, ArchevaleTown_CherryLab_Intro_7
ArchevaleTown_CherryLab_Intro_1:
# 60 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 61 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_ARCHEVALE_LAB_STATE, 1
# 62 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_Intro_Text_0
# 66 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_CHERRY, ArchevaleTown_CherryLab_Intro_Movement_5
# 71 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_CHERRY
# 72 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	releaseall
	return

ArchevaleTown_CherryLab_Intro_3:
# 29 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_CherryLab_Intro_Movement_0
	goto ArchevaleTown_CherryLab_Intro_1

ArchevaleTown_CherryLab_Intro_4:
# 36 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_CherryLab_Intro_Movement_1
	goto ArchevaleTown_CherryLab_Intro_1

ArchevaleTown_CherryLab_Intro_5:
# 42 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_CherryLab_Intro_Movement_2
	goto ArchevaleTown_CherryLab_Intro_1

ArchevaleTown_CherryLab_Intro_6:
# 47 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_CherryLab_Intro_Movement_3
	goto ArchevaleTown_CherryLab_Intro_1

ArchevaleTown_CherryLab_Intro_7:
# 53 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_CherryLab_Intro_Movement_4
	goto ArchevaleTown_CherryLab_Intro_1


ArchevaleTown_CherryLab_MoveUp::
# 76 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lock
# 77 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_MoveUp_Text_0
# 78 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_CherryLab_MoveUp_Movement_0
# 81 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 82 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	release
	return


ArchevaleTown_CherryLab_PokeballBudbitt::
# 86 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lockall
# 87 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	goto_if_unset FLAG_STARTER_BUDBITT, ArchevaleTown_CherryLab_PokeballBudbitt_4
ArchevaleTown_CherryLab_PokeballBudbitt_3:
# 91 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_PokeballBudbitt_Text_0
ArchevaleTown_CherryLab_PokeballBudbitt_1:
# 93 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmessage
# 94 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	releaseall
	end

ArchevaleTown_CherryLab_PokeballBudbitt_2:
# 88 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call ArchevaleTown_CherryLab_Budbitt
	goto ArchevaleTown_CherryLab_PokeballBudbitt_1

ArchevaleTown_CherryLab_PokeballBudbitt_4:
# 87 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	goto_if_unset FLAG_STARTER_GLISCALE, ArchevaleTown_CherryLab_PokeballBudbitt_6
	goto ArchevaleTown_CherryLab_PokeballBudbitt_3

ArchevaleTown_CherryLab_PokeballBudbitt_6:
# 87 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	goto_if_unset FLAG_STARTER_BUCCANUB, ArchevaleTown_CherryLab_PokeballBudbitt_2
	goto ArchevaleTown_CherryLab_PokeballBudbitt_3


ArchevaleTown_CherryLab_PokeballGliscale::
# 98 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lockall
# 99 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	goto_if_unset FLAG_STARTER_BUDBITT, ArchevaleTown_CherryLab_PokeballGliscale_4
ArchevaleTown_CherryLab_PokeballGliscale_3:
# 103 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_PokeballBudbitt_Text_0
ArchevaleTown_CherryLab_PokeballGliscale_1:
# 105 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmessage
# 106 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	releaseall
	end

ArchevaleTown_CherryLab_PokeballGliscale_2:
# 100 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call ArchevaleTown_CherryLab_Gliscale
	goto ArchevaleTown_CherryLab_PokeballGliscale_1

ArchevaleTown_CherryLab_PokeballGliscale_4:
# 99 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	goto_if_unset FLAG_STARTER_GLISCALE, ArchevaleTown_CherryLab_PokeballGliscale_6
	goto ArchevaleTown_CherryLab_PokeballGliscale_3

ArchevaleTown_CherryLab_PokeballGliscale_6:
# 99 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	goto_if_unset FLAG_STARTER_BUCCANUB, ArchevaleTown_CherryLab_PokeballGliscale_2
	goto ArchevaleTown_CherryLab_PokeballGliscale_3


ArchevaleTown_CherryLab_PokeballBuccanub::
# 110 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lockall
# 111 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	goto_if_unset FLAG_STARTER_BUDBITT, ArchevaleTown_CherryLab_PokeballBuccanub_4
ArchevaleTown_CherryLab_PokeballBuccanub_3:
# 115 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_PokeballBudbitt_Text_0
ArchevaleTown_CherryLab_PokeballBuccanub_1:
# 117 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmessage
# 118 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	releaseall
	end

ArchevaleTown_CherryLab_PokeballBuccanub_2:
# 112 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call ArchevaleTown_CherryLab_Buccanub
	goto ArchevaleTown_CherryLab_PokeballBuccanub_1

ArchevaleTown_CherryLab_PokeballBuccanub_4:
# 111 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	goto_if_unset FLAG_STARTER_GLISCALE, ArchevaleTown_CherryLab_PokeballBuccanub_6
	goto ArchevaleTown_CherryLab_PokeballBuccanub_3

ArchevaleTown_CherryLab_PokeballBuccanub_6:
# 111 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	goto_if_unset FLAG_STARTER_BUCCANUB, ArchevaleTown_CherryLab_PokeballBuccanub_2
	goto ArchevaleTown_CherryLab_PokeballBuccanub_3


ArchevaleTown_CherryLab_Budbitt::
# 123 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	showmonpic SPECIES_BUDBITT, 10, 3
# 124 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	playmoncry SPECIES_BUDBITT, CRY_MODE_NORMAL
# 125 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_Budbitt_Text_0, MSGBOX_YESNO
# 126 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ArchevaleTown_CherryLab_Budbitt_1
# 139 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	hidemonpic
# 140 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_Budbitt_Text_2
	return

ArchevaleTown_CherryLab_Budbitt_1:
# 127 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	givemon SPECIES_BUDBITT, 5
# 128 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 129 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 130 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_Budbitt_Text_1
# 131 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_BUDBITT
# 132 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_STARTER_BUDBITT
# 133 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 134 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 135 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_ARCHEVALE_LAB_STATE, 2
# 136 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call ArchevaleTown_AfterStarterChoice
	return


ArchevaleTown_CherryLab_Gliscale::
# 144 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	showmonpic SPECIES_GLISCALE, 10, 3
# 145 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	playmoncry SPECIES_GLISCALE, CRY_MODE_NORMAL
# 146 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_Gliscale_Text_0, MSGBOX_YESNO
# 147 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ArchevaleTown_CherryLab_Gliscale_1
# 160 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	hidemonpic
# 161 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_Budbitt_Text_2
	return

ArchevaleTown_CherryLab_Gliscale_1:
# 148 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	givemon SPECIES_GLISCALE, 5
# 149 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 150 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 151 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_Gliscale_Text_1
# 152 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_GLISCALE
# 153 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_STARTER_GLISCALE
# 154 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 155 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 156 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_ARCHEVALE_LAB_STATE, 2
# 157 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call ArchevaleTown_AfterStarterChoice
	return


ArchevaleTown_CherryLab_Buccanub::
# 165 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	showmonpic SPECIES_BUCCANUB, 10, 3
# 166 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	playmoncry SPECIES_BUCCANUB, CRY_MODE_NORMAL
# 167 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_Buccanub_Text_0, MSGBOX_YESNO
# 168 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ArchevaleTown_CherryLab_Buccanub_1
# 181 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	hidemonpic
# 182 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_Budbitt_Text_2
	return

ArchevaleTown_CherryLab_Buccanub_1:
# 169 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	givemon SPECIES_BUCCANUB, 5
# 170 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 171 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 172 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_CherryLab_Buccanub_Text_1
# 173 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_BUCCANUB
# 174 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_STARTER_BUCCANUB
# 175 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 176 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 177 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_ARCHEVALE_LAB_STATE, 2
# 178 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call ArchevaleTown_AfterStarterChoice
	return


PlayersHouse_1F_EventScript_Cherry::
# 187 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lock
# 188 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	faceplayer
# 189 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	switch VAR_ARCHEVALE_LAB_STATE
# 190 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 1, PlayersHouse_1F_EventScript_Cherry_3
# 191 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Cherry_Text_1
PlayersHouse_1F_EventScript_Cherry_1:
# 193 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_CHERRY, PlayersHouse_1F_EventScript_Cherry_Movement_0
# 194 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_CHERRY
# 195 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	release
	return

PlayersHouse_1F_EventScript_Cherry_3:
# 190 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Cherry_Text_0
	goto PlayersHouse_1F_EventScript_Cherry_1


ArchevaleTown_AfterStarterChoice::
# 199 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lock
# 200 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_ARCHEVALE_HOUSE_STATE, 3
# 201 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	clearflag FLAG_HIDE_LAB_PERCY
# 203 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 204 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_AfterStarterChoice_Movement_0
# 205 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_AfterStarterChoice_Text_0
# 207 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_PERCY_RECORD_L, 0
# 208 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_PERCY_RECORD_W, 0
# 209 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call PlayersHouse_1F_EventScript_Rival
# 211 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	release
	return


PlayersHouse_1F_EventScript_Rival::
# 215 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lock
# 217 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	addobject LOCALID_PERCY_LAB, MAP_ARCHEVALE_TOWN_CHERRY_LAB
# 219 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, PlayersHouse_1F_EventScript_Rival_Movement_0
# 222 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 224 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_0
# 225 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	delay 60
# 226 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_1
# 228 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	switch VAR_STARTER_MON
# 229 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 0, PlayersHouse_1F_EventScript_Rival_3
# 230 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 1, PlayersHouse_1F_EventScript_Rival_4
# 231 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 2, PlayersHouse_1F_EventScript_Rival_5
PlayersHouse_1F_EventScript_Rival_1:
# 234 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call Lab_Rival_PostBattle
# 236 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, PlayersHouse_1F_EventScript_Rival_Movement_1
# 239 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 240 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_HIDE_LAB_PERCY
# 241 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_PERCY_LAB, MAP_ARCHEVALE_TOWN_CHERRY_LAB
# 242 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	closemessage
# 244 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	switch VAR_STARTER_MON
# 245 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 0, PlayersHouse_1F_EventScript_Rival_8
# 249 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 1, PlayersHouse_1F_EventScript_Rival_9
# 253 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 2, PlayersHouse_1F_EventScript_Rival_10
PlayersHouse_1F_EventScript_Rival_6:
# 258 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_CHERRY
# 259 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_EventScript_Rival_Movement_5
# 260 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 262 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	compare VAR_PERCY_RECORD_L, VAR_PERCY_RECORD_W
	goto_if_gt PlayersHouse_1F_EventScript_Rival_12
# 265 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	compare VAR_PERCY_RECORD_W, VAR_PERCY_RECORD_L
	goto_if_gt PlayersHouse_1F_EventScript_Rival_13
PlayersHouse_1F_EventScript_Rival_11:
# 269 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 271 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_2
# 272 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 273 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_3
# 274 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitfanfare
# 275 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 276 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 277 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_CHERRY
# 278 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 280 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_4
# 283 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	completequest QUEST_1_STARTERS
# 284 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_2_GYM_1
# 285 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitfanfare
# 286 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	openquestmenu
# 288 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_ARCHEVALE_HOUSE_STATE, 3
# 289 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_ARCHEVALE_LAB_STATE, 3
# 290 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 292 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	releaseall
	return

PlayersHouse_1F_EventScript_Rival_3:
# 229 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call CherryLab_Percy_Rival_BudbittChosen
	goto PlayersHouse_1F_EventScript_Rival_1

PlayersHouse_1F_EventScript_Rival_4:
# 230 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call CherryLab_Percy_Rival_GliscaleChosen
	goto PlayersHouse_1F_EventScript_Rival_1

PlayersHouse_1F_EventScript_Rival_5:
# 231 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call CherryLab_Percy_Rival_BuccanubChosen
	goto PlayersHouse_1F_EventScript_Rival_1

PlayersHouse_1F_EventScript_Rival_8:
# 245 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_CHERRY, PlayersHouse_1F_EventScript_Rival_Movement_2
	goto PlayersHouse_1F_EventScript_Rival_6

PlayersHouse_1F_EventScript_Rival_9:
# 249 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_CHERRY, PlayersHouse_1F_EventScript_Rival_Movement_3
	goto PlayersHouse_1F_EventScript_Rival_6

PlayersHouse_1F_EventScript_Rival_10:
# 253 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_CHERRY, PlayersHouse_1F_EventScript_Rival_Movement_4
	goto PlayersHouse_1F_EventScript_Rival_6

PlayersHouse_1F_EventScript_Rival_12:
# 263 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call CherryLab_RivalWon
	goto PlayersHouse_1F_EventScript_Rival_11

PlayersHouse_1F_EventScript_Rival_13:
# 266 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call CherryLab_RivalLost
	goto PlayersHouse_1F_EventScript_Rival_11


CherryLab_RivalLost::
# 296 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox CherryLab_RivalLost_Text_0
	return


CherryLab_RivalWon::
# 302 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox CherryLab_RivalWon_Text_0
	return


CherryLab_Percy_Rival_BudbittChosen::
# 308 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, ArchevaleTown_CherryLab_MoveUp_Movement_0
# 311 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 312 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	delay 60
# 313 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_GLISCALE
# 314 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, CherryLab_Percy_Rival_BudbittChosen_Movement_0
# 317 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 318 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_EventScript_Rival_Movement_5
# 319 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 320 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox CherryLab_Percy_Rival_BudbittChosen_Text_0
# 323 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 324 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_PERCY_FIRST_BATTLE_BUDBITT, Route103_Text_MayDefeated, Lab_Text_PercyWins, Lab_Rival_PostBattle
	return


CherryLab_Percy_Rival_GliscaleChosen::
# 328 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, CherryLab_Percy_Rival_GliscaleChosen_Movement_0
# 332 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 333 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	delay 60
# 334 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_BUCCANUB
# 335 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, CherryLab_Percy_Rival_BudbittChosen_Movement_0
# 338 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 339 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_EventScript_Rival_Movement_5
# 340 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 341 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox CherryLab_Percy_Rival_GliscaleChosen_Text_0
# 344 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 345 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_PERCY_FIRST_BATTLE_GLISCALE, Route103_Text_MayDefeated, Lab_Text_PercyWins, Lab_Rival_PostBattle
	return


CherryLab_Percy_Rival_BuccanubChosen::
# 349 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, CherryLab_Percy_Rival_BuccanubChosen_Movement_0
# 353 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 354 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	delay 60
# 355 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_BUDBITT
# 356 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, CherryLab_Percy_Rival_BuccanubChosen_Movement_1
# 359 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 360 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, CherryLab_Percy_Rival_BudbittChosen_Movement_0
# 361 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 362 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox CherryLab_Percy_Rival_BuccanubChosen_Text_0
# 365 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 366 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_PERCY_FIRST_BATTLE_BUCCANUB, Route103_Text_MayDefeated, Lab_Text_PercyWins, Lab_Rival_PostBattle
	return


Lab_Rival_PostBattle::
# 370 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 371 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Lab_Rival_PostBattle_1
# 376 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox Lab_Rival_PostBattle_Text_1
# 377 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	special UpdatePercyLose
	return

Lab_Rival_PostBattle_1:
# 372 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox Lab_Rival_PostBattle_Text_0
# 373 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	special UpdatePercyWin
	return


# 29 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
ArchevaleTown_CherryLab_Intro_Movement_0:
# 30 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 30 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 31 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_right
# 31 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_right
# 32 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 32 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 32 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 32 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 32 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
	step_end

# 36 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
ArchevaleTown_CherryLab_Intro_Movement_1:
# 37 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_right
# 38 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 38 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 38 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 38 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 38 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 38 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
	step_end

# 42 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
ArchevaleTown_CherryLab_Intro_Movement_2:
# 43 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 43 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 43 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 43 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 43 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 43 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
	step_end

# 47 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
ArchevaleTown_CherryLab_Intro_Movement_3:
# 48 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_left
# 49 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 49 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 49 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 49 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 49 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 49 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
	step_end

# 53 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
ArchevaleTown_CherryLab_Intro_Movement_4:
# 54 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 54 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 55 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_left
# 55 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_left
# 56 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 56 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 56 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 56 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 56 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
	step_end

# 66 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
ArchevaleTown_CherryLab_Intro_Movement_5:
# 67 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_right
# 67 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_right
# 68 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 68 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
# 69 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	face_down
	step_end

# 78 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
ArchevaleTown_CherryLab_MoveUp_Movement_0:
# 79 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
	step_end

# 193 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Cherry_Movement_0:
# 193 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	face_original_direction
	step_end

# 204 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
ArchevaleTown_AfterStarterChoice_Movement_0:
# 204 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	face_down
	step_end

# 219 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_0:
# 220 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 220 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 220 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 220 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 220 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 220 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 220 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 220 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
	step_end

# 236 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_1:
# 237 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 237 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 237 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 237 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 237 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 237 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 237 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
	step_end

# 245 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_2:
# 246 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_down
# 247 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_left
# 247 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_left
	step_end

# 249 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_3:
# 250 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_down
# 251 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_left
	step_end

# 253 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_4:
# 254 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_down
# 255 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	face_left
	step_end

# 259 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_5:
# 259 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	face_right
	step_end

# 314 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
CherryLab_Percy_Rival_BudbittChosen_Movement_0:
# 315 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	face_left
	step_end

# 328 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
CherryLab_Percy_Rival_GliscaleChosen_Movement_0:
# 329 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_right
# 330 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
	step_end

# 349 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
CherryLab_Percy_Rival_BuccanubChosen_Movement_0:
# 350 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_left
# 351 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
	step_end

# 356 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
CherryLab_Percy_Rival_BuccanubChosen_Movement_1:
# 357 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_right
	step_end

ArchevaleTown_CherryLab_Intro_Text_0:
# 62 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PROF. CHERRY: Hi {PLAYER}, today\n"
	.string "marks the start of your journey\l"
	.string "through Gildeas. That means that you'll\l"
	.string "be able to join the pilgrimage\l"
	.string "side-by-side with a partner\p"
	.string "........\n"
	.string ".......\p"
	.string "Percy should be arriving soon too, but\n"
	.string "it seems he overslept again, so you may\l"
	.string "choose first$"

ArchevaleTown_CherryLab_MoveUp_Text_0:
# 77 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PROF. CHERRY: Aren't you forgetting\n"
	.string "something?$"

ArchevaleTown_CherryLab_PokeballBudbitt_Text_0:
# 91 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "What will happen to the remaining\n"
	.string "Pokémon...?$"

ArchevaleTown_CherryLab_Budbitt_Text_0:
# 125 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "Do you want to choose Budbitt, the\n"
	.string "Grass Hare Pokémon?$"

ArchevaleTown_CherryLab_Budbitt_Text_1:
# 130 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "Recieved Budbitt$"

ArchevaleTown_CherryLab_Budbitt_Text_2:
# 140 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PROF. CHERRY: Take your time$"

ArchevaleTown_CherryLab_Gliscale_Text_0:
# 146 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "Do you want to choose Gliscale, the Fire\n"
	.string "Snake Pokémon?$"

ArchevaleTown_CherryLab_Gliscale_Text_1:
# 151 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "Recieved Gliscale$"

ArchevaleTown_CherryLab_Buccanub_Text_0:
# 167 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "Do you want to choose Buccanub, the\n"
	.string "Cadet Shark Pokémon?$"

ArchevaleTown_CherryLab_Buccanub_Text_1:
# 172 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "Recieved Buccanub$"

PlayersHouse_1F_EventScript_Cherry_Text_0:
# 190 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PROF. CHERRY: A tough decision indeed\n"
	.string "{PLAYER}, but rest assured, these are\l"
	.string "great partners!$"

PlayersHouse_1F_EventScript_Cherry_Text_1:
# 191 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PROF. CHERRY: Catch many Pokémon and\n"
	.string "treat them well! Good luck!$"

ArchevaleTown_AfterStarterChoice_Text_0:
# 205 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "???: I'm late!$"

PlayersHouse_1F_EventScript_Rival_Text_0:
# 224 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Can I still get a partner aunty\n"
	.string "Cherry?$"

PlayersHouse_1F_EventScript_Rival_Text_1:
# 226 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PROF. CHERRY: Suit yourself$"

PlayersHouse_1F_EventScript_Rival_Text_2:
# 271 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PROF. CHERRY: I almost forgot, since\n"
	.string "Percy already has one.$"

PlayersHouse_1F_EventScript_Rival_Text_3:
# 273 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

PlayersHouse_1F_EventScript_Rival_Text_4:
# 280 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PROF. CHERRY: The POKéDEX is a\n"
	.string "high-tech tool that automatically\l"
	.string "makes a record of any Pokémon you meet\l"
	.string "or catch.\p"
	.string "Make sure to check the many species\n"
	.string "living in Gildeas, and be careful with\l"
	.string "the stronger ones!\p"
	.string "Go on {PLAYER}, find glory on the\n"
	.string "golden pilgrimage!$"

CherryLab_RivalLost_Text_0:
# 296 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PROF. CHERRY: An outstanding job, for a\n"
	.string "first battle. I hope you take good care\l"
	.string "of Percy on your journey$"

CherryLab_RivalWon_Text_0:
# 302 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PROF. CHERRY: Winning will not be\n"
	.string "assured, but you will always get\l"
	.string "experience from these loses\p"
	.string "Let me take care of your Pokémon$"

CherryLab_Percy_Rival_BudbittChosen_Text_0:
# 320 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Hey {PLAYER}! So you've\n"
	.string "chosen Budbitt...\l"
	.string "Let's tests our skills!$"

CherryLab_Percy_Rival_GliscaleChosen_Text_0:
# 341 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Hey {PLAYER}! So you've\n"
	.string "chosen Gliscale...\l"
	.string "Let's tests our skills!$"

CherryLab_Percy_Rival_BuccanubChosen_Text_0:
# 362 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Hey {PLAYER}! So you've\n"
	.string "chosen Buccanub...\l"
	.string "Let's tests our skills!$"

Lab_Rival_PostBattle_Text_0:
# 372 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Well I'll be...\n"
	.string "...\p"
	.string "Begginer's luck! I'll see you soon$"

Lab_Rival_PostBattle_Text_1:
# 376 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: What a great start to my\n"
	.string "journey! See you later!$"

Lab_Text_PercyWins::
# 381 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: That's all you've got?$"
