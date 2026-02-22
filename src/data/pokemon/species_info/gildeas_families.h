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
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_STAMINA, ABILITY_EFFECT_SPORE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Budbitt"),
        .cryId = CRY_BUDBITT,
        .natDexNum = NATIONAL_DEX_BUDBITT,
        .categoryName = _("Grass Hare"),
        .height = 4,
        .weight = 32,
        // TODO
        .description = COMPOUND_STRING(
            "It hides among wildflowers, mimicking buds.\n" 
            "When it feels safe, it hops about and\n" 
            "scatters seeds that enrich the soil\n"),
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
        .teachableLearnset = sBudbittTeachableLearnset,
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
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_STAMINA, ABILITY_EFFECT_SPORE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Thornalope"),
        .cryId = CRY_BUDBITT,
        .natDexNum = NATIONAL_DEX_THORNALOPE,
        .categoryName = _("Thorned Hare"),
        .height = 15,
        .weight = 244,
        // TODO
        .description = COMPOUND_STRING(
            "Its body blooms with bright flowers.\n" 
            "It camouflages in meadows and spreads\n" 
            "pollen that fosters forest growth.\n"),
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
        .backPicYOffset = 3,
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
        .teachableLearnset = sBudbittTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_SYLVAGARD}),
    },
    [SPECIES_SYLVAGARD] =
    {
        .baseHP        = 90,
        .baseAttack    = 102,
        .baseDefense   = 110,
        .baseSpeed     = 80,
        .baseSpAttack  = 60,
        .baseSpDefense = 88,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 263,
        .evYield_Defense = 2,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_STAMINA, ABILITY_EFFECT_SPORE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sylvagard"),
        .cryId = CRY_BUDBITT,
        .natDexNum = NATIONAL_DEX_SYLVAGARD,
        .categoryName = _("Protector"),
        .height = 22,
        .weight = 940,
        // TODO
        .description = COMPOUND_STRING(
            "A guardian of ancient woods. Cloaked\n"
            "in leaves and crowned with antlers, it\n"
            "defends nature with its mighty shield\n"),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sylvagard,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .enemyMonElevation = 2,
        .backPic = gMonBackPic_Sylvagard,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sylvagard,
        .shinyPalette = gMonShinyPalette_Sylvagard,
        .iconSprite = gMonIcon_Sylvagard,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Sylvagard)
        OVERWORLD(
            sPicTable_Sylvagard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sSylvagardLevelUpLearnset,
        .teachableLearnset = sBudbittTeachableLearnset,
    },
#endif //P_FAMILY_BUDBITT

#if P_FAMILY_GLISCALE
    [SPECIES_GLISCALE] =
    {
        .baseHP        = 52,
        .baseAttack    = 45,
        .baseDefense   = 52,
        .baseSpeed     = 52,
        .baseSpAttack  = 64,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_BLAZE, ABILITY_BLAZE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Gliscale"),
        .cryId = CRY_GLISCALE,
        .natDexNum = NATIONAL_DEX_GLISCALE,
        .categoryName = _("Fire Snake"),
        .height = 5,
        .weight = 36,
        // TODO
        .description = COMPOUND_STRING(
            "It warms itself by curling into small fire\n"
            "pits, resembling a glowing ember coil."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gliscale,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Gliscale,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Gliscale,
        .shinyPalette = gMonShinyPalette_Gliscale,
        .iconSprite = gMonIcon_Gliscale,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, -12, SHADOW_SIZE_L)
        FOOTPRINT(Gliscale)
        OVERWORLD(
            sPicTable_Gliscale,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gliscale,
            gShinyOverworldPalette_Gliscale
        )
        .levelUpLearnset = sGliscaleLevelUpLearnset,
        .teachableLearnset = sGliscaleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_PYROSHED}),
    },
    [SPECIES_PYROSHED] =
    {
        .baseHP        = 77,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 72,
        .baseSpAttack  = 84,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_BLAZE, ABILITY_BLAZE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Pyroshed"),
        .cryId = CRY_GLISCALE,
        .natDexNum = NATIONAL_DEX_GLISCALE,
        .categoryName = _("Forge Snake"),
        .height = 12,
        .weight = 248,
        // TODO
        .description = COMPOUND_STRING(
            "Pyroshed’s steel plates grow as it sheds its\n"
            "skin, forging a stronger armor each time.\n"
            "The fire inside burns hotter with every molt."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pyroshed,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Pyroshed,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pyroshed,
        .shinyPalette = gMonShinyPalette_Pyroshed,
        .iconSprite = gMonIcon_Pyroshed,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_L)
        FOOTPRINT(Pyroshed)
        OVERWORLD(
            sPicTable_Pyroshed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pyroshed,
            gShinyOverworldPalette_Pyroshed
        )
        .levelUpLearnset = sPyroshedLevelUpLearnset,
        .teachableLearnset = sGliscaleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_FURNACOBRA}),
    },
    [SPECIES_FURNACOBRA] =
    {
        .baseHP        = 92,
        .baseAttack    = 68,
        .baseDefense   = 95,
        .baseSpeed     = 88,
        .baseSpAttack  = 115,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_FIRE, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 263,
        .evYield_SpAttack = 2,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_BLAZE, ABILITY_BLAZE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Furnacobra"),
        .cryId = CRY_GLISCALE,
        .natDexNum = NATIONAL_DEX_GLISCALE,
        .categoryName = _("Armorer"),
        .height = 19,
        .weight = 758,
        // TODO
        .description = COMPOUND_STRING(
            "Inside its chest burns a volcanic furnace hot\n"
            "enough to melt titanium. It vents black smoke\n"
            "through its horn, signaling the completion of\n"
            "new armor growing beneath its scales."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Furnacobra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Furnacobra,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Furnacobra,
        .shinyPalette = gMonShinyPalette_Furnacobra,
        .iconSprite = gMonIcon_Furnacobra,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Furnacobra)
        OVERWORLD(
            sPicTable_Furnacobra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Furnacobra,
            gShinyOverworldPalette_Furnacobra
        )
        .levelUpLearnset = sFurnacobraLevelUpLearnset,
        .teachableLearnset = sGliscaleTeachableLearnset,
    },
#endif //P_FAMILY_GLISCALE

#if P_FAMILY_BUCCANUB
    [SPECIES_BUCCANUB] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_TORRENT, ABILITY_TORRENT, ABILITY_SHARPNESS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Buccanub"),
        .cryId = CRY_BUCCANUB,
        .natDexNum = NATIONAL_DEX_BUCCANUB,
        .categoryName = _("Cadet Shark"),
        .height = 5,
        .weight = 36,
        // TODO
        .description = COMPOUND_STRING(
            "It salutes stronger Pokémon as both a\n"
            "challenge and a sign of respect before\n"
            "launching swift and sharp strikes."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Buccanub,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Buccanub,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Buccanub,
        .shinyPalette = gMonShinyPalette_Buccanub,
        .iconSprite = gMonIcon_Buccanub,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_L)
        FOOTPRINT(Buccanub)
        OVERWORLD(
            sPicTable_Buccanub,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Buccanub,
            gShinyOverworldPalette_Buccanub
        )
        .levelUpLearnset = sBuccanubLevelUpLearnset,
        .teachableLearnset = sBuccanubTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_PYROSHED}),
    },/*
    [SPECIES_PYROSHED] =
    {
        .baseHP        = 77,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 72,
        .baseSpAttack  = 84,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_BLAZE, ABILITY_BLAZE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Pyroshed"),
        .cryId = CRY_GLISCALE,
        .natDexNum = NATIONAL_DEX_GLISCALE,
        .categoryName = _("Forge Snake"),
        .height = 12,
        .weight = 248,
        // TODO
        .description = COMPOUND_STRING(
            "Pyroshed’s steel plates grow as it sheds its\n"
            "skin, forging a stronger armor each time.\n"
            "The fire inside burns hotter with every molt."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pyroshed,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Pyroshed,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pyroshed,
        .shinyPalette = gMonShinyPalette_Pyroshed,
        .iconSprite = gMonIcon_Pyroshed,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_L)
        FOOTPRINT(Pyroshed)
        OVERWORLD(
            sPicTable_Pyroshed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pyroshed,
            gShinyOverworldPalette_Pyroshed
        )
        .levelUpLearnset = sPyroshedLevelUpLearnset,
        .teachableLearnset = sGliscaleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_FURNACOBRA}),
    },
    [SPECIES_FURNACOBRA] =
    {
        .baseHP        = 92,
        .baseAttack    = 68,
        .baseDefense   = 95,
        .baseSpeed     = 88,
        .baseSpAttack  = 115,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_FIRE, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 263,
        .evYield_SpAttack = 2,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_BLAZE, ABILITY_BLAZE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Furnacobra"),
        .cryId = CRY_GLISCALE,
        .natDexNum = NATIONAL_DEX_GLISCALE,
        .categoryName = _("Armorer"),
        .height = 19,
        .weight = 758,
        // TODO
        .description = COMPOUND_STRING(
            "Inside its chest burns a volcanic furnace hot\n"
            "enough to melt titanium. It vents black smoke\n"
            "through its horn, signaling the completion of\n"
            "new armor growing beneath its scales."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Furnacobra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Furnacobra,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Furnacobra,
        .shinyPalette = gMonShinyPalette_Furnacobra,
        .iconSprite = gMonIcon_Furnacobra,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Furnacobra)
        OVERWORLD(
            sPicTable_Furnacobra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Furnacobra,
            gShinyOverworldPalette_Furnacobra
        )
        .levelUpLearnset = sFurnacobraLevelUpLearnset,
        .teachableLearnset = sGliscaleTeachableLearnset,
    },*/
#endif //P_FAMILY_BUCCANUB

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