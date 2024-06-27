BrineshoreTown_Rathouse_Basement_MapScripts::
# 2 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BrineshoreTown_Rathouse_Basement_OnTransition
	.byte 0


BrineshoreTown_Rathouse_Basement_OnTransition::
# 6 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	setrespawn HEAL_LOCATION_BRINESHORE_TOWN
# 8 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	setflag FLAG_TEMP_1
# 9 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	setflag FLAG_TEMP_2
# 11 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	goto_if_unset FLAG_RAT_BASEMENT_QUEST, BrineshoreTown_Rathouse_Basement_OnTransition_1
	return

BrineshoreTown_Rathouse_Basement_OnTransition_1:
# 12 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


BasementRatBattleIntro::
# 17 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	lockall
# 18 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	clearflag FLAG_TEMP_2
# 19 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	addobject 2
# 20 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	applymovement 2, YewWalkRatBasement1
# 21 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	waitmovement 2
# 22 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	msgbox BasementRatBattleIntro_Text_0, MSGBOX_NPC
# 23 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	waitmessage
# 24 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	applymovement 2, YewWalkRatBasement2
# 25 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	waitmovement 2
# 26 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	msgbox BasementRatBattleIntro_Text_1, MSGBOX_NPC
# 27 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	waitmessage
# 29 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	clearflag FLAG_TEMP_1
# 30 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	addobject 1
# 32 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	applymovement 1, RatMovement1
# 33 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	waitmovement 1
# 34 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerProtectYew
# 35 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	applymovement 1, RatMovement2
# 37 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	call BasementRatBattle
# 39 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	releaseall
	return


BasementRatBattle::
# 43 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	setwildbattle SPECIES_RATTATA, 8, ITEM_ORAN_BERRY, SPECIES_RATTATA_ALOLAN, 8, ITEM_ORAN_BERRY
# 44 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	settotemboost B_POSITION_OPPONENT_RIGHT, 1, 0, 1
# 45 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_ENCOUNTER
# 46 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	dowildbattle
# 48 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 50 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BasementRatBattle_2
# 59 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BasementRatBattle_3
# 67 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BasementRatBattle_4
BasementRatBattle_1:
# 71 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	setvar VAR_TEMP_0, 0
	return

BasementRatBattle_2:
# 51 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	fadescreen FADE_TO_BLACK
# 52 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	setflag FLAG_TEMP_1
# 53 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	removeobject 1
# 54 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	setflag FLAG_RAT_BASEMENT_QUEST
# 55 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 57 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	msgbox BasementRatBattle_Text_0, MSGBOX_AUTOCLOSE
	goto BasementRatBattle_1

BasementRatBattle_3:
# 60 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	setflag FLAG_TEMP_1
# 62 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	removeobject 1
# 63 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	setflag FLAG_RAT_BASEMENT_QUEST
# 64 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 65 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	msgbox BasementRatBattle_Text_0, MSGBOX_AUTOCLOSE
	goto BasementRatBattle_1

BasementRatBattle_4:
# 68 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	warpwhitefade MAP_BRINESHORE_TOWN, 29, 23
	goto BasementRatBattle_1


# 74 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
YewWalkRatBasement1:
# 75 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	emote_exclamation_mark
# 76 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_up
# 77 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	face_right
	step_end

# 80 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
YewWalkRatBasement2:
# 81 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_up
# 81 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_up
# 82 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_left
	step_end

# 85 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
RatMovement1:
# 86 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_fast_down
# 87 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_fast_right
# 88 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_fast_up
	step_end

# 91 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
RatMovement2:
# 92 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_fast_up
# 92 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_fast_up
# 93 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_fast_left
# 93 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_fast_left
	step_end

# 96 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
PlayerProtectYew:
# 97 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	emote_double_exclamation_mark
# 98 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_fast_up
# 98 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_fast_up
# 98 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	walk_fast_up
	step_end

BasementRatBattleIntro_Text_0:
# 22 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	.string "{COLOR BLUE}Assistant Yew: {COLOR DARK_GRAY} Hmmm, this is quite\nstrange...$"

BasementRatBattleIntro_Text_1:
# 26 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	.string "{COLOR BLUE}Assistant Yew: {COLOR DARK_GRAY}It sounds very lively down there,\nhow deep could it go?$"

BasementRatBattle_Text_0:
# 57 "data/maps/BrineshoreTown_Rathouse_Basement/scripts.pory"
	.string "{COLOR BLUE}Assistant Yew: {COLOR DARK_GRAY}Thank you, I don't know\nwhat would have happened without you.$"
