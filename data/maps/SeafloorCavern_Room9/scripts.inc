# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE, 1
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_ARCHIE, 2
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_MAXIE, 3
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_1, 4
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_2, 5
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE_SLEEPING, 7
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0
# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8004
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE_SLEEPING
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hold it right there.$"
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Behold!\p"
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient POKéMON KYOGRE!\p"
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\p"
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this RED ORB, I can make KYOGRE…$"
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB suddenly began shining\n"
# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: What?!\p"
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the RED ORB…\p"
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did KYOGRE go?$"
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hm? It's a message from our\n"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "members outside…$"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Yes, what is it?\p"
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Good… That should have happened.\n"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That is why we awakened KYOGRE,\l"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to realize TEAM AQUA's vision of\l"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "expanding the sea.\p"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That can't be…\n"
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's just not possible…\p"
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: There's something wrong…\p"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB is supposed to awaken\n"
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and control KYOGRE…\p"
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But… Why?\n"
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did KYOGRE disappear?\p"
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why?!$"
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: What have you wrought?\p"
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE… You've finally awoken KYOGRE,\n"
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: W-what?!\n"
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, TEAM MAGMA, that\n"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "infuriated GROUDON?\p"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So long as I have this RED ORB,\n"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control KYOGRE…\p"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control it…$"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: We don't have the time to\n"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\p"
# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\n"
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: {PLAYER}, come on, you have\n"
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"
