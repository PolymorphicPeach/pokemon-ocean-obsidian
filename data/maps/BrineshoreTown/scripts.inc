BrineshoreTown_MapScripts::
# 7 "data/maps/BrineshoreTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BrineshoreTown_OnTransition
	.byte 0


BrineshoreTown_OnTransition::
# 13 "data/maps/BrineshoreTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, BrineshoreTown_OnTransition_1
# 19 "data/maps/BrineshoreTown/scripts.pory"
	setflag FLAG_TEMP_2
	return

BrineshoreTown_OnTransition_1:
# 15 "data/maps/BrineshoreTown/scripts.pory"
	setflag FLAG_TEMP_1
	return


BrineshoreTown_EventScript_FirstBattle::
# 25 "data/maps/BrineshoreTown/scripts.pory"
	trainerbattle_single BRINESHORE_GAURD, FirstBattle_Intro, FirstBattle_Outro
# 26 "data/maps/BrineshoreTown/scripts.pory"
	msgbox FirstBattle_PostBattle, MSGBOX_AUTOCLOSE
	end


BrineshoreTown_BlockTownExit::
# 31 "data/maps/BrineshoreTown/scripts.pory"
	lock
# 32 "data/maps/BrineshoreTown/scripts.pory"
	applymovement 1, face_right
# 33 "data/maps/BrineshoreTown/scripts.pory"
	msgbox TownGuard_CannotLeave, MSGBOX_AUTOCLOSE
# 34 "data/maps/BrineshoreTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, walk_down
# 35 "data/maps/BrineshoreTown/scripts.pory"
	waitmovement 0
# 36 "data/maps/BrineshoreTown/scripts.pory"
	applymovement 1, face_down
# 37 "data/maps/BrineshoreTown/scripts.pory"
	waitmovement 0
# 38 "data/maps/BrineshoreTown/scripts.pory"
	release
	return


BrineshoreTown_Store::
# 42 "data/maps/BrineshoreTown/scripts.pory"
	lock
# 43 "data/maps/BrineshoreTown/scripts.pory"
	faceplayer
# 44 "data/maps/BrineshoreTown/scripts.pory"
	msgbox BrineshoreTown_Store_Text_0
# 45 "data/maps/BrineshoreTown/scripts.pory"
	waitmessage
# 46 "data/maps/BrineshoreTown/scripts.pory"
	pokemart BrineshoreTown_Store_Items
# 47 "data/maps/BrineshoreTown/scripts.pory"
	msgbox BrineshoreTown_Store_Text_1
# 48 "data/maps/BrineshoreTown/scripts.pory"
	release
	return


	.align 2
# 51 "data/maps/BrineshoreTown/scripts.pory"
BrineshoreTown_Store_Items:
# 52 "data/maps/BrineshoreTown/scripts.pory"
	.2byte ITEM_POTION
# 53 "data/maps/BrineshoreTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 54 "data/maps/BrineshoreTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 55 "data/maps/BrineshoreTown/scripts.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

BrineshoreTown_TalkToBoy::
# 59 "data/maps/BrineshoreTown/scripts.pory"
	lock
# 60 "data/maps/BrineshoreTown/scripts.pory"
	faceplayer
# 61 "data/maps/BrineshoreTown/scripts.pory"
	msgbox BoyCantSleep
# 62 "data/maps/BrineshoreTown/scripts.pory"
	waitmessage
# 63 "data/maps/BrineshoreTown/scripts.pory"
	release
	return


BrineshoreTown_TalkToTuber::
# 67 "data/maps/BrineshoreTown/scripts.pory"
	lock
# 68 "data/maps/BrineshoreTown/scripts.pory"
	faceplayer
# 69 "data/maps/BrineshoreTown/scripts.pory"
	goto_if_unset FLAG_ITEM_BRINESHORE_SOFT_SAND, BrineshoreTown_TalkToTuber_2
# 76 "data/maps/BrineshoreTown/scripts.pory"
	msgbox Tuber
# 77 "data/maps/BrineshoreTown/scripts.pory"
	waitmessage
BrineshoreTown_TalkToTuber_1:
# 79 "data/maps/BrineshoreTown/scripts.pory"
	release
	return

BrineshoreTown_TalkToTuber_2:
# 70 "data/maps/BrineshoreTown/scripts.pory"
	msgbox TuberGiveSoftSand
# 71 "data/maps/BrineshoreTown/scripts.pory"
	waitmessage
# 72 "data/maps/BrineshoreTown/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 73 "data/maps/BrineshoreTown/scripts.pory"
	setflag FLAG_ITEM_BRINESHORE_SOFT_SAND
	goto BrineshoreTown_TalkToTuber_1


BrineshoreTown_TalkToGirl::
# 83 "data/maps/BrineshoreTown/scripts.pory"
	lock
# 84 "data/maps/BrineshoreTown/scripts.pory"
	faceplayer
# 85 "data/maps/BrineshoreTown/scripts.pory"
	msgbox Girl
# 86 "data/maps/BrineshoreTown/scripts.pory"
	waitmessage
# 87 "data/maps/BrineshoreTown/scripts.pory"
	release
	return


BrineshoreTown_TalkToMom::
# 91 "data/maps/BrineshoreTown/scripts.pory"
	lock
# 92 "data/maps/BrineshoreTown/scripts.pory"
	faceplayer
# 93 "data/maps/BrineshoreTown/scripts.pory"
	msgbox MomBlockingDoor
# 94 "data/maps/BrineshoreTown/scripts.pory"
	waitmessage
# 95 "data/maps/BrineshoreTown/scripts.pory"
	release
	return


# 98 "data/maps/BrineshoreTown/scripts.pory"
face_up:
# 99 "data/maps/BrineshoreTown/scripts.pory"
	face_up
	step_end

# 102 "data/maps/BrineshoreTown/scripts.pory"
face_right:
# 103 "data/maps/BrineshoreTown/scripts.pory"
	face_right
	step_end

# 106 "data/maps/BrineshoreTown/scripts.pory"
face_down:
# 107 "data/maps/BrineshoreTown/scripts.pory"
	face_down
	step_end

# 110 "data/maps/BrineshoreTown/scripts.pory"
walk_down:
# 111 "data/maps/BrineshoreTown/scripts.pory"
	walk_down
	step_end

# 114 "data/maps/BrineshoreTown/scripts.pory"
faceplayer:
# 115 "data/maps/BrineshoreTown/scripts.pory"
	faceplayer
	step_end

BrineshoreTown_Store_Text_0:
# 44 "data/maps/BrineshoreTown/scripts.pory"
	.string "Anything you like?$"

BrineshoreTown_Store_Text_1:
# 47 "data/maps/BrineshoreTown/scripts.pory"
	.string "Have a nice day!$"

TownGuard_CannotLeave::
# 118 "data/maps/BrineshoreTown/scripts.pory"
	.string "Stop, it's too dangerous to leave\n"
	.string "without a pokemon.$"

FirstBattle_Intro::
# 123 "data/maps/BrineshoreTown/scripts.pory"
	.string "Let's make sure you have what it takes.$"

FirstBattle_Outro::
# 127 "data/maps/BrineshoreTown/scripts.pory"
	.string "Ok...$"

FirstBattle_PostBattle::
# 131 "data/maps/BrineshoreTown/scripts.pory"
	.string "Good luck out there!$"

BoyCantSleep::
# 135 "data/maps/BrineshoreTown/scripts.pory"
	.string "What...? Sorry, I haven't been able\n"
	.string "to sleep lately.\p"
	.string "I've been having too many nightmares.$"

Tuber::
# 140 "data/maps/BrineshoreTown/scripts.pory"
	.string "Mommy has been spending a lot of time\n"
	.string "building a new basement for us!$"

TuberGiveSoftSand::
# 145 "data/maps/BrineshoreTown/scripts.pory"
	.string "Awww, you're leaving soon? Here,\n"
	.string "take this to remember us by!$"

Girl::
# 150 "data/maps/BrineshoreTown/scripts.pory"
	.string "Daddy moved to the big city.\p"
	.string "He says you can't make money here\n"
	.string "ever since the rocks showed up.$"

MomBlockingDoor::
# 156 "data/maps/BrineshoreTown/scripts.pory"
	.string "Not right now, {PLAYER},\n"
	.string "I'm waiting on the exterminator.$"
