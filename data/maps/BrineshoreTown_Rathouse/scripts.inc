BrineshoreTown_Rathouse_MapScripts::
	.byte 0


StrangeBooks::
# 6 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	lock
# 8 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	msgbox StrangeBooks_Text_0, MSGBOX_AUTOCLOSE
# 10 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	release
	return


LowStockFridge::
# 14 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	lock
# 16 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	goto_if_set FLAG_STOLE_LEFTOVERS, LowStockFridge_2
# 20 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	msgbox FridgeLeftovers, MSGBOX_YESNO
# 21 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LowStockFridge_5
LowStockFridge_1:
# 28 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	release
	return

LowStockFridge_2:
# 17 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	msgbox LowStockFridge_Text_0, MSGBOX_AUTOCLOSE
	goto LowStockFridge_1

LowStockFridge_5:
# 22 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 24 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	setflag FLAG_STOLE_LEFTOVERS
	goto LowStockFridge_1


BasementProblems::
# 32 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	lock
# 34 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	goto_if_unset FLAG_RAT_BASEMENT_QUEST, BasementProblems_2
# 38 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	msgbox BasementProblems_Text_0, MSGBOX_NPC
BasementProblems_1:
# 41 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	release
	return

BasementProblems_2:
# 35 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	msgbox PokemonInBasement, MSGBOX_NPC
	goto BasementProblems_1


BackedUpSink::
# 51 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	lock
# 52 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	msgbox BackedUpSink_Text_0, MSGBOX_AUTOCLOSE
# 53 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	release
	return


OldTV::
# 57 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	lock
# 58 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	msgbox OldTV_Text_0
# 59 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	release
	return


StrangeBooks_Text_0:
# 8 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	.string "These books have strange titles:\n{COLOR RED}Picatrix, Goetia, Grand Grimoire...$"

LowStockFridge_Text_0:
# 17 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	.string "There is no food left.$"

BasementProblems_Text_0:
# 38 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	.string "Thank you so much, {PLAYER}!$"

BackedUpSink_Text_0:
# 52 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	.string "A foul smell emanates from the\nclogged sink.$"

OldTV_Text_0:
# 58 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	.string "This old TV has not worked in a\nlong time.$"

PokemonInBasement::
# 44 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	.string "Something big broke into our basement.\n"
	.string "I know you have a Pokemon now.\l"
	.string "Please help me get rid of it.$"

FridgeLeftovers::
# 62 "data/maps/BrineshoreTown_Rathouse/scripts.pory"
	.string "The family's fridge is nearly empty.\n"
	.string "Take the {COLOR BLUE} Leftovers {COLOR DARK_GRAY}?$"
