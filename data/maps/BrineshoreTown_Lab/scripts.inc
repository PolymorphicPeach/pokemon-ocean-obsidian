BrineshoreTown_Lab_MapScripts::
# 2 "data/maps/BrineshoreTown_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BrineshoreTown_Lab_OnTransition
	.byte 0


BrineshoreTown_Lab_OnTransition::
# 6 "data/maps/BrineshoreTown_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, BrineshoreTown_Lab_OnTransition_1
# 10 "data/maps/BrineshoreTown_Lab/scripts.pory"
	clearflag FLAG_TEMP_1
	return

BrineshoreTown_Lab_OnTransition_1:
# 7 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_TEMP_1
	return


BrineshoreTown_Lab_EventScript_Pokeball_1::
# 15 "data/maps/BrineshoreTown_Lab/scripts.pory"
	lockall
# 16 "data/maps/BrineshoreTown_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, BrineshoreTown_Lab_EventScript_Pokeball_1_2
# 23 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox CantTakeAnother
# 24 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
BrineshoreTown_Lab_EventScript_Pokeball_1_1:
# 26 "data/maps/BrineshoreTown_Lab/scripts.pory"
	releaseall
	end

BrineshoreTown_Lab_EventScript_Pokeball_1_2:
# 17 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_HONEDGE
# 18 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 19 "data/maps/BrineshoreTown_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HONEDGE
# 20 "data/maps/BrineshoreTown_Lab/scripts.pory"
	call BrineshoreTown_Lab_EventScript_ExamineStarter
	goto BrineshoreTown_Lab_EventScript_Pokeball_1_1


BrineshoreTown_Lab_EventScript_Pokeball_2::
# 31 "data/maps/BrineshoreTown_Lab/scripts.pory"
	lockall
# 32 "data/maps/BrineshoreTown_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, BrineshoreTown_Lab_EventScript_Pokeball_2_2
# 39 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox CantTakeAnother
# 40 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
BrineshoreTown_Lab_EventScript_Pokeball_2_1:
# 42 "data/maps/BrineshoreTown_Lab/scripts.pory"
	releaseall
	end

BrineshoreTown_Lab_EventScript_Pokeball_2_2:
# 33 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TOGEPI
# 34 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar VAR_TEMP_1, 2
# 35 "data/maps/BrineshoreTown_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOGEPI
# 36 "data/maps/BrineshoreTown_Lab/scripts.pory"
	call BrineshoreTown_Lab_EventScript_ExamineStarter
	goto BrineshoreTown_Lab_EventScript_Pokeball_2_1


BrineshoreTown_Lab_EventScript_Pokeball_3::
# 47 "data/maps/BrineshoreTown_Lab/scripts.pory"
	lockall
# 48 "data/maps/BrineshoreTown_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, BrineshoreTown_Lab_EventScript_Pokeball_3_2
# 55 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox CantTakeAnother
# 56 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
BrineshoreTown_Lab_EventScript_Pokeball_3_1:
# 58 "data/maps/BrineshoreTown_Lab/scripts.pory"
	releaseall
	end

BrineshoreTown_Lab_EventScript_Pokeball_3_2:
# 49 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SANDILE
# 50 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar VAR_TEMP_1, 3
# 51 "data/maps/BrineshoreTown_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SANDILE
# 52 "data/maps/BrineshoreTown_Lab/scripts.pory"
	call BrineshoreTown_Lab_EventScript_ExamineStarter
	goto BrineshoreTown_Lab_EventScript_Pokeball_3_1


BrineshoreTown_Lab_EventScript_Computer::
# 63 "data/maps/BrineshoreTown_Lab/scripts.pory"
	lockall
# 64 "data/maps/BrineshoreTown_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, BrineshoreTown_Lab_EventScript_Computer_2
# 71 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox CantTakeAnother
# 72 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
BrineshoreTown_Lab_EventScript_Computer_1:
# 74 "data/maps/BrineshoreTown_Lab/scripts.pory"
	releaseall
	end

BrineshoreTown_Lab_EventScript_Computer_2:
# 65 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_PORYGON
# 66 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar VAR_TEMP_1, 4
# 67 "data/maps/BrineshoreTown_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PORYGON
# 68 "data/maps/BrineshoreTown_Lab/scripts.pory"
	call BrineshoreTown_Lab_EventScript_ExamineStarter
	goto BrineshoreTown_Lab_EventScript_Computer_1


BrineshoreTown_Lab_EventScript_ExamineStarter::
# 79 "data/maps/BrineshoreTown_Lab/scripts.pory"
	showmonpic VAR_TEMP_0, 10, 3
# 80 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox ChooseStarterText, MSGBOX_YESNO
# 82 "data/maps/BrineshoreTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrineshoreTown_Lab_EventScript_ExamineStarter_2
# 112 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox StillLookingText
# 113 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
BrineshoreTown_Lab_EventScript_ExamineStarter_1:
# 115 "data/maps/BrineshoreTown_Lab/scripts.pory"
	hidemonpic
	return

BrineshoreTown_Lab_EventScript_ExamineStarter_2:
# 83 "data/maps/BrineshoreTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 86 "data/maps/BrineshoreTown_Lab/scripts.pory"
	compare VAR_TEMP_0, SPECIES_TOGEPI
	goto_if_eq BrineshoreTown_Lab_EventScript_ExamineStarter_6
# 89 "data/maps/BrineshoreTown_Lab/scripts.pory"
	compare VAR_TEMP_0, SPECIES_HONEDGE
	goto_if_eq BrineshoreTown_Lab_EventScript_ExamineStarter_7
# 92 "data/maps/BrineshoreTown_Lab/scripts.pory"
	compare VAR_TEMP_0, SPECIES_SANDILE
	goto_if_eq BrineshoreTown_Lab_EventScript_ExamineStarter_8
# 95 "data/maps/BrineshoreTown_Lab/scripts.pory"
	compare VAR_TEMP_0, SPECIES_PORYGON
	goto_if_eq BrineshoreTown_Lab_EventScript_ExamineStarter_9
BrineshoreTown_Lab_EventScript_ExamineStarter_5:
# 102 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 103 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar VAR_STARTER_MON, VAR_TEMP_1
# 104 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar BRINESHORETOWN_STATE, 1
# 107 "data/maps/BrineshoreTown_Lab/scripts.pory"
	call BrineshoreTown_Lab_RemoveStarterPokeball
# 108 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox StarterChosenText
# 109 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
	goto BrineshoreTown_Lab_EventScript_ExamineStarter_1

BrineshoreTown_Lab_EventScript_ExamineStarter_6:
# 87 "data/maps/BrineshoreTown_Lab/scripts.pory"
	givemon VAR_TEMP_0, 5, ITEM_NONE, ITEM_POKE_BALL, 15, 1
	goto BrineshoreTown_Lab_EventScript_ExamineStarter_5

BrineshoreTown_Lab_EventScript_ExamineStarter_7:
# 90 "data/maps/BrineshoreTown_Lab/scripts.pory"
	givemon VAR_TEMP_0, 5, ITEM_NONE, ITEM_POKE_BALL, 3
	goto BrineshoreTown_Lab_EventScript_ExamineStarter_5

BrineshoreTown_Lab_EventScript_ExamineStarter_8:
# 93 "data/maps/BrineshoreTown_Lab/scripts.pory"
	givemon VAR_TEMP_0, 5, ITEM_NONE, ITEM_POKE_BALL, 3, 1
	goto BrineshoreTown_Lab_EventScript_ExamineStarter_5

BrineshoreTown_Lab_EventScript_ExamineStarter_9:
# 96 "data/maps/BrineshoreTown_Lab/scripts.pory"
	givemon VAR_TEMP_0, 5, ITEM_NONE, ITEM_POKE_BALL, 15, 1
	goto BrineshoreTown_Lab_EventScript_ExamineStarter_5


BrineshoreTown_Lab_RemoveStarterPokeball::
# 119 "data/maps/BrineshoreTown_Lab/scripts.pory"
	removeobject VAR_TEMP_1
# 121 "data/maps/BrineshoreTown_Lab/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq BrineshoreTown_Lab_RemoveStarterPokeball_2
# 125 "data/maps/BrineshoreTown_Lab/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq BrineshoreTown_Lab_RemoveStarterPokeball_5
# 129 "data/maps/BrineshoreTown_Lab/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq BrineshoreTown_Lab_RemoveStarterPokeball_8
# 133 "data/maps/BrineshoreTown_Lab/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq BrineshoreTown_Lab_RemoveStarterPokeball_10
	return

BrineshoreTown_Lab_RemoveStarterPokeball_2:
# 122 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_STARTER_BALL_1
	return

BrineshoreTown_Lab_RemoveStarterPokeball_5:
# 126 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_STARTER_BALL_2
	return

BrineshoreTown_Lab_RemoveStarterPokeball_8:
# 130 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_STARTER_BALL_3
	return

BrineshoreTown_Lab_RemoveStarterPokeball_10:
# 134 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_STARTER_BALL_4
	return


BrineshoreTown_Lab_YewGivePokedex::
# 140 "data/maps/BrineshoreTown_Lab/scripts.pory"
	lock
# 141 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox GivePokedex
# 142 "data/maps/BrineshoreTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 143 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 144 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
# 145 "data/maps/BrineshoreTown_Lab/scripts.pory"
	release
	return


BrineshoreTown_Lab_TalkToYew::
# 149 "data/maps/BrineshoreTown_Lab/scripts.pory"
	lock
# 150 "data/maps/BrineshoreTown_Lab/scripts.pory"
	faceplayer
# 151 "data/maps/BrineshoreTown_Lab/scripts.pory"
	goto_if_set FLAG_STARTER_BALL_4, BrineshoreTown_Lab_TalkToYew_2
# 155 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox BrokenComputer
BrineshoreTown_Lab_TalkToYew_1:
# 157 "data/maps/BrineshoreTown_Lab/scripts.pory"
	release
	return

BrineshoreTown_Lab_TalkToYew_2:
# 152 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox FixedComputer
	goto BrineshoreTown_Lab_TalkToYew_1


BrineshoreTown_Lab_YewJoinsHumanParty::
# 161 "data/maps/BrineshoreTown_Lab/scripts.pory"
	lockall
# 163 "data/maps/BrineshoreTown_Lab/scripts.pory"
	compare BRINESHORETOWN_STATE, 1
	goto_if_eq BrineshoreTown_Lab_YewJoinsHumanParty_3
BrineshoreTown_Lab_YewJoinsHumanParty_1:
# 176 "data/maps/BrineshoreTown_Lab/scripts.pory"
	releaseall
	end

BrineshoreTown_Lab_YewJoinsHumanParty_2:
# 164 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox WaitText
# 165 "data/maps/BrineshoreTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, face_up
# 166 "data/maps/BrineshoreTown_Lab/scripts.pory"
	applymovement 5, ProfessorWalkDown
# 167 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmovement 5
# 168 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox TakeYew
# 169 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
# 170 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_SYS_COMPANION_GET
# 171 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar BRINESHORETOWN_STATE, 3
# 172 "data/maps/BrineshoreTown_Lab/scripts.pory"
	removeobject 6
# 173 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_TEMP_1
	goto BrineshoreTown_Lab_YewJoinsHumanParty_1

BrineshoreTown_Lab_YewJoinsHumanParty_3:
# 163 "data/maps/BrineshoreTown_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_COMPANION_GET, BrineshoreTown_Lab_YewJoinsHumanParty_2
	goto BrineshoreTown_Lab_YewJoinsHumanParty_1


BrineshoreTown_Lab_TalkToProfessor::
# 181 "data/maps/BrineshoreTown_Lab/scripts.pory"
	lock
# 182 "data/maps/BrineshoreTown_Lab/scripts.pory"
	faceplayer
# 183 "data/maps/BrineshoreTown_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, BrineshoreTown_Lab_TalkToProfessor_2
# 188 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox BrineshoreTown_Lab_TalkToProfessor_Text_0
# 189 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
BrineshoreTown_Lab_TalkToProfessor_1:
# 191 "data/maps/BrineshoreTown_Lab/scripts.pory"
	release
	return

BrineshoreTown_Lab_TalkToProfessor_2:
# 184 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox StandardProfessorText
# 185 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
	goto BrineshoreTown_Lab_TalkToProfessor_1


# 196 "data/maps/BrineshoreTown_Lab/scripts.pory"
YewWalkToProfessor:
# 197 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_fast_left
# 197 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_fast_left
# 197 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_fast_left
# 198 "data/maps/BrineshoreTown_Lab/scripts.pory"
	face_down
	step_end

# 201 "data/maps/BrineshoreTown_Lab/scripts.pory"
ProfessorWalkDown:
# 202 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_right
# 202 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_right
# 203 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_down
# 203 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_down
	step_end

# 206 "data/maps/BrineshoreTown_Lab/scripts.pory"
walk_up:
# 207 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_up
	step_end

BrineshoreTown_Lab_TalkToProfessor_Text_0:
# 188 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Good luck.$"

StandardProfessorText::
# 210 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Go ahead and choose a\n"
	.string "Pokemon,\n"
	.string "I need to get this delivery sorted.\p"
	.string "$"

ChooseStarterText::
# 215 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}, is this {STR_VAR_1} the\n"
	.string "one you want?\p$"

StarterChosenText::
# 220 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}An excellent choice.$"

StillLookingText::
# 224 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Ok, {PLAYER}, take your time.\p$"

CantTakeAnother::
# 228 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You can't have that,\n"
	.string "stop being greedy!$"

WaitText::
# 233 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}WAIT!\p$"

TakeYew::
# 237 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Assistant Yew has yet to\n"
	.string "pass the POPME.\p"
	.string "You'll be taking him north with you to\n"
	.string "the\n"
	.string "Academy where he can take the exam.$"

GivePokedex::
# 242 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Assistant Yew: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I need you to escort me,\n"
	.string "north. In exchange for your trouble, take\p"
	.string "this Pokedex.$"

BrokenComputer::
# 248 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Assistant Yew: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That Porygon is\n"
	.string "always breaking this computer somehow...$"

FixedComputer::
# 253 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Assistant Yew: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Take good care of\n"
	.string "Porygon for me.$"
