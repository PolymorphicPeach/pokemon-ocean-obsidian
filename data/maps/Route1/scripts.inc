Route1_MapScripts::
# 2 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_OnTransition
	.byte 0


Route1_OnTransition::
	return


tryMulti::
	return


GildedHollow_Sign::
# 18 "data/maps/Route1/scripts.pory"
	msgbox Text_GildedHollow_Sign, MSGBOX_SIGN
	return


Route1_Tuber::
# 22 "data/maps/Route1/scripts.pory"
	trainerbattle_double ROUTE1_TUBER, TuberIntro, TuberOutro, NeedPokemon
# 23 "data/maps/Route1/scripts.pory"
	msgbox TuberStandard, MSGBOX_NPC
	return


Route1_GameboyKid::
# 27 "data/maps/Route1/scripts.pory"
	trainerbattle_double ROUTE1_GAMEBOYKID, GameboyKidIntro, GameboyKidOutro, NeedPokemon
# 28 "data/maps/Route1/scripts.pory"
	msgbox GameboyKidStandard, MSGBOX_NPC
	return


Route1_Fisherman::
# 32 "data/maps/Route1/scripts.pory"
	trainerbattle_double ROUTE1_FISHERMAN, FishermanIntro, FishermanOutro, NeedPokemon
# 33 "data/maps/Route1/scripts.pory"
	msgbox FishermanStandard, MSGBOX_NPC
	return


Route1_Beauty::
# 37 "data/maps/Route1/scripts.pory"
	trainerbattle_double ROUTE1_BEAUTY, BeautyIntro, BeautyOutro, NeedPokemon
# 38 "data/maps/Route1/scripts.pory"
	msgbox BeautyStandard, MSGBOX_NPC
	return


Route1_Ninja::
# 42 "data/maps/Route1/scripts.pory"
	trainerbattle_double ROUTE1_NINJA, NinjaIntro, NinjaOutro, NeedPokemon
# 43 "data/maps/Route1/scripts.pory"
	msgbox NinjaStandard, MSGBOX_NPC
	return


Route1_AromaLady::
# 47 "data/maps/Route1/scripts.pory"
	trainerbattle_double ROUTE1_AROMALADY, AromaLadyIntro, AromaLadyOutro, NeedPokemon
# 48 "data/maps/Route1/scripts.pory"
	msgbox AromaLadyStandard, MSGBOX_NPC
	return


TuberIntro::
# 51 "data/maps/Route1/scripts.pory"
	.string "We're on vacation!$"

TuberOutro::
# 55 "data/maps/Route1/scripts.pory"
	.string "The water here is so pretty!$"

TuberStandard::
# 59 "data/maps/Route1/scripts.pory"
	.string "My Grandma lives just north of here.\n"
	.string "I bet she'll let you take a rest!$"

GameboyKidIntro::
# 64 "data/maps/Route1/scripts.pory"
	.string "Ugh, go away. I just want to play\n"
	.string "Digimon in peace.$"

GameboyKidOutro::
# 69 "data/maps/Route1/scripts.pory"
	.string "I wish Digimon were real...$"

GameboyKidStandard::
# 73 "data/maps/Route1/scripts.pory"
	.string "Do you really live here? This place is\n"
	.string "in the middle of nowhere.$"

FishermanIntro::
# 78 "data/maps/Route1/scripts.pory"
	.string "Nice weather we're having, huh?$"

FishermanOutro::
# 82 "data/maps/Route1/scripts.pory"
	.string "Did I forget to put sunscreen on?$"

FishermanStandard::
# 86 "data/maps/Route1/scripts.pory"
	.string "I want to have fried Goldeen tacos\n"
	.string "tonight, but my mother-in-law\l"
	.string "won't allow it.$"

BeautyIntro::
# 92 "data/maps/Route1/scripts.pory"
	.string "You, local urchin, did you steal my\n"
	.string "sunglasses?!$"

BeautyOutro::
# 97 "data/maps/Route1/scripts.pory"
	.string "You're lucky that I only commit\n"
	.string "white-collar crimes.$"

BeautyStandard::
# 102 "data/maps/Route1/scripts.pory"
	.string "My mother lives right over there\n"
	.string "She'll love your hick-ish charm.$"

NinjaIntro::
# 107 "data/maps/Route1/scripts.pory"
	.string "You fell right into my trap!$"

NinjaOutro::
# 111 "data/maps/Route1/scripts.pory"
	.string "Uhhh, do you think I could have the\n"
	.string "bait back?$"

NinjaStandard::
# 116 "data/maps/Route1/scripts.pory"
	.string "I'll just have to find something else\n"
	.string "to lure passerby.$"

AromaLadyIntro::
# 121 "data/maps/Route1/scripts.pory"
	.string "Are you trying to steal my flowers.$"

AromaLadyOutro::
# 125 "data/maps/Route1/scripts.pory"
	.string "It's fine; I already picked them!\n"
	.string "There may be some seeds left.$"

AromaLadyStandard::
# 130 "data/maps/Route1/scripts.pory"
	.string "this coast grows the prettiest flowers!$"

NeedPokemon::
# 134 "data/maps/Route1/scripts.pory"
	.string "You don't have enough Pokemon\n"
	.string "for a double battle.$"

Text_GildedHollow_Sign:
# 139 "data/maps/Route1/scripts.pory"
	.string "{COLOR BLUE}Gilded Hollow\n"
	.string "{COLOR RED}DANGER: Do Not Enter$"
