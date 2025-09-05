#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGildeas[] =
{
#endif

#if P_FAMILY_BUDBITT
    [SPECIES_BUDBITT] =
    {
        .baseHP        = 45,
        .baseAttack    = 54,
        .baseDefense   = 65,
        .baseSpeed     = 41,
        .baseSpAttack  = 45,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 62,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_STAMINA, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Budbitt"),
        .cryId = CRY_BUDBITT,
        .natDexNum = NATIONAL_DEX_BUDBITT,
        .categoryName = _("Grass Hare"),
        .height = 4,
        .weight = 32,
        // TODO
        .description = COMPOUND_STRING(
            "???\n"
            "???\n"
            "???\n"
            "???"),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Budbitt,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Budbitt,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Budbitt,
        .shinyPalette = gMonShinyPalette_Budbitt,
        .iconSprite = gMonIcon_Budbitt,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Budbitt)
        OVERWORLD(
            sPicTable_Budbitt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Budbitt,
            gShinyOverworldPalette_Budbitt
        )
        .levelUpLearnset = sBudbittLevelUpLearnset,
        .teachableLearnset = sHypnoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_THORNALOPE}),
    },
    [SPECIES_THORNALOPE] =
    {
        .baseHP        = 69,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 68,
        .baseSpAttack  = 55,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 144,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Thornalope"),
        .cryId = CRY_BUDBITT,
        .natDexNum = NATIONAL_DEX_THORNALOPE,
        .categoryName = _("Thorned Hare"),
        .height = 10,
        .weight = 244,
        // TODO
        .description = COMPOUND_STRING(
            "???\n"
            "???\n"
            "???\n"
            "???"),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Thornalope,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .enemyMonElevation = 2,
        .backPic = gMonBackPic_Thornalope,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Thornalope,
        .shinyPalette = gMonShinyPalette_Thornalope,
        .iconSprite = gMonIcon_Thornalope,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_M)
        FOOTPRINT(Thornalope)
        OVERWORLD(
            sPicTable_Thornalope,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sThornalopeLevelUpLearnset,
        .teachableLearnset = sHypnoTeachableLearnset,
    },
#endif //P_FAMILY_BUDBITT

#if P_FAMILY_HYPMAREA
    [SPECIES_HYPMAREA] =
    {
        .baseHP        = 91,
        .baseAttack    = 55,
        .baseDefense   = 83,
        .baseSpeed     = 70,
        .baseSpAttack  = 116,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_WATER),
        .catchRate = 45,
        .expYield = 265,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Hypmarea"),
        .cryId = CRY_HYPNO,
        .natDexNum = NATIONAL_DEX_HYPMAREA,
        .categoryName = _("Hypnosis"),
               .height = 16,
        .weight = 756,
        // TODO
        .description = COMPOUND_STRING(
            "The arcing movement and glitter of the\n"
            "pendulum in a Hypno's hand lull the foe\n"
            "into deep hypnosis. While searching for\n"
            "prey, it polishes the pendulum."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hypmarea,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hypmarea,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Hypmarea,
        .shinyPalette = gMonShinyPalette_Hypmarea,
        .iconSprite = gMonIcon_Hypmarea,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Hypmarea)
        OVERWORLD(
            sPicTable_Hypmarea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hypmarea,
            gShinyOverworldPalette_Hypmarea
        )
        .levelUpLearnset = sHypnoLevelUpLearnset,
        .teachableLearnset = sHypnoTeachableLearnset,
    },
#endif //P_FAMILY_HANAZEKI

#ifdef __INTELLISENSE__
};
#endif