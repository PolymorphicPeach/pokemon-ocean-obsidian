BrineshoreTown_Lighthouse_1F_MapScripts::
# 5 "data/maps/BrineshoreTown_Lighthouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BrineshoreTown_Lighthouse_1F_OnTransition
	.byte 0


BrineshoreTown_Lighthouse_1F_OnTransition::
	return


BrineshoreTown_Lighthouse_1F_Rest::
# 13 "data/maps/BrineshoreTown_Lighthouse_1F/scripts.pory"
	lock
# 14 "data/maps/BrineshoreTown_Lighthouse_1F/scripts.pory"
	msgbox BrineshoreTown_Lighthouse_1F_Rest_Text_0, MSGBOX_YESNO
# 15 "data/maps/BrineshoreTown_Lighthouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrineshoreTown_Lighthouse_1F_Rest_2
BrineshoreTown_Lighthouse_1F_Rest_1:
# 21 "data/maps/BrineshoreTown_Lighthouse_1F/scripts.pory"
	release
	return

BrineshoreTown_Lighthouse_1F_Rest_2:
# 16 "data/maps/BrineshoreTown_Lighthouse_1F/scripts.pory"
	special HealPlayerParty
# 17 "data/maps/BrineshoreTown_Lighthouse_1F/scripts.pory"
	playfanfare MUS_RG_HEAL
	goto BrineshoreTown_Lighthouse_1F_Rest_1


SetFollower::
# 25 "data/maps/BrineshoreTown_Lighthouse_1F/scripts.pory"
	lock
# 26 "data/maps/BrineshoreTown_Lighthouse_1F/scripts.pory"
	faceplayer
# 27 "data/maps/BrineshoreTown_Lighthouse_1F/scripts.pory"
	setfollower 1, VAR_TEMP_D
# 28 "data/maps/BrineshoreTown_Lighthouse_1F/scripts.pory"
	release
	end


BrineshoreTown_Lighthouse_1F_Rest_Text_0:
# 14 "data/maps/BrineshoreTown_Lighthouse_1F/scripts.pory"
	.string "Would you like to rest and heal your party?$"
