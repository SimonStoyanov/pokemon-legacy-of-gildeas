Route001_MapScripts::
	.byte 0


Route001_EventScript_Ivan::
# 4 "data/maps/Route001/scripts.pory"
	trainerbattle_single TRAINER_001_IVAN, Route001_Text_IvanIntro, Route001_Text_IvanDefeated
# 5 "data/maps/Route001/scripts.pory"
	msgbox Route001_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	return


Route001_EventScript_Alen::
# 9 "data/maps/Route001/scripts.pory"
	trainerbattle_single TRAINER_001_ALEN, Route001_Text_AlenIntro, Route001_Text_AlenDefeated
# 10 "data/maps/Route001/scripts.pory"
	msgbox Route001_Text_AlenPostBattle, MSGBOX_AUTOCLOSE
	return


Route001_EventScript_Brigita::
# 14 "data/maps/Route001/scripts.pory"
	trainerbattle_single TRAINER_001_BRIGITA, Route001_Text_BrigitaIntro, Route001_Text_BrigitaDefeated
# 15 "data/maps/Route001/scripts.pory"
	msgbox Route001_Text_BrigitaPostBattle, MSGBOX_AUTOCLOSE
	return


Route001_EventScript_Tatiana::
# 19 "data/maps/Route001/scripts.pory"
	trainerbattle_single TRAINER_001_TATIANA, Route001_Text_TatianaIntro, Route001_Text_TatianaDefeated
# 20 "data/maps/Route001/scripts.pory"
	msgbox Route001_Text_TatianaPostBattle, MSGBOX_AUTOCLOSE
	return


Route001_Sign::
# 24 "data/maps/Route001/scripts.pory"
	lock
# 25 "data/maps/Route001/scripts.pory"
	msgbox Route001_Sign_Text_0
# 26 "data/maps/Route001/scripts.pory"
	release
	return


Route001_Sign_Text_0:
# 25 "data/maps/Route001/scripts.pory"
	.string "To Archevale Town$"
