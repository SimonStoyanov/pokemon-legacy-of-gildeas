Route001_NorthEntrance_MapScripts::
	.byte 0


Route001_NEntrance_PoliceMan::
# 4 "data/maps/Route001_NorthEntrance/scripts.pory"
	lock
# 5 "data/maps/Route001_NorthEntrance/scripts.pory"
	msgbox Route001_NEntrance_PoliceMan_Text_0
# 6 "data/maps/Route001_NorthEntrance/scripts.pory"
	startquest QUEST_2_GYMBADGES
# 7 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 0
# 8 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 1
# 9 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 2
# 10 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 3
# 11 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 4
# 12 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 5
# 13 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 6
# 14 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 7
# 15 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 8
# 16 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 9
# 17 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 10
# 18 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 11
# 19 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 12
# 20 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 13
# 21 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 14
# 22 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 15
# 23 "data/maps/Route001_NorthEntrance/scripts.pory"
	completesubquest QUEST_2_GYMBADGES, 16
# 24 "data/maps/Route001_NorthEntrance/scripts.pory"
	release
	return


Route001_NEntrance_EventScript_Nurse::
# 28 "data/maps/Route001_NorthEntrance/scripts.pory"
	lock
# 29 "data/maps/Route001_NorthEntrance/scripts.pory"
	setvar VAR_0x8004, 0
# 30 "data/maps/Route001_NorthEntrance/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmnOut, MSGBOX_YESNO
# 31 "data/maps/Route001_NorthEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route001_NEntrance_EventScript_Nurse_2
# 38 "data/maps/Route001_NorthEntrance/scripts.pory"
	call EventScript_PkmnCenterNurse_Goodbye
Route001_NEntrance_EventScript_Nurse_1:
# 40 "data/maps/Route001_NorthEntrance/scripts.pory"
	release
	return

Route001_NEntrance_EventScript_Nurse_2:
# 32 "data/maps/Route001_NorthEntrance/scripts.pory"
	msgbox gText_IllTakeYourPkmn
# 33 "data/maps/Route001_NorthEntrance/scripts.pory"
	waitmessage
# 34 "data/maps/Route001_NorthEntrance/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 35 "data/maps/Route001_NorthEntrance/scripts.pory"
	msgbox Route001_NEntrance_EventScript_Nurse_Text_0
	goto Route001_NEntrance_EventScript_Nurse_1


Route001_NEntrance_PoliceMan_Text_0:
# 5 "data/maps/Route001_NorthEntrance/scripts.pory"
	.string "Be aware of combrisks if you are going\n"
	.string "to Skalista City$"

Route001_NEntrance_EventScript_Nurse_Text_0:
# 35 "data/maps/Route001_NorthEntrance/scripts.pory"
	.string "Take care!$"
