GildedHollow_1F_MapScripts::
# 2 "data/maps/GildedHollow_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GildedHollow_1F_OnTransition
	.byte 0


GildedHollow_1F_OnTransition::
# 6 "data/maps/GildedHollow_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE_1
# 7 "data/maps/GildedHollow_1F/scripts.pory"
	setflag FLAG_ROBERT_JOINED_PARTY
# 10 "data/maps/GildedHollow_1F/scripts.pory"
	goto_if_unset FLAG_ROBERT_JOINED_PARTY, GildedHollow_1F_OnTransition_1
	return

GildedHollow_1F_OnTransition_1:
# 11 "data/maps/GildedHollow_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 12 "data/maps/GildedHollow_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 14 "data/maps/GildedHollow_1F/scripts.pory"
	setflag FLAG_TEMP_3
# 15 "data/maps/GildedHollow_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 16 "data/maps/GildedHollow_1F/scripts.pory"
	setflag FLAG_TEMP_5
# 17 "data/maps/GildedHollow_1F/scripts.pory"
	setflag FLAG_TEMP_6
	return


GH_Hiker::
# 22 "data/maps/GildedHollow_1F/scripts.pory"
	trainerbattle_double GH_HIKER, HikerIntro, HikerOutro, NeedPokemon
# 23 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox HikerStandard, MSGBOX_NPC
	return


GH_CoolTrainer::
# 27 "data/maps/GildedHollow_1F/scripts.pory"
	trainerbattle_double GH_COOLTRAINER, CoolTrainerIntro, CoolTrainerOutro, NeedPokemon
# 29 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox CoolTrainerStandard, MSGBOX_NPC
# 30 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 7, face_away_player
# 32 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 7
# 34 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox PushHimText, MSGBOX_YESNO
# 37 "data/maps/GildedHollow_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GH_CoolTrainer_2
GH_CoolTrainer_1:
# 45 "data/maps/GildedHollow_1F/scripts.pory"
	release
	return

GH_CoolTrainer_2:
# 38 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 7, PushPerson
# 39 "data/maps/GildedHollow_1F/scripts.pory"
	playse SE_FALL
# 40 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 7
# 41 "data/maps/GildedHollow_1F/scripts.pory"
	setflag FLAG_GH_PUSHED_PERSON
# 42 "data/maps/GildedHollow_1F/scripts.pory"
	removeobject 7
# 43 "data/maps/GildedHollow_1F/scripts.pory"
	playse SE_M_SELF_DESTRUCT
	goto GH_CoolTrainer_1


GH_Ranger::
# 49 "data/maps/GildedHollow_1F/scripts.pory"
	trainerbattle_double GH_RANGER, RangerIntro, RangerOutro, NeedPokemon
# 50 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox RangerStandard, MSGBOX_NPC
	return


GH_Psychic1::
# 54 "data/maps/GildedHollow_1F/scripts.pory"
	trainerbattle_double GH_PSYCHIC1, Psychic1Intro, Psychic1Outro, NeedPokemon
# 55 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox Psychic1Standard, MSGBOX_NPC
	return


GH_Psychic2::
# 59 "data/maps/GildedHollow_1F/scripts.pory"
	trainerbattle_double GH_PSYCHIC2, Psychic2Intro, Psychic2Outro, NeedPokemon
# 60 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox Psychic2Standard, MSGBOX_NPC
	return


RecruitRobert::
# 74 "data/maps/GildedHollow_1F/scripts.pory"
	lock
# 75 "data/maps/GildedHollow_1F/scripts.pory"
	call YewRobertArgument
# 76 "data/maps/GildedHollow_1F/scripts.pory"
	call PsychicsEnter
# 77 "data/maps/GildedHollow_1F/scripts.pory"
	call RobertHealParty
# 78 "data/maps/GildedHollow_1F/scripts.pory"
	call NorthWestPsychicBattle
# 80 "data/maps/GildedHollow_1F/scripts.pory"
	release
	return


YewRobertArgument::
# 84 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, emote_exclamation_mark
# 85 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 18, RobertRunLeft
# 86 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 18
# 87 "data/maps/GildedHollow_1F/scripts.pory"
	playse SE_BANG
# 88 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 18, RobertRecoilRight
# 89 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 18
# 91 "data/maps/GildedHollow_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 92 "data/maps/GildedHollow_1F/scripts.pory"
	addobject 19
# 94 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 19, YewMoveLeft
# 95 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 19
# 96 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, face_left
# 97 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 98 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox YewComplains, MSGBOX_DEFAULT
# 99 "data/maps/GildedHollow_1F/scripts.pory"
	waitmessage
# 101 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, face_right
# 102 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 103 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox RobertAskForHelp, MSGBOX_DEFAULT
# 104 "data/maps/GildedHollow_1F/scripts.pory"
	waitmessage
# 106 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, face_left
# 107 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 108 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox YewResponse, MSGBOX_DEFAULT
# 109 "data/maps/GildedHollow_1F/scripts.pory"
	waitmessage
	return


PsychicsEnter::
# 113 "data/maps/GildedHollow_1F/scripts.pory"
	special SpawnCameraObject
# 114 "data/maps/GildedHollow_1F/scripts.pory"
	fadenewbgm MUS_B_PYRAMID_TOP
# 117 "data/maps/GildedHollow_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 118 "data/maps/GildedHollow_1F/scripts.pory"
	addobject 16
# 119 "data/maps/GildedHollow_1F/scripts.pory"
	playse SE_M_TELEPORT
# 120 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSouth
# 121 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 16, fly_down
# 122 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 16
# 123 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 18, face_down
# 124 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 18
# 125 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 19, face_down
# 126 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 19
# 127 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, face_down
# 128 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 129 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox PsychicSouthIntro, MSGBOX_DEFAULT
# 130 "data/maps/GildedHollow_1F/scripts.pory"
	waitmessage
# 133 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraNorth
# 134 "data/maps/GildedHollow_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 135 "data/maps/GildedHollow_1F/scripts.pory"
	addobject 15
# 136 "data/maps/GildedHollow_1F/scripts.pory"
	playse SE_M_TELEPORT
# 137 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 15, fly_down
# 138 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 15
# 139 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 18, face_up
# 140 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 18
# 141 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 19, face_up
# 142 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 19
# 143 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, face_up
# 144 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 145 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox PsychicNorthIntro, MSGBOX_DEFAULT
# 146 "data/maps/GildedHollow_1F/scripts.pory"
	waitmessage
# 149 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraWest
# 150 "data/maps/GildedHollow_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 151 "data/maps/GildedHollow_1F/scripts.pory"
	addobject 14
# 152 "data/maps/GildedHollow_1F/scripts.pory"
	playse SE_M_TELEPORT
# 153 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 14, fly_down
# 154 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 14
# 155 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 18, face_left
# 156 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 18
# 157 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 19, face_left
# 158 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 19
# 159 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, face_left
# 160 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 161 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox PsychicWestIntro, MSGBOX_DEFAULT
# 162 "data/maps/GildedHollow_1F/scripts.pory"
	waitmessage
# 165 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraEast
# 166 "data/maps/GildedHollow_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 167 "data/maps/GildedHollow_1F/scripts.pory"
	addobject 17
# 168 "data/maps/GildedHollow_1F/scripts.pory"
	playse SE_M_TELEPORT
# 169 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 17, fly_down
# 170 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 17
# 171 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 18, face_right
# 172 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 18
# 173 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, face_down
# 174 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 175 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox PsychicEastIntro, MSGBOX_DEFAULT
# 176 "data/maps/GildedHollow_1F/scripts.pory"
	waitmessage
# 178 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReset
# 179 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 181 "data/maps/GildedHollow_1F/scripts.pory"
	fadeinbgm 2
# 182 "data/maps/GildedHollow_1F/scripts.pory"
	special RemoveCameraObject
	return


RobertHealParty::
# 186 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 18, face_left
# 187 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 18
# 188 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox RobertOffersHealing, MSGBOX_DEFAULT
# 189 "data/maps/GildedHollow_1F/scripts.pory"
	waitmessage
# 190 "data/maps/GildedHollow_1F/scripts.pory"
	special HealPlayerParty
# 191 "data/maps/GildedHollow_1F/scripts.pory"
	playfanfare MUS_RG_HEAL
# 192 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox RobertHealParty_Text_0, MSGBOX_DEFAULT
# 193 "data/maps/GildedHollow_1F/scripts.pory"
	waitmessage
	return


NorthWestPsychicBattle::
# 197 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 14, PsychicWestMoveIn
# 198 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 15, PsychicNorthMoveIn
# 199 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 15
# 201 "data/maps/GildedHollow_1F/scripts.pory"
	multi_fixed_2_vs_2 GH_PSYCHIC3, Psychic3BattleIntro, GH_PSYCHIC4, Psychic4BattleIntro, PARTNER_YEW1, TRAINER_BACK_PIC_STEVEN
	return


SouthEastPsychicBattle::
# 205 "data/maps/GildedHollow_1F/scripts.pory"
	multi_fixed_2_vs_2 GH_PSYCHIC5, Psychic5BattleIntro, GH_PSYCHIC6, Psychic6BattleIntro, PARTNER_ROBERT1, TRAINER_BACK_PIC_ROBERT
	return


TalkToBlocker::
# 328 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox blockerText, MSGBOX_NPC
	return


TalkToDusclops::
# 332 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox dusclopsText, MSGBOX_NPC
	return


# 346 "data/maps/GildedHollow_1F/scripts.pory"
CameraSouth:
# 347 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 347 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 347 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 347 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 347 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
	step_end

# 350 "data/maps/GildedHollow_1F/scripts.pory"
CameraNorth:
# 351 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 351 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 351 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 351 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 351 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 351 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 351 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 351 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 352 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
	step_end

# 355 "data/maps/GildedHollow_1F/scripts.pory"
CameraWest:
# 356 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 356 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 356 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 356 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 356 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 357 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
	step_end

# 360 "data/maps/GildedHollow_1F/scripts.pory"
CameraEast:
# 361 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_right
# 361 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_right
# 361 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_right
# 361 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_right
# 362 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
	step_end

# 365 "data/maps/GildedHollow_1F/scripts.pory"
CameraReset:
# 366 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 367 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 367 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
	step_end

# 370 "data/maps/GildedHollow_1F/scripts.pory"
face_left:
# 371 "data/maps/GildedHollow_1F/scripts.pory"
	face_left
	step_end

# 374 "data/maps/GildedHollow_1F/scripts.pory"
face_away_player:
# 375 "data/maps/GildedHollow_1F/scripts.pory"
	face_away_player
	step_end

# 378 "data/maps/GildedHollow_1F/scripts.pory"
PushPerson:
# 379 "data/maps/GildedHollow_1F/scripts.pory"
	jump_2_right
	step_end

# 382 "data/maps/GildedHollow_1F/scripts.pory"
RobertRunLeft:
# 383 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 383 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 384 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 384 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 384 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 384 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 384 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 385 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 385 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 385 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 385 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 386 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
	step_end

# 389 "data/maps/GildedHollow_1F/scripts.pory"
RobertRecoilRight:
# 390 "data/maps/GildedHollow_1F/scripts.pory"
	jump_special_right
# 391 "data/maps/GildedHollow_1F/scripts.pory"
	walk_left
	step_end

# 394 "data/maps/GildedHollow_1F/scripts.pory"
YewMoveLeft:
# 395 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 396 "data/maps/GildedHollow_1F/scripts.pory"
	face_right
	step_end

# 399 "data/maps/GildedHollow_1F/scripts.pory"
emote_exclamation_mark:
# 400 "data/maps/GildedHollow_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 403 "data/maps/GildedHollow_1F/scripts.pory"
fly_down:
# 404 "data/maps/GildedHollow_1F/scripts.pory"
	fly_down
	step_end

# 407 "data/maps/GildedHollow_1F/scripts.pory"
PsychicNorthMoveIn:
# 408 "data/maps/GildedHollow_1F/scripts.pory"
	walk_slow_down
# 408 "data/maps/GildedHollow_1F/scripts.pory"
	walk_slow_down
	step_end

# 411 "data/maps/GildedHollow_1F/scripts.pory"
PsychicWestMoveIn:
# 412 "data/maps/GildedHollow_1F/scripts.pory"
	walk_slow_up
# 412 "data/maps/GildedHollow_1F/scripts.pory"
	walk_slow_up
	step_end

RobertHealParty_Text_0:
# 192 "data/maps/GildedHollow_1F/scripts.pory"
	.string "{COLOR BLUE}Your party has been fully healed.$"

HikerIntro:
# 208 "data/maps/GildedHollow_1F/scripts.pory"
	.string "My family used to work in here.\n"
	.string "I wanted to see this place for myself.$"

HikerOutro:
# 213 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Thank you, the battle was\n"
	.string "a nice distraction.$"

HikerStandard:
# 218 "data/maps/GildedHollow_1F/scripts.pory"
	.string "My father and his father died of\n"
	.string "black-lung because of this old mine$"

CoolTrainerIntro:
# 223 "data/maps/GildedHollow_1F/scripts.pory"
	.string "AAAAAAHHHH!!!$"

CoolTrainerOutro:
# 227 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Sorry, I thought you were trying to\n"
	.string "push me!$"

CoolTrainerStandard:
# 232 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Hey again! Cool place, huh?\n"
	.string "I wonder how far down it goes.$"

PushHimText:
# 237 "data/maps/GildedHollow_1F/scripts.pory"
	.string "{COLOR RED}Push him?$"

RangerIntro:
# 241 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Excuse me, this place is off-limits\n"
	.string "by decree of the Pokemon League.$"

RangerOutro:
# 246 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Ugh whatever, just don't fall or\n"
	.string "anything... I hate this job.$"

RangerStandard:
# 251 "data/maps/GildedHollow_1F/scripts.pory"
	.string "You'd really be doing me a favor if\n"
	.string "you could please leave.$"

Psychic1Intro:
# 256 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Hmmm, could you be him?$"

Psychic1Outro:
# 260 "data/maps/GildedHollow_1F/scripts.pory"
	.string "You're not him.$"

Psychic1Standard:
# 264 "data/maps/GildedHollow_1F/scripts.pory"
	.string "I'm going to use my psychic powers to\n"
	.string "find some gold!$"

Psychic2Intro:
# 269 "data/maps/GildedHollow_1F/scripts.pory"
	.string "I'm supposed to be looking for someone,\n"
	.string "but I'd rather not...$"

Psychic2Outro:
# 274 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Yay, now I can just hang out. Thanks!$"

Psychic2Standard:
# 278 "data/maps/GildedHollow_1F/scripts.pory"
	.string "I'm going to stay here and practice my\n"
	.string "dancing for a bit. I'm paid by the hour.$"

PsychicSouthIntro:
# 283 "data/maps/GildedHollow_1F/scripts.pory"
	.string "That's too bad {COLOR BLUE}Robert {COLOR DARK_GRAY}; it looks like\n"
	.string "you'll be coming with us.$"

PsychicNorthIntro:
# 288 "data/maps/GildedHollow_1F/scripts.pory"
	.string "The {COLOR RED}Grand Psychopomp {COLOR DARK_GRAY}does not wish\n"
	.string "you harm, please come peacefully.$"

PsychicWestIntro:
# 293 "data/maps/GildedHollow_1F/scripts.pory"
	.string "I want to try out my new Pokemon.\n"
	.string "Please, choose violence.$"

PsychicEastIntro:
# 298 "data/maps/GildedHollow_1F/scripts.pory"
	.string "I agree, our Pokemon need to be\n"
	.string "battle-hardened to become stronger.\p"
	.string "New plan, we take {COLOR BLUE}Robert {COLOR DARK_GRAY}and toss\n"
	.string "the witnesses over.$"

RobertOffersHealing:
# 305 "data/maps/GildedHollow_1F/scripts.pory"
	.string "{COLOR BLUE}Robert: {COLOR DARK_GRAY}Quick, let me heal your party!$"

Psychic3BattleIntro:
# 309 "data/maps/GildedHollow_1F/scripts.pory"
	.string "{COLOR RED}Hunter: {COLOR DARK_GRAY}You really shouldn't have\n"
	.string "kept hiding for so long.$"

Psychic4BattleIntro:
# 314 "data/maps/GildedHollow_1F/scripts.pory"
	.string "{COLOR RED}Dalton: {COLOR DARK_GRAY}These things better evolve\n"
	.string "soon.$"

Psychic5BattleIntro:
# 319 "data/maps/GildedHollow_1F/scripts.pory"
	.string "$"

Psychic6BattleIntro:
# 323 "data/maps/GildedHollow_1F/scripts.pory"
	.string "$"

blockerText:
# 336 "data/maps/GildedHollow_1F/scripts.pory"
	.string "There's no content beyond this point\n"
	.string "right now. Thanks for playing!$"

dusclopsText:
# 341 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Dusclops!$"

YewComplains:
# 415 "data/maps/GildedHollow_1F/scripts.pory"
	.string "{COLOR BLUE}Yew: {COLOR DARK_GRAY}Hey watch it! This is no place\n"
	.string "to be running around like that.$"

RobertAskForHelp:
# 420 "data/maps/GildedHollow_1F/scripts.pory"
	.string "{COLOR BLUE}???: {COLOR DARK_GRAY}I know, I know! Listen, there are\n"
	.string "people following me. I need help.$"

YewResponse:
# 425 "data/maps/GildedHollow_1F/scripts.pory"
	.string "{COLOR BLUE}Yew: {COLOR DARK_GRAY}Sorry, we don't have time... \n"
	.string "{PLAYER} and I have places\p"
	.string "to be and Pokemon to catch.$"
