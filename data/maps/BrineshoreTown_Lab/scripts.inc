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


BrineshoreTown_Lab_TalkToYew::
# 140 "data/maps/BrineshoreTown_Lab/scripts.pory"
	goto_if_set FLAG_STARTER_BALL_4, BrineshoreTown_Lab_TalkToYew_1
# 144 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox BrineshoreTown_Lab_TalkToYew_Text_1, MSGBOX_NPC
	return

BrineshoreTown_Lab_TalkToYew_1:
# 141 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox BrineshoreTown_Lab_TalkToYew_Text_0, MSGBOX_NPC
	return


BrineshoreTown_Lab_LeaveLeftTrigger::
# 149 "data/maps/BrineshoreTown_Lab/scripts.pory"
	lockall
# 151 "data/maps/BrineshoreTown_Lab/scripts.pory"
	compare BRINESHORETOWN_STATE, 1
	goto_if_eq BrineshoreTown_Lab_LeaveLeftTrigger_3
BrineshoreTown_Lab_LeaveLeftTrigger_1:
# 164 "data/maps/BrineshoreTown_Lab/scripts.pory"
	releaseall
	return

BrineshoreTown_Lab_LeaveLeftTrigger_2:
# 152 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox WaitText
# 153 "data/maps/BrineshoreTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, face_up
# 154 "data/maps/BrineshoreTown_Lab/scripts.pory"
	applymovement 5, ProfessorWalkLeftTrigger
# 155 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmovement 5
# 157 "data/maps/BrineshoreTown_Lab/scripts.pory"
	call YewJoinsLeft
# 159 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_SYS_COMPANION_GET
# 160 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar BRINESHORETOWN_STATE, 3
# 161 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_TEMP_1
	goto BrineshoreTown_Lab_LeaveLeftTrigger_1

BrineshoreTown_Lab_LeaveLeftTrigger_3:
# 151 "data/maps/BrineshoreTown_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_COMPANION_GET, BrineshoreTown_Lab_LeaveLeftTrigger_2
	goto BrineshoreTown_Lab_LeaveLeftTrigger_1


BrineshoreTown_Lab_LeaveRightTrigger::
# 168 "data/maps/BrineshoreTown_Lab/scripts.pory"
	lockall
# 170 "data/maps/BrineshoreTown_Lab/scripts.pory"
	compare BRINESHORETOWN_STATE, 1
	goto_if_eq BrineshoreTown_Lab_LeaveRightTrigger_3
BrineshoreTown_Lab_LeaveRightTrigger_1:
# 185 "data/maps/BrineshoreTown_Lab/scripts.pory"
	releaseall
	return

BrineshoreTown_Lab_LeaveRightTrigger_2:
# 171 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox WaitText
# 172 "data/maps/BrineshoreTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, face_up
# 173 "data/maps/BrineshoreTown_Lab/scripts.pory"
	applymovement 5, ProfessorWalkRightTrigger
# 174 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmovement 5
# 176 "data/maps/BrineshoreTown_Lab/scripts.pory"
	call YewJoinsRight
# 178 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_SYS_COMPANION_GET
# 179 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar BRINESHORETOWN_STATE, 3
# 180 "data/maps/BrineshoreTown_Lab/scripts.pory"
	removeobject 6
# 181 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setflag FLAG_TEMP_1
	goto BrineshoreTown_Lab_LeaveRightTrigger_1

BrineshoreTown_Lab_LeaveRightTrigger_3:
# 170 "data/maps/BrineshoreTown_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_COMPANION_GET, BrineshoreTown_Lab_LeaveRightTrigger_2
	goto BrineshoreTown_Lab_LeaveRightTrigger_1


YewJoinsLeft::
# 189 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox TakeYew
# 190 "data/maps/BrineshoreTown_Lab/scripts.pory"
	applymovement 6, YewWalkLeftTrigger
# 191 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmovement 6
# 192 "data/maps/BrineshoreTown_Lab/scripts.pory"
	call YewGivePokedexAndEevee
# 193 "data/maps/BrineshoreTown_Lab/scripts.pory"
	applymovement 6, walk_down
# 194 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmovement 6
# 195 "data/maps/BrineshoreTown_Lab/scripts.pory"
	removeobject 6
	return


YewJoinsRight::
# 199 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox TakeYew
# 200 "data/maps/BrineshoreTown_Lab/scripts.pory"
	applymovement 6, YewWalkRightTrigger
# 201 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmovement 6
# 202 "data/maps/BrineshoreTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, face_right
# 203 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmovement 0
# 204 "data/maps/BrineshoreTown_Lab/scripts.pory"
	call YewGivePokedexAndEevee
# 205 "data/maps/BrineshoreTown_Lab/scripts.pory"
	applymovement 6, walk_left
# 206 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmovement 6
# 207 "data/maps/BrineshoreTown_Lab/scripts.pory"
	removeobject 6
	return


YewGivePokedexAndEevee::
# 211 "data/maps/BrineshoreTown_Lab/scripts.pory"
	setvar VAR_TEMP_2, 5
# 213 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox GivePokedex
# 214 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
# 215 "data/maps/BrineshoreTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 216 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox YewGivePokedexAndEevee_Text_0, MSGBOX_AUTOCLOSE
# 217 "data/maps/BrineshoreTown_Lab/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 218 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox YewGivePokedexAndEevee_Text_1, MSGBOX_AUTOCLOSE
# 219 "data/maps/BrineshoreTown_Lab/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE, ITEM_POKE_BALL, VAR_TEMP_2, 1
# 220 "data/maps/BrineshoreTown_Lab/scripts.pory"
	hidemonpic
	return


BrineshoreTown_Lab_TalkToProfessor::
# 225 "data/maps/BrineshoreTown_Lab/scripts.pory"
	lock
# 226 "data/maps/BrineshoreTown_Lab/scripts.pory"
	faceplayer
# 227 "data/maps/BrineshoreTown_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, BrineshoreTown_Lab_TalkToProfessor_2
# 232 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox BrineshoreTown_Lab_TalkToProfessor_Text_0
# 233 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
BrineshoreTown_Lab_TalkToProfessor_1:
# 235 "data/maps/BrineshoreTown_Lab/scripts.pory"
	release
	return

BrineshoreTown_Lab_TalkToProfessor_2:
# 228 "data/maps/BrineshoreTown_Lab/scripts.pory"
	msgbox StandardProfessorText
# 229 "data/maps/BrineshoreTown_Lab/scripts.pory"
	waitmessage
	goto BrineshoreTown_Lab_TalkToProfessor_1


# 240 "data/maps/BrineshoreTown_Lab/scripts.pory"
YewWalkToProfessor:
# 241 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_fast_left
# 241 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_fast_left
# 241 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_fast_left
# 242 "data/maps/BrineshoreTown_Lab/scripts.pory"
	face_down
	step_end

# 245 "data/maps/BrineshoreTown_Lab/scripts.pory"
ProfessorWalkLeftTrigger:
# 246 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_right
# 246 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_right
# 247 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_down
# 247 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_down
	step_end

# 250 "data/maps/BrineshoreTown_Lab/scripts.pory"
ProfessorWalkRightTrigger:
# 251 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_right
# 251 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_right
# 251 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_right
# 252 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_down
# 252 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_down
	step_end

# 255 "data/maps/BrineshoreTown_Lab/scripts.pory"
YewWalkLeftTrigger:
# 256 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_down
# 257 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_left
# 257 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_left
# 257 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_left
	step_end

# 260 "data/maps/BrineshoreTown_Lab/scripts.pory"
YewWalkRightTrigger:
# 261 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_down
# 262 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_left
# 262 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_left
	step_end

# 265 "data/maps/BrineshoreTown_Lab/scripts.pory"
walk_left:
# 266 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_left
	step_end

# 269 "data/maps/BrineshoreTown_Lab/scripts.pory"
walk_up:
# 270 "data/maps/BrineshoreTown_Lab/scripts.pory"
	walk_up
	step_end

BrineshoreTown_Lab_TalkToYew_Text_0:
# 141 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Assistant Yew: {COLOR DARK_GRAY}Hey, the computer is\nworking again!$"

BrineshoreTown_Lab_TalkToYew_Text_1:
# 144 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Assistant Yew: {COLOR DARK_GRAY}Ugh, this computer is\nalways crashing.\lI think it's that Porygon...$"

YewGivePokedexAndEevee_Text_0:
# 216 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}You got a Pokedex!$"

YewGivePokedexAndEevee_Text_1:
# 218 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}You got an Eevee!$"

BrineshoreTown_Lab_TalkToProfessor_Text_0:
# 232 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Good luck.$"

StandardProfessorText::
# 273 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Go ahead and choose a Pokemon,\n"
	.string "I need to get this delivery sorted.$"

ChooseStarterText::
# 278 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}, is this {STR_VAR_1} the\n"
	.string "one you want?\p$"

StarterChosenText::
# 283 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}An excellent choice.$"

StillLookingText::
# 287 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Ok, {PLAYER}, take your time.\p$"

CantTakeAnother::
# 291 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You can't have that,\n"
	.string "stop being greedy!$"

WaitText::
# 296 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}WAIT!\p$"

TakeYew::
# 300 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Professor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Assistant Yew needs you\n"
	.string "to take him north to the academy.$"

GivePokedex::
# 306 "data/maps/BrineshoreTown_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Assistant Yew: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Thank you for helping!\n"
	.string "Here, consider it a form of payment.$"
