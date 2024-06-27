# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_MATT, 1
# 3 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_SUBMARINE, 4
# 4 "data/maps/AquaHideout_B2F/scripts.pory"

# 5 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_MapScripts::
# 6 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
	.byte 0
# 8 "data/maps/AquaHideout_B2F/scripts.pory"

# 9 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition:
# 10 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 12 "data/maps/AquaHideout_B2F/scripts.pory"

# 13 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventMattNoticing::
# 14 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 16 "data/maps/AquaHideout_B2F/scripts.pory"

# 17 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_MATT
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_SUBMARINE
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 21 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 23 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 26 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 28 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 29 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 31 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 33 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 34 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 35 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 39 "data/maps/AquaHideout_B2F/scripts.pory"

# 40 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 46 "data/maps/AquaHideout_B2F/scripts.pory"

# 47 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 54 "data/maps/AquaHideout_B2F/scripts.pory"

# 55 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 57 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 59 "data/maps/AquaHideout_B2F/scripts.pory"

# 60 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 61 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 64 "data/maps/AquaHideout_B2F/scripts.pory"

# 65 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 66 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 69 "data/maps/AquaHideout_B2F/scripts.pory"

# 70 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattIntro:
# 71 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\p"
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Got here already, did you?\n"
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We underestimated you!\p"
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But this is it!\p"
# 75 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm a cut above the GRUNTS you've seen\n"
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "so far.\p"
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm not stalling for time.\n"
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm going to pulverize you!$"
# 79 "data/maps/AquaHideout_B2F/scripts.pory"

# 80 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat:
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "So, I lost, too…$"
# 83 "data/maps/AquaHideout_B2F/scripts.pory"

# 84 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 85 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "While I was toying with you, our BOSS\n"
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "got through his preparations!$"
# 88 "data/maps/AquaHideout_B2F/scripts.pory"

# 89 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle:
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Our BOSS has already gone on his way to\n"
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "some cave under the sea!\p"
# 93 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If you're going to give chase, you'd\n"
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "better search the big, wide sea beyond\l"
# 95 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "LILYCOVE.\p"
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But will you find it then?\n"
# 97 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!$"
# 98 "data/maps/AquaHideout_B2F/scripts.pory"

# 99 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 101 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 102 "data/maps/AquaHideout_B2F/scripts.pory"

# 103 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 104 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 106 "data/maps/AquaHideout_B2F/scripts.pory"

# 107 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 108 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "BOSS…\n"
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 110 "data/maps/AquaHideout_B2F/scripts.pory"

# 111 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 112 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the HIDEOUT's pride\n"
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 118 "data/maps/AquaHideout_B2F/scripts.pory"

# 119 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 122 "data/maps/AquaHideout_B2F/scripts.pory"

# 123 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 125 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the MASTER BALL.\p"
# 126 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our BOSS will\n"
# 127 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 128 "data/maps/AquaHideout_B2F/scripts.pory"

# 129 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined TEAM AQUA, the first\n"
# 131 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 132 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 133 "data/maps/AquaHideout_B2F/scripts.pory"

# 134 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 135 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 137 "data/maps/AquaHideout_B2F/scripts.pory"

# 138 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 140 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"
