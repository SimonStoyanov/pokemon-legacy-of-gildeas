Route001_MapScripts::
	.byte 0


Route001_EventScript_Ivan::
# 4 "data/maps/Route001/scripts.pory"
	trainerbattle_single TRAINER_001_IVAN, Route001_Text_IvanIntro, Route001_Text_IvanDefeated
# 5 "data/maps/Route001/scripts.pory"
	msgbox Route001_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	return

