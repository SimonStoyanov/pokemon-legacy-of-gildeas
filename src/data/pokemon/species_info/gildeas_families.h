#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGildeas[] =
{
#endif

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
        .iconPalIndex = 0,
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