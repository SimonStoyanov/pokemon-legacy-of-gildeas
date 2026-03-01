ArchevaleTown_Mart_MapScripts::
	.byte 0


ArchevaleTown_Mart_Clerk::
# 4 "data/maps/ArchevaleTown_Mart/scripts.pory"
	lock
# 5 "data/maps/ArchevaleTown_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/ArchevaleTown_Mart/scripts.pory"
	msgbox gText_HowMayIServeYou
# 7 "data/maps/ArchevaleTown_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/ArchevaleTown_Mart/scripts.pory"
	pokemart ArchevaleTown_Mart_Items
# 9 "data/maps/ArchevaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 10 "data/maps/ArchevaleTown_Mart/scripts.pory"
	release
	return


	.align 2
# 13 "data/maps/ArchevaleTown_Mart/scripts.pory"
ArchevaleTown_Mart_Items:
# 14 "data/maps/ArchevaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 15 "data/maps/ArchevaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 16 "data/maps/ArchevaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 17 "data/maps/ArchevaleTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 18 "data/maps/ArchevaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 19 "data/maps/ArchevaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 20 "data/maps/ArchevaleTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 21 "data/maps/ArchevaleTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 22 "data/maps/ArchevaleTown_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 23 "data/maps/ArchevaleTown_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 24 "data/maps/ArchevaleTown_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 25 "data/maps/ArchevaleTown_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_NONE
