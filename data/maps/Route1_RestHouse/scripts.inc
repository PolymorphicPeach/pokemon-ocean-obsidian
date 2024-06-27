Route1_RestHouse_MapScripts::
# 2 "data/maps/Route1_RestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_RestHouse_OnTransition
	.byte 0


Route1_RestHouse_OnTransition::
# 6 "data/maps/Route1_RestHouse/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE_1
# 7 "data/maps/Route1_RestHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 8 "data/maps/Route1_RestHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 11 "data/maps/Route1_RestHouse/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_AXEW
# 13 "data/maps/Route1_RestHouse/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 15 "data/maps/Route1_RestHouse/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	return


Route1_RestHouse_Rest::
# 19 "data/maps/Route1_RestHouse/scripts.pory"
	lock
# 20 "data/maps/Route1_RestHouse/scripts.pory"
	msgbox Route1_RestHouse_Rest_Text_0, MSGBOX_YESNO
# 21 "data/maps/Route1_RestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_RestHouse_Rest_2
Route1_RestHouse_Rest_1:
# 27 "data/maps/Route1_RestHouse/scripts.pory"
	release
	return

Route1_RestHouse_Rest_2:
# 22 "data/maps/Route1_RestHouse/scripts.pory"
	special HealPlayerParty
# 23 "data/maps/Route1_RestHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 24 "data/maps/Route1_RestHouse/scripts.pory"
	playfanfare MUS_RG_HEAL
# 25 "data/maps/Route1_RestHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Route1_RestHouse_Rest_1


Route1_RestHouse_LeftEnter::
# 33 "data/maps/Route1_RestHouse/scripts.pory"
	lock
# 34 "data/maps/Route1_RestHouse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 35 "data/maps/Route1_RestHouse/scripts.pory"
	addobject 3
# 36 "data/maps/Route1_RestHouse/scripts.pory"
	clearflag FLAG_TEMP_1
# 37 "data/maps/Route1_RestHouse/scripts.pory"
	applymovement 3, LeftWalkToCouch
# 38 "data/maps/Route1_RestHouse/scripts.pory"
	waitmovement 3
# 39 "data/maps/Route1_RestHouse/scripts.pory"
	release
	return


Route1_RestHouse_RightEnter::
# 43 "data/maps/Route1_RestHouse/scripts.pory"
	lock
# 44 "data/maps/Route1_RestHouse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 45 "data/maps/Route1_RestHouse/scripts.pory"
	addobject 5
# 46 "data/maps/Route1_RestHouse/scripts.pory"
	clearflag FLAG_TEMP_2
# 47 "data/maps/Route1_RestHouse/scripts.pory"
	applymovement 5, RightWalkToCouch
# 48 "data/maps/Route1_RestHouse/scripts.pory"
	waitmovement 5
# 49 "data/maps/Route1_RestHouse/scripts.pory"
	release
	return


Route1_RestHouse_AllowExitScript::
# 53 "data/maps/Route1_RestHouse/scripts.pory"
	setvar VAR_TEMP_0, 2
	return


Route1_RestHouse_LeftExit::
# 57 "data/maps/Route1_RestHouse/scripts.pory"
	lock
# 59 "data/maps/Route1_RestHouse/scripts.pory"
	goto_if_unset FLAG_TEMP_1, Route1_RestHouse_LeftExit_2
# 66 "data/maps/Route1_RestHouse/scripts.pory"
	applymovement 5, LeftWalkFromCouch
# 67 "data/maps/Route1_RestHouse/scripts.pory"
	waitmovement 5
# 68 "data/maps/Route1_RestHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 69 "data/maps/Route1_RestHouse/scripts.pory"
	removeobject 5
Route1_RestHouse_LeftExit_1:
# 73 "data/maps/Route1_RestHouse/scripts.pory"
	release
	return

Route1_RestHouse_LeftExit_2:
# 60 "data/maps/Route1_RestHouse/scripts.pory"
	applymovement 3, LeftWalkFromCouch
# 61 "data/maps/Route1_RestHouse/scripts.pory"
	waitmovement 3
# 62 "data/maps/Route1_RestHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 63 "data/maps/Route1_RestHouse/scripts.pory"
	removeobject 3
	goto Route1_RestHouse_LeftExit_1


Route1_RestHouse_RightExit::
# 77 "data/maps/Route1_RestHouse/scripts.pory"
	lock
# 79 "data/maps/Route1_RestHouse/scripts.pory"
	goto_if_unset FLAG_TEMP_1, Route1_RestHouse_RightExit_2
# 86 "data/maps/Route1_RestHouse/scripts.pory"
	applymovement 5, RightWalkFromCouch
# 87 "data/maps/Route1_RestHouse/scripts.pory"
	waitmovement 5
# 88 "data/maps/Route1_RestHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 89 "data/maps/Route1_RestHouse/scripts.pory"
	removeobject 5
Route1_RestHouse_RightExit_1:
# 92 "data/maps/Route1_RestHouse/scripts.pory"
	release
	return

Route1_RestHouse_RightExit_2:
# 80 "data/maps/Route1_RestHouse/scripts.pory"
	applymovement 3, RightWalkFromCouch
# 81 "data/maps/Route1_RestHouse/scripts.pory"
	waitmovement 3
# 82 "data/maps/Route1_RestHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 83 "data/maps/Route1_RestHouse/scripts.pory"
	removeobject 3
	goto Route1_RestHouse_RightExit_1


Route1_RestHouse_Yew::
# 96 "data/maps/Route1_RestHouse/scripts.pory"
	msgbox Route1_RestHouse_Yew_Text, MSGBOX_NPC
	return


# 107 "data/maps/Route1_RestHouse/scripts.pory"
LeftWalkToCouch:
# 108 "data/maps/Route1_RestHouse/scripts.pory"
	emote_heart
# 109 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_right
# 109 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_right
# 109 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_right
# 110 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_up
# 111 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_right
# 111 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_right
# 112 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_up
# 113 "data/maps/Route1_RestHouse/scripts.pory"
	face_down
	step_end

# 116 "data/maps/Route1_RestHouse/scripts.pory"
RightWalkToCouch:
# 117 "data/maps/Route1_RestHouse/scripts.pory"
	emote_heart
# 118 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_right
# 118 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_up
# 120 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_up
# 122 "data/maps/Route1_RestHouse/scripts.pory"
	face_down
	step_end

# 125 "data/maps/Route1_RestHouse/scripts.pory"
LeftWalkFromCouch:
# 126 "data/maps/Route1_RestHouse/scripts.pory"
	emote_exclamation_mark
# 127 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_down
# 128 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_left
# 129 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_down
	step_end

# 132 "data/maps/Route1_RestHouse/scripts.pory"
RightWalkFromCouch:
# 133 "data/maps/Route1_RestHouse/scripts.pory"
	emote_exclamation_mark
# 134 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_down
# 134 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_down
# 135 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_left
# 135 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_left
# 135 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_left
# 135 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_left
# 136 "data/maps/Route1_RestHouse/scripts.pory"
	walk_fast_down
	step_end

Route1_RestHouse_Owner::
# 140 "data/maps/Route1_RestHouse/scripts.pory"
	msgbox Route1_RestHouse_Owner_Text, MSGBOX_NPC
	return


Route1_RestHouse_Store::
# 149 "data/maps/Route1_RestHouse/scripts.pory"
	lock
# 150 "data/maps/Route1_RestHouse/scripts.pory"
	faceplayer
# 151 "data/maps/Route1_RestHouse/scripts.pory"
	msgbox Route1_RestHouse_Store_Text_0
# 152 "data/maps/Route1_RestHouse/scripts.pory"
	waitmessage
# 153 "data/maps/Route1_RestHouse/scripts.pory"
	pokemart Route1_RestHouse_Store_Items
# 154 "data/maps/Route1_RestHouse/scripts.pory"
	msgbox Route1_RestHouse_Store_Text_1
# 155 "data/maps/Route1_RestHouse/scripts.pory"
	release
	return


	.align 2
# 158 "data/maps/Route1_RestHouse/scripts.pory"
Route1_RestHouse_Store_Items:
# 159 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_POTION
# 160 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 161 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_REVIVE
# 162 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 163 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_AWAKENING
# 164 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 165 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 166 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 167 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_REPEL
# 168 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_POKE_BALL
# 169 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 170 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 171 "data/maps/Route1_RestHouse/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

Route1_RestHouse_Wyverna::
# 175 "data/maps/Route1_RestHouse/scripts.pory"
	lockall
# 176 "data/maps/Route1_RestHouse/scripts.pory"
	faceplayer
# 178 "data/maps/Route1_RestHouse/scripts.pory"
	goto_if_unset FLAG_AXEW_TRADE, Route1_RestHouse_Wyverna_2
# 215 "data/maps/Route1_RestHouse/scripts.pory"
	msgbox Route1_RestHouse_Wyverna_Text_3, MSGBOX_AUTOCLOSE
Route1_RestHouse_Wyverna_1:
# 218 "data/maps/Route1_RestHouse/scripts.pory"
	releaseall
	return

Route1_RestHouse_Wyverna_2:
# 179 "data/maps/Route1_RestHouse/scripts.pory"
	msgbox Route1_RestHouse_WyvernaAskToTrade, MSGBOX_YESNO
# 180 "data/maps/Route1_RestHouse/scripts.pory"
	waitmessage
# 181 "data/maps/Route1_RestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_RestHouse_Wyverna_5
# 211 "data/maps/Route1_RestHouse/scripts.pory"
	msgbox Route1_RestHouse_Wyverna_Text_2, MSGBOX_AUTOCLOSE
	goto Route1_RestHouse_Wyverna_1

Route1_RestHouse_Wyverna_5:
# 182 "data/maps/Route1_RestHouse/scripts.pory"
	special ChoosePartyMon
# 183 "data/maps/Route1_RestHouse/scripts.pory"
	waitstate
# 188 "data/maps/Route1_RestHouse/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 190 "data/maps/Route1_RestHouse/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 192 "data/maps/Route1_RestHouse/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq Route1_RestHouse_Wyverna_8
# 206 "data/maps/Route1_RestHouse/scripts.pory"
	msgbox Route1_RestHouse_Wyverna_Text_1, MSGBOX_AUTOCLOSE
	goto Route1_RestHouse_Wyverna_1

Route1_RestHouse_Wyverna_8:
# 196 "data/maps/Route1_RestHouse/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 197 "data/maps/Route1_RestHouse/scripts.pory"
	special CreateInGameTradePokemon
# 198 "data/maps/Route1_RestHouse/scripts.pory"
	special DoInGameTradeScene
# 199 "data/maps/Route1_RestHouse/scripts.pory"
	setflag FLAG_AXEW_TRADE
# 200 "data/maps/Route1_RestHouse/scripts.pory"
	waitstate
# 202 "data/maps/Route1_RestHouse/scripts.pory"
	msgbox Route1_RestHouse_Wyverna_Text_0, MSGBOX_AUTOCLOSE
	goto Route1_RestHouse_Wyverna_1


Route1_RestHouse_Rest_Text_0:
# 20 "data/maps/Route1_RestHouse/scripts.pory"
	.string "{COLOR BLUE}Would you like to go to sleep and heal\nyour party?$"

Route1_RestHouse_Store_Text_0:
# 151 "data/maps/Route1_RestHouse/scripts.pory"
	.string "I got a few supplies for sale here.$"

Route1_RestHouse_Store_Text_1:
# 154 "data/maps/Route1_RestHouse/scripts.pory"
	.string "Thanks.$"

Route1_RestHouse_Wyverna_Text_0:
# 202 "data/maps/Route1_RestHouse/scripts.pory"
	.string "Excellent, this shall make a fine\ndestructive force.$"

Route1_RestHouse_Wyverna_Text_1:
# 206 "data/maps/Route1_RestHouse/scripts.pory"
	.string "Are you trying to scam me?\nYou don't have an {COLOR RED}Onix {COLOR DARK_GRAY}...$"

Route1_RestHouse_Wyverna_Text_2:
# 211 "data/maps/Route1_RestHouse/scripts.pory"
	.string "Ok, maybe later then?$"

Route1_RestHouse_Wyverna_Text_3:
# 215 "data/maps/Route1_RestHouse/scripts.pory"
	.string "Thank you! Take good care of {COLOR RED}Syrax{COLOR DARK_GRAY}.$"

Route1_RestHouse_Yew_Text::
# 99 "data/maps/Route1_RestHouse/scripts.pory"
	.string "{COLOR BLUE}Yew: {COLOR RED}Gilded Hollow {COLOR DARK_GRAY}used to be full of\n"
	.string "gold veins.\p"
	.string "The gold was strip-mined when humans\n"
	.string "transitioned from apricot Pokeballs\l"
	.string "to metal Pokeballs.$"

Route1_RestHouse_Owner_Text::
# 143 "data/maps/Route1_RestHouse/scripts.pory"
	.string "Hello dear, feel free to stay and rest\n"
	.string "with your Pokemon.$"

Route1_RestHouse_WyvernaAskToTrade::
# 221 "data/maps/Route1_RestHouse/scripts.pory"
	.string "I came out here to catch an {COLOR RED}Onix {COLOR DARK_GRAY},\n"
	.string "but now I'm too comfy.\p"
	.string "Would you trade an {COLOR RED}Onix {COLOR DARK_GRAY}for my {COLOR RED}Axew{COLOR DARK_GRAY}?$"
