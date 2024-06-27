const struct Trainer gBattlePartners[] = {
    [PARTNER_NONE] =
    {
        .party = NULL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
    },

    [PARTNER_STEVEN] =
    {
        .party = TRAINER_PARTY(sParty_StevenPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .trainerName = _("STEVEN"),
    },

    [PARTNER_YEW1] = {
        .party = TRAINER_PARTY(Party_YewPartner),
        .trainerPic = TRAINER_BACK_PIC_YEW,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .trainerName = _("Yew")
    },

    [PARTNER_ROBERT1] = {
        .party = TRAINER_PARTY(Party_RobertPartner),
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .trainerName = _("Robert")
    }
};
