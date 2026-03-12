Route001_NorthEntrance_MapScripts::
	.byte 0


Route001_NEntrance_PoliceMan::
# 4 "data/maps/Route001_NorthEntrance/scripts.pory"
	lock
# 5 "data/maps/Route001_NorthEntrance/scripts.pory"
	msgbox Route001_NEntrance_PoliceMan_Text_0
# 6 "data/maps/Route001_NorthEntrance/scripts.pory"
	release
	return


Route001_NEntrance_EventScript_Nurse::
# 10 "data/maps/Route001_NorthEntrance/scripts.pory"
	lock
# 11 "data/maps/Route001_NorthEntrance/scripts.pory"
	setvar VAR_0x8004, 0
# 12 "data/maps/Route001_NorthEntrance/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmnOut, MSGBOX_YESNO
# 13 "data/maps/Route001_NorthEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route001_NEntrance_EventScript_Nurse_2
# 20 "data/maps/Route001_NorthEntrance/scripts.pory"
	call EventScript_PkmnCenterNurse_Goodbye
Route001_NEntrance_EventScript_Nurse_1:
# 22 "data/maps/Route001_NorthEntrance/scripts.pory"
	release
	return

Route001_NEntrance_EventScript_Nurse_2:
# 14 "data/maps/Route001_NorthEntrance/scripts.pory"
	msgbox gText_IllTakeYourPkmn
# 15 "data/maps/Route001_NorthEntrance/scripts.pory"
	waitmessage
# 16 "data/maps/Route001_NorthEntrance/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 17 "data/maps/Route001_NorthEntrance/scripts.pory"
	msgbox Route001_NEntrance_EventScript_Nurse_Text_0
	goto Route001_NEntrance_EventScript_Nurse_1


Route001_NEntrance_PoliceMan_Text_0:
# 5 "data/maps/Route001_NorthEntrance/scripts.pory"
	.string "Be aware of combrisks if you are going\n"
	.string "to Skalista City$"

Route001_NEntrance_EventScript_Nurse_Text_0:
# 17 "data/maps/Route001_NorthEntrance/scripts.pory"
	.string "Take care!$"
