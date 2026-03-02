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
	msgbox PlayersHouse_1F_EventScript_Cherry_Text_0
# 190 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_CHERRY, PlayersHouse_1F_EventScript_Cherry_Movement_0
# 191 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_CHERRY
# 192 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	release
	return


ArchevaleTown_AfterStarterChoice::
# 196 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lock
# 197 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setvar VAR_ARCHEVALE_HOUSE_STATE, 3
# 198 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	clearflag FLAG_HIDE_LAB_PERCY
# 200 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 201 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PLAYER, ArchevaleTown_AfterStarterChoice_Movement_0
# 202 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox ArchevaleTown_AfterStarterChoice_Text_0
# 204 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call PlayersHouse_1F_EventScript_Rival
# 206 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	release
	return


PlayersHouse_1F_EventScript_Rival::
# 210 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	lock
# 212 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	addobject LOCALID_PERCY_LAB, MAP_ARCHEVALE_TOWN_CHERRY_LAB
# 214 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, PlayersHouse_1F_EventScript_Rival_Movement_0
# 217 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 219 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_0
# 220 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	delay 60
# 221 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_1
# 223 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	switch VAR_STARTER_MON
# 224 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 0, PlayersHouse_1F_EventScript_Rival_3
# 225 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 1, PlayersHouse_1F_EventScript_Rival_4
# 226 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	case 2, PlayersHouse_1F_EventScript_Rival_5
PlayersHouse_1F_EventScript_Rival_1:
# 229 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_2
# 231 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, PlayersHouse_1F_EventScript_Rival_Movement_1
# 234 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 236 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	setflag FLAG_HIDE_LAB_PERCY
# 237 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_PERCY_LAB, MAP_ARCHEVALE_TOWN_CHERRY_LAB
# 239 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Rival_Text_3
# 241 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	releaseall
	return

PlayersHouse_1F_EventScript_Rival_3:
# 224 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call PlayerHouse1F_Rival_BudbittChosen
	goto PlayersHouse_1F_EventScript_Rival_1

PlayersHouse_1F_EventScript_Rival_4:
# 225 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call PlayerHouse1F_Rival_GliscaleChosen
	goto PlayersHouse_1F_EventScript_Rival_1

PlayersHouse_1F_EventScript_Rival_5:
# 226 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	call PlayerHouse1F_Rival_BuccanubChosen
	goto PlayersHouse_1F_EventScript_Rival_1


PlayerHouse1F_Rival_BudbittChosen::
# 245 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, ArchevaleTown_CherryLab_MoveUp_Movement_0
# 248 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 249 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	delay 60
# 250 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_GLISCALE
# 251 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, PlayerHouse1F_Rival_BudbittChosen_Movement_0
# 254 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 255 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayerHouse1F_Rival_BudbittChosen_Text_0
# 258 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	trainerbattle_no_intro TRAINER_PERCY_FIRST_BATTLE_BUDBITT, Route103_Text_MayDefeated
	return


PlayerHouse1F_Rival_GliscaleChosen::
# 262 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, PlayerHouse1F_Rival_GliscaleChosen_Movement_0
# 266 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 267 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	delay 60
# 268 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_BUCCANUB
# 269 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, PlayerHouse1F_Rival_BudbittChosen_Movement_0
# 272 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 273 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayerHouse1F_Rival_GliscaleChosen_Text_0
# 276 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	trainerbattle_no_intro TRAINER_PERCY_FIRST_BATTLE_GLISCALE, Route103_Text_MayDefeated
	return


PlayerHouse1F_Rival_BuccanubChosen::
# 280 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, PlayerHouse1F_Rival_BuccanubChosen_Movement_0
# 284 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 285 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	delay 60
# 286 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	removeobject LOCALID_BUDBITT
# 287 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	applymovement LOCALID_PERCY_LAB, PlayerHouse1F_Rival_BuccanubChosen_Movement_1
# 290 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	waitmovement LOCALID_PERCY_LAB
# 291 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	msgbox PlayerHouse1F_Rival_BuccanubChosen_Text_0
# 294 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	trainerbattle_no_intro TRAINER_PERCY_FIRST_BATTLE_BUCCANUB, Route103_Text_MayDefeated
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

# 190 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Cherry_Movement_0:
# 190 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	face_original_direction
	step_end

# 201 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
ArchevaleTown_AfterStarterChoice_Movement_0:
# 201 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	face_down
	step_end

# 214 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_0:
# 215 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 215 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 215 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 215 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 215 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 215 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 215 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
# 215 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_up
	step_end

# 231 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayersHouse_1F_EventScript_Rival_Movement_1:
# 232 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 232 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 232 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 232 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 232 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 232 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
# 232 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_fast_down
	step_end

# 251 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayerHouse1F_Rival_BudbittChosen_Movement_0:
# 252 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	face_left
	step_end

# 262 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayerHouse1F_Rival_GliscaleChosen_Movement_0:
# 263 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_right
# 264 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
	step_end

# 280 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayerHouse1F_Rival_BuccanubChosen_Movement_0:
# 281 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_left
# 282 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	walk_up
	step_end

# 287 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
PlayerHouse1F_Rival_BuccanubChosen_Movement_1:
# 288 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
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
	.string "CHERRY: Aren't you forgetting\n"
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
# 189 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "CHERRY: A tough decision indeed\n"
	.string "{PLAYER}, but rest assured, these are\l"
	.string "great partners!$"

ArchevaleTown_AfterStarterChoice_Text_0:
# 202 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "???: I'm late!$"

PlayersHouse_1F_EventScript_Rival_Text_0:
# 219 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Can I still get a partner aunty\n"
	.string "Cherry?$"

PlayersHouse_1F_EventScript_Rival_Text_1:
# 221 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "CHERRY: Suit yourself$"

PlayersHouse_1F_EventScript_Rival_Text_2:
# 229 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Well I'll be...\n"
	.string "...\p"
	.string "Begginer's luck! I'll see you soon$"

PlayersHouse_1F_EventScript_Rival_Text_3:
# 239 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "CHERRY: An outstanding job, for a first\n"
	.string "battle. I hope you take good care of\l"
	.string "Percy on your journey$"

PlayerHouse1F_Rival_BudbittChosen_Text_0:
# 255 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Hey {PLAYER}! So you've\n"
	.string "chosen Budbitt...\l"
	.string "Let's tests our skills!$"

PlayerHouse1F_Rival_GliscaleChosen_Text_0:
# 273 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Hey {PLAYER}! So you've\n"
	.string "chosen Gliscale...\l"
	.string "Let's tests our skills!$"

PlayerHouse1F_Rival_BuccanubChosen_Text_0:
# 291 "data/maps/ArchevaleTown_CherryLab/scripts.pory"
	.string "PERCY: Hey {PLAYER}! So you've\n"
	.string "chosen Water...\l"
	.string "Let's tests our skills!$"
