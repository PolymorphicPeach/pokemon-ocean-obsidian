static const struct TrainerMon sParty_StevenPartner[] = {
    {
        .species = SPECIES_METANG,
        .lvl = 42,
        .nature = NATURE_BRAVE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
        .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_METAL_CLAW},
    },
    {
        .species = SPECIES_SKARMORY,
        .lvl = 43,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
        .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_PROTECT, MOVE_STEEL_WING},
    },
    {
        .species = SPECIES_AGGRON,
        .lvl = 44,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
        .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW},
    }
};

static const struct TrainerMon Party_YewPartner[] = {
    {
        .species = SPECIES_BONSLY,
        .lvl = 15,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_CAREFUL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 0, 100),
        .moves = {MOVE_TAKE_DOWN, MOVE_LOW_KICK, MOVE_ROCK_THROW, MOVE_PROTECT}
    },
    {
        .species = SPECIES_PIKACHU,
        .lvl = 12,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(10, 10, 10, 10, 10, 10),
        .moves = {MOVE_ELECTRO_BALL, MOVE_ELECTROWEB, MOVE_FAKE_OUT, MOVE_GRASS_KNOT}
    },
    {
        .species = SPECIES_PIDGEY,
        .lvl = 14,
        .ability = ABILITY_KEEN_EYE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(50, 50, 0, 50, 0, 0),
        .moves = {MOVE_QUICK_ATTACK, MOVE_U_TURN, MOVE_AERIAL_ACE, MOVE_PROTECT}
    }
};

static const struct TrainerMon Party_RobertPartner[] = {
    {
        .species = SPECIES_ABRA,
        .lvl = 13,
        .ability = ABILITY_MAGIC_GUARD,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(100, 0, 0, 50, 0, 0),
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_GUARD_SWAP, MOVE_PROTECT}
    },
    {
        .species = SPECIES_BALTOY,
        .lvl = 13,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(50, 0, 10, 0, 10, 10),
        .moves = {MOVE_PSYBEAM, MOVE_SCORCHING_SANDS, MOVE_FLASH, MOVE_REFLECT}
    },
    {
        .species = SPECIES_MIME_JR,
        .lvl = 13,
        .ability = ABILITY_FILTER,
        .nature = NATURE_QUIET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(30, 30, 10, 0, 30, 10),
        .moves = {MOVE_FAKE_OUT, MOVE_ICY_WIND, MOVE_CONFUSION, MOVE_BRICK_BREAK}
    }
};