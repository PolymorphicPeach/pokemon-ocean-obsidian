GildedHollow_1F_MapScripts::
# 2 "data/maps/GildedHollow_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GildedHollow_1F_OnTransition
	.byte 0


GildedHollow_1F_OnTransition::
# 6 "data/maps/GildedHollow_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE_1
# 7 "data/maps/GildedHollow_1F/scripts.pory"
	setflag FLAG_ROBERT_JOINED_PARTY
	return


GH_Hiker::
# 11 "data/maps/GildedHollow_1F/scripts.pory"
	trainerbattle_double GH_HIKER, HikerIntro, HikerOutro, NeedPokemon
# 12 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox HikerStandard, MSGBOX_NPC
	return


GH_CoolTrainer::
# 16 "data/maps/GildedHollow_1F/scripts.pory"
	trainerbattle_double GH_COOLTRAINER, CoolTrainerIntro, CoolTrainerOutro, NeedPokemon
# 18 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox CoolTrainerStandard, MSGBOX_NPC
# 19 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 7, face_away_player
# 21 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 7
# 23 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox PushHimText, MSGBOX_YESNO
# 26 "data/maps/GildedHollow_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GH_CoolTrainer_2
GH_CoolTrainer_1:
# 34 "data/maps/GildedHollow_1F/scripts.pory"
	release
	return

GH_CoolTrainer_2:
# 27 "data/maps/GildedHollow_1F/scripts.pory"
	applymovement 7, PushPerson
# 28 "data/maps/GildedHollow_1F/scripts.pory"
	playse SE_FALL
# 29 "data/maps/GildedHollow_1F/scripts.pory"
	waitmovement 7
# 30 "data/maps/GildedHollow_1F/scripts.pory"
	setflag FLAG_GH_PUSHED_PERSON
# 31 "data/maps/GildedHollow_1F/scripts.pory"
	removeobject 7
# 32 "data/maps/GildedHollow_1F/scripts.pory"
	playse SE_M_SELF_DESTRUCT
	goto GH_CoolTrainer_1


GH_Ranger::
# 38 "data/maps/GildedHollow_1F/scripts.pory"
	trainerbattle_double GH_RANGER, RangerIntro, RangerOutro, NeedPokemon
# 39 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox RangerStandard, MSGBOX_NPC
	return


GH_Psychic1::
# 43 "data/maps/GildedHollow_1F/scripts.pory"
	trainerbattle_double GH_PSYCHIC1, Psychic1Intro, Psychic1Outro, NeedPokemon
# 44 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox Psychic1Standard, MSGBOX_NPC
	return


GH_Psychic2::
# 48 "data/maps/GildedHollow_1F/scripts.pory"
	trainerbattle_double GH_PSYCHIC2, Psychic2Intro, Psychic2Outro, NeedPokemon
# 49 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox Psychic2Standard, MSGBOX_NPC
	return


TalkToBlocker::
# 137 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox blockerText, MSGBOX_NPC
	return


TalkToDusclops::
# 141 "data/maps/GildedHollow_1F/scripts.pory"
	msgbox dusclopsText, MSGBOX_NPC
	return


# 155 "data/maps/GildedHollow_1F/scripts.pory"
CameraSouth:
# 156 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 156 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 156 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 156 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 156 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
	step_end

# 159 "data/maps/GildedHollow_1F/scripts.pory"
CameraNorth:
# 160 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 160 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 160 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 160 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 160 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 160 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 160 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 160 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 161 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
	step_end

# 164 "data/maps/GildedHollow_1F/scripts.pory"
CameraWest:
# 165 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 165 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 165 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 165 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 165 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_down
# 166 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
	step_end

# 169 "data/maps/GildedHollow_1F/scripts.pory"
CameraEast:
# 170 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_right
# 170 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_right
# 170 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_right
# 170 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_right
# 171 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
	step_end

# 174 "data/maps/GildedHollow_1F/scripts.pory"
CameraReset:
# 175 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 176 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 176 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
	step_end

# 179 "data/maps/GildedHollow_1F/scripts.pory"
face_left:
# 180 "data/maps/GildedHollow_1F/scripts.pory"
	face_left
	step_end

# 183 "data/maps/GildedHollow_1F/scripts.pory"
face_away_player:
# 184 "data/maps/GildedHollow_1F/scripts.pory"
	face_away_player
	step_end

# 187 "data/maps/GildedHollow_1F/scripts.pory"
PushPerson:
# 188 "data/maps/GildedHollow_1F/scripts.pory"
	jump_2_right
	step_end

# 191 "data/maps/GildedHollow_1F/scripts.pory"
RobertRunLeft:
# 192 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 192 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 193 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 193 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 193 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 193 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 193 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 194 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 194 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 194 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 194 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_up
# 195 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
	step_end

# 198 "data/maps/GildedHollow_1F/scripts.pory"
RobertRecoilRight:
# 199 "data/maps/GildedHollow_1F/scripts.pory"
	jump_special_right
# 200 "data/maps/GildedHollow_1F/scripts.pory"
	walk_left
	step_end

# 203 "data/maps/GildedHollow_1F/scripts.pory"
YewMoveLeft:
# 204 "data/maps/GildedHollow_1F/scripts.pory"
	walk_fast_left
# 205 "data/maps/GildedHollow_1F/scripts.pory"
	face_right
	step_end

# 208 "data/maps/GildedHollow_1F/scripts.pory"
emote_exclamation_mark:
# 209 "data/maps/GildedHollow_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 212 "data/maps/GildedHollow_1F/scripts.pory"
fly_down:
# 213 "data/maps/GildedHollow_1F/scripts.pory"
	fly_down
	step_end

# 216 "data/maps/GildedHollow_1F/scripts.pory"
PsychicNorthMoveIn:
# 217 "data/maps/GildedHollow_1F/scripts.pory"
	walk_slow_down
# 217 "data/maps/GildedHollow_1F/scripts.pory"
	walk_slow_down
	step_end

# 220 "data/maps/GildedHollow_1F/scripts.pory"
PsychicWestMoveIn:
# 221 "data/maps/GildedHollow_1F/scripts.pory"
	walk_slow_up
# 221 "data/maps/GildedHollow_1F/scripts.pory"
	walk_slow_up
	step_end

HikerIntro:
# 61 "data/maps/GildedHollow_1F/scripts.pory"
	.string "My family used to work in here.\n"
	.string "I wanted to see this place for myself.$"

HikerOutro:
# 66 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Thank you, the battle was\n"
	.string "a nice distraction.$"

HikerStandard:
# 71 "data/maps/GildedHollow_1F/scripts.pory"
	.string "My father and his father died of\n"
	.string "black-lung because of this old mine$"

CoolTrainerIntro:
# 76 "data/maps/GildedHollow_1F/scripts.pory"
	.string "AAAAAAHHHH!!!$"

CoolTrainerOutro:
# 80 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Sorry, I thought you were trying to\n"
	.string "push me!$"

CoolTrainerStandard:
# 85 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Hey again! Cool place, huh?\n"
	.string "I wonder how far down it goes.$"

PushHimText:
# 90 "data/maps/GildedHollow_1F/scripts.pory"
	.string "{COLOR RED}Push him?$"

RangerIntro:
# 94 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Excuse me, this place is off-limits\n"
	.string "by decree of the Pokemon League.$"

RangerOutro:
# 99 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Ugh whatever, just don't fall or\n"
	.string "anything... I hate this job.$"

RangerStandard:
# 104 "data/maps/GildedHollow_1F/scripts.pory"
	.string "You'd really be doing me a favor if\n"
	.string "you could please leave.$"

Psychic1Intro:
# 109 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Hmmm, could you be him?$"

Psychic1Outro:
# 113 "data/maps/GildedHollow_1F/scripts.pory"
	.string "You're not him.$"

Psychic1Standard:
# 117 "data/maps/GildedHollow_1F/scripts.pory"
	.string "I'm going to use my psychic powers to\n"
	.string "find some gold!$"

Psychic2Intro:
# 122 "data/maps/GildedHollow_1F/scripts.pory"
	.string "I'm supposed to be looking for someone,\n"
	.string "but I'd rather not...$"

Psychic2Outro:
# 127 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Yay, now I can just hang out. Thanks!$"

Psychic2Standard:
# 131 "data/maps/GildedHollow_1F/scripts.pory"
	.string "I'm going to stay here and practice my\n"
	.string "dancing for a bit. I'm paid by the hour.$"

blockerText::
# 145 "data/maps/GildedHollow_1F/scripts.pory"
	.string "There's no content beyond this point\n"
	.string "right now. Thanks for playing!$"

dusclopsText::
# 150 "data/maps/GildedHollow_1F/scripts.pory"
	.string "Dusclops!$"

YewComplains:
# 224 "data/maps/GildedHollow_1F/scripts.pory"
	.string "{COLOR BLUE}Yew: {COLOR DARK_GRAY}Hey watch it! This is no place\n"
	.string "to be running around like that.$"

RobertAskForHelp:
# 229 "data/maps/GildedHollow_1F/scripts.pory"
	.string "{COLOR BLUE}???: {COLOR DARK_GRAY}I know, I know! Listen, there are\n"
	.string "people following me. I need help.$"

YewResponse:
# 234 "data/maps/GildedHollow_1F/scripts.pory"
	.string "{COLOR BLUE}Yew: {COLOR DARK_GRAY}Sorry, we don't have time... \n"
	.string "{PLAYER} and I have places\p"
	.string "to be and Pokemon to catch.$"
