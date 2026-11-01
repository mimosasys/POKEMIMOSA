#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGMimosa[] =
{
#endif

// Alpacoil --> Alpachrome --> Llamalloy
[SPECIES_ALPACOIL] = 
{
	.baseHP        = 60,
	.baseAttack    = 40,
	.baseDefense   = 57,
	.baseSpeed     = 62,
	.baseSpAttack  = 48,
	.baseSpDefense = 47,
	.types = MON_TYPES(TYPE_STEEL, TYPE_NORMAL),
	.catchRate = 45,
	.expYield = 64,
	.evYield_Speed = 1,
	.genderRatio = PERCENT_FEMALE(12.5),
	.eggCycles = 20,
	.friendship = STANDARD_FRIENDSHIP,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
	.abilities = {ABILITY_FUR_COAT, ABILITY_MAGIC_BOUNCE},
	.bodyColor = BODY_COLOR_WHITE,
	.speciesName = _("Alpacoil"),
	.cryId = CRY_NONE,
	.natDexNum = NATIONAL_DEX_ALPACOIL, 
	.categoryName = _("Steel Wool"),
	.height = 6,
	.weight = 150,
	.description = COMPOUND_STRING(
		"This little cria loves to cuddle!\n"
        "Though, its fur is very rough. It\n"
        "has a habit of rubbing itself against\n"
        "rocks until polished shiny."),
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
	.frontPic = gMonFrontPic_CircledQuestionMark,
	.frontPicSize = MON_COORDS_SIZE(64, 64),
	.frontPicYOffset = 0,
	//.frontAnimFrames = sAnims_SingleFramePlaceHolder,
	//.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
	.backPic = gMonBackPic_CircledQuestionMark,
	.backPicYOffset = 0,
	//.backAnimId = BACK_ANIM_NONE,
	.palette = gMonPalette_CircledQuestionMark,
	.shinyPalette = gMonShinyPalette_CircledQuestionMark,
	.iconSprite = gMonIcon_QuestionMark,
	.iconPalIndex = 4,
	.levelUpLearnset = sNoneLevelUpLearnset,
	.teachableLearnset = sNoneTeachableLearnset,
	.evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_ALPACHROME}),
},
[SPECIES_ALPACHROME] = 
{
	.baseHP        = 72,
	.baseAttack    = 57,
	.baseDefense   = 73,
	.baseSpeed     = 78,
	.baseSpAttack  = 63,
	.baseSpDefense = 62,
	.types = MON_TYPES(TYPE_STEEL, TYPE_NORMAL),
	.catchRate = 45,
	.expYield = 132,
	.evYield_Speed = 2,
	.genderRatio = PERCENT_FEMALE(12.5),
	.eggCycles = 20,
	.friendship = STANDARD_FRIENDSHIP,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
	.abilities = {ABILITY_FUR_COAT, ABILITY_MAGIC_BOUNCE},
	.bodyColor = BODY_COLOR_WHITE,
	.speciesName = _("Alpachrome"),
	.cryId = CRY_NONE,
	.natDexNum = NATIONAL_DEX_ALPACHROME, 
	.categoryName = _("Steel Wool"),
	.height = 15,
	.weight = 1000,
	.description = COMPOUND_STRING(
		"The scarf it wears is made out of\n"
        "metal fibres from its own fur. It is\n"
        "able to spit bits of metal to defend\n"
        "itself, and when that fails, it runs."),
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
	.frontPic = gMonFrontPic_CircledQuestionMark,
	.frontPicSize = MON_COORDS_SIZE(64, 64),
	.frontPicYOffset = 0,
	//.frontAnimFrames = sAnims_SingleFramePlaceHolder,
	//.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
	.backPic = gMonBackPic_CircledQuestionMark,
	.backPicYOffset = 0,
	//.backAnimId = BACK_ANIM_NONE,
	.palette = gMonPalette_CircledQuestionMark,
	.shinyPalette = gMonShinyPalette_CircledQuestionMark,
	.iconSprite = gMonIcon_QuestionMark,
	.iconPalIndex = 4,
	.levelUpLearnset = sNoneLevelUpLearnset,
	.teachableLearnset = sNoneTeachableLearnset,
	.evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_LLAMALLOY}),
},
[SPECIES_LLAMALLOY] = 
{
	.baseHP        = 97,
	.baseAttack    = 70,
	.baseDefense   = 90,
	.baseSpeed     = 115,
	.baseSpAttack  = 72,
	.baseSpDefense = 86,
	.types = MON_TYPES(TYPE_STEEL, TYPE_NORMAL),
	.catchRate = 45,
	.expYield = 229,
	.evYield_Speed = 3,
	.genderRatio = PERCENT_FEMALE(12.5),
	.eggCycles = 20,
	.friendship = STANDARD_FRIENDSHIP,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
	.abilities = {ABILITY_FUR_COAT, ABILITY_MAGIC_BOUNCE},
	.bodyColor = BODY_COLOR_GRAY,
	.speciesName = _("Llamalloy"),
	.cryId = CRY_NONE,
	.natDexNum = NATIONAL_DEX_LLAMALLOY, 
	.categoryName = _("Steel Wool"),
	.height = 19,
	.weight = 4000,
	.description = COMPOUND_STRING(
		""),
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
	.frontPic = gMonFrontPic_CircledQuestionMark,
	.frontPicSize = MON_COORDS_SIZE(64, 64),
	.frontPicYOffset = 0,
	//.frontAnimFrames = sAnims_SingleFramePlaceHolder,
	//.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
	.backPic = gMonBackPic_CircledQuestionMark,
	.backPicYOffset = 0,
	//.backAnimId = BACK_ANIM_NONE,
	.palette = gMonPalette_CircledQuestionMark,
	.shinyPalette = gMonShinyPalette_CircledQuestionMark,
	.iconSprite = gMonIcon_QuestionMark,
	.iconPalIndex = 4,
	.levelUpLearnset = sNoneLevelUpLearnset,
	.teachableLearnset = sNoneTeachableLearnset,
},

// Smackop --> Storkick --> Phorusmash
[SPECIES_SMACKOP] = 
{
	.baseHP        = 45,
	.baseAttack    = 63,
	.baseDefense   = 40,
	.baseSpeed     = 61,
	.baseSpAttack  = 50,
	.baseSpDefense = 55,
	.types = MON_TYPES(TYPE_FIGHTING),
	.catchRate = 45,
	.expYield = 61,
	.evYield_Attack = 1,
	.genderRatio = PERCENT_FEMALE(12.5),
	.eggCycles = 20,
	.friendship = STANDARD_FRIENDSHIP,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD,EGG_GROUP_FLYING),
	.abilities = {ABILITY_COMPETITIVE, ABILITY_ANGER_POINT},
	.bodyColor = BODY_COLOR_RED,
	.speciesName = _("Smackop"),
	.cryId = CRY_NONE,
	.natDexNum = NATIONAL_DEX_SMACKOP, 
	.categoryName = _("Fight Bird"),
	.height = 3,
	.weight = 0,
	.description = COMPOUND_STRING(
		"It will pick a fight with anything\n"
		"that comes too close to it, including\n"
		"its trainer. It has dreams of growing\n"
		"bigger and stronger."),
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
	.frontPic = gMonFrontPic_CircledQuestionMark,
	.frontPicSize = MON_COORDS_SIZE(64, 64),
	.frontPicYOffset = 0,
	//.frontAnimFrames = sAnims_Smackop,
	//.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
	.backPic = gMonBackPic_CircledQuestionMark,
	.backPicYOffset = 0,
	//.backAnimId = BACK_ANIM_NONE,
	.palette = gMonPalette_CircledQuestionMark,
	.shinyPalette = gMonShinyPalette_CircledQuestionMark,
	.iconSprite = gMonIcon_QuestionMark,
	.iconPalIndex = 4,
	.levelUpLearnset = sNoneLevelUpLearnset,
	.teachableLearnset = sNoneTeachableLearnset,
	.evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_STORKICK}),
},
[SPECIES_STORKICK] = 
{
	.baseHP        = 55,
	.baseAttack    = 85,
	.baseDefense   = 55,
	.baseSpeed     = 75,
	.baseSpAttack  = 65,
	.baseSpDefense = 70,
	.types = MON_TYPES(TYPE_FIGHTING),
	.catchRate = 45,
	.expYield = 132,
	.evYield_Attack = 2,
	.genderRatio = PERCENT_FEMALE(12.5),
	.eggCycles = 20,
	.friendship = STANDARD_FRIENDSHIP,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD,EGG_GROUP_FLYING),
	.abilities = {ABILITY_COMPETITIVE, ABILITY_ANGER_POINT},
	.bodyColor = BODY_COLOR_RED,
	.speciesName = _("Storkick"),
	.cryId = CRY_NONE,
	.natDexNum = NATIONAL_DEX_STORKICK, 
	.categoryName = _("Fight Bird"),
	.height = 13,
	.weight = 0,
	.description = COMPOUND_STRING(
		"Not only do they use their beaks to\n"
		"attack, they can also deliver a\n"
		"powerful kick. When preparing for a fight,\n"
		"they let out a deep rattling battle cry."),
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
	.frontPic = gMonFrontPic_CircledQuestionMark,
	.frontPicSize = MON_COORDS_SIZE(64, 64),
	.frontPicYOffset = 0,
	//.frontAnimFrames = sAnims_Storkick,
	//.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
	.backPic = gMonBackPic_CircledQuestionMark,
	.backPicYOffset = 0,
	//.backAnimId = BACK_ANIM_NONE,
	.palette = gMonPalette_CircledQuestionMark,
	.shinyPalette = gMonShinyPalette_CircledQuestionMark,
	.iconSprite = gMonIcon_QuestionMark,
	.iconPalIndex = 4,
	.levelUpLearnset = sNoneLevelUpLearnset,
	.teachableLearnset = sNoneTeachableLearnset,
	.evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_PHORUSMASH}),
},
[SPECIES_PHORUSMASH] = 
{
	.baseHP        = 85,
	.baseAttack    = 110,
	.baseDefense   = 70,
	.baseSpeed     = 110,
	.baseSpAttack  = 65,
	.baseSpDefense = 90,
	.types = MON_TYPES(TYPE_FIGHTING, TYPE_GHOST),
	.catchRate = 45,
	.expYield = 229,
	.evYield_Attack = 3,
	.genderRatio = PERCENT_FEMALE(12.5),
	.eggCycles = 20,
	.friendship = STANDARD_FRIENDSHIP,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD,EGG_GROUP_FLYING),
	.abilities = {ABILITY_COMPETITIVE, ABILITY_ANGER_POINT},
	.bodyColor = BODY_COLOR_RED,
	.speciesName = _("Phorusmash"),
	.cryId = CRY_NONE,
	.natDexNum = NATIONAL_DEX_PHORUSMASH, 
	.categoryName = _("Terrorbird"),
	.height = 18,
	.weight = 0,
	.description = COMPOUND_STRING(
		"Their sickle-shaped beak and claws\n"
		"deal devastating damage to their foes.\n"
		"In their hayday, they were one of the\n"
		"top predators of their region."),
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
	.frontPic = gMonFrontPic_CircledQuestionMark,
	.frontPicSize = MON_COORDS_SIZE(64, 64),
	.frontPicYOffset = 0,
	//.frontAnimFrames = sAnims_Phorusmash,
	//.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
	.backPic = gMonBackPic_CircledQuestionMark,
	.backPicYOffset = 0,
	//.backAnimId = BACK_ANIM_NONE,
	.palette = gMonPalette_CircledQuestionMark,
	.shinyPalette = gMonShinyPalette_CircledQuestionMark,
	.iconSprite = gMonIcon_QuestionMark,
	.iconPalIndex = 4,
	.levelUpLearnset = sNoneLevelUpLearnset,
	.teachableLearnset = sNoneTeachableLearnset,
},

// Puppixy --> Faerdillo --> Armanova
[SPECIES_PUPPIXY] = 
{
	.baseHP        = 45,
	.baseAttack    = 47,
	.baseDefense   = 55,
	.baseSpeed     = 60,
	.baseSpAttack  = 52,
	.baseSpDefense = 55,
	.types = MON_TYPES(TYPE_FAIRY),
	.catchRate = 45,
	.expYield = 61,
	.evYield_Defense = 1,
	.genderRatio = PERCENT_FEMALE(12.5),
	.eggCycles = 20,
	.friendship = STANDARD_FRIENDSHIP,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD,EGG_GROUP_FAIRY),
	.abilities = {ABILITY_GALVANIZE, ABILITY_BULLETPROOF},
	.bodyColor = BODY_COLOR_PINK,
	.speciesName = _("Puppixy"),
	.cryId = CRY_NONE,
	.natDexNum = NATIONAL_DEX_PUPPIXY, 
	.categoryName = _("Pink Armour"),
	.height = 5,
	.weight = 0,
	.description = COMPOUND_STRING(
		"It curls up into a ball when it is\n"
		"threatened, protecting itself using\n"
		"its hard shell. If it stresses out\n"
		"too much, it starts to glow blue."),
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
	.frontPic = gMonFrontPic_CircledQuestionMark,
	.frontPicSize = MON_COORDS_SIZE(64, 64),
	.frontPicYOffset = 0,
	//.frontAnimFrames = sAnims_Puppixy,
	//.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
	.backPic = gMonBackPic_CircledQuestionMark,
	.backPicYOffset = 0,
	//.backAnimId = BACK_ANIM_NONE,
	.palette = gMonPalette_CircledQuestionMark,
	.shinyPalette = gMonShinyPalette_CircledQuestionMark,
	.iconSprite = gMonIcon_QuestionMark,
	.iconPalIndex = 4,
	.levelUpLearnset = sNoneLevelUpLearnset,
	.teachableLearnset = sNoneTeachableLearnset,
	.evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FAERDILLO}),
},
[SPECIES_FAERDILLO] = 
{
	.baseHP        = 61,
	.baseAttack    = 62,
	.baseDefense   = 73,
	.baseSpeed     = 60,
	.baseSpAttack  = 76,
	.baseSpDefense = 73,
	.types = MON_TYPES(TYPE_FAIRY, TYPE_ELECTRIC),
	.catchRate = 45,
	.expYield = 132,
	.evYield_Defense = 2,
	.genderRatio = PERCENT_FEMALE(12.5),
	.eggCycles = 20,
	.friendship = STANDARD_FRIENDSHIP,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD,EGG_GROUP_FAIRY),
	.abilities = {ABILITY_GALVANIZE, ABILITY_BULLETPROOF},
	.bodyColor = BODY_COLOR_PINK,
	.speciesName = _("Faerdillo"),
	.cryId = CRY_NONE,
	.natDexNum = NATIONAL_DEX_FAERDILLO, 
	.categoryName = _("Pink Armour"),
	.height = 14,
	.weight = 0,
	.description = COMPOUND_STRING(
		"By compressing itself into a ball,\n"
		"it can generate static electricity,\n"
		"imbued with its special magic. The snap\n"
		"from the sparks on its tail is often\n"
		"mistaken for thunder."),
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
	.frontPic = gMonFrontPic_CircledQuestionMark,
	.frontPicSize = MON_COORDS_SIZE(64, 64),
	.frontPicYOffset = 0,
	//.frontAnimFrames = sAnims_Faerdillo,
	//.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
	.backPic = gMonBackPic_CircledQuestionMark,
	.backPicYOffset = 0,
	//.backAnimId = BACK_ANIM_NONE,
	.palette = gMonPalette_CircledQuestionMark,
	.shinyPalette = gMonShinyPalette_CircledQuestionMark,
	.iconSprite = gMonIcon_QuestionMark,
	.iconPalIndex = 4,
	.levelUpLearnset = sNoneLevelUpLearnset,
	.teachableLearnset = sNoneTeachableLearnset,
	.evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_ARMANOVA}),
},
[SPECIES_ARMANOVA] = 
{
	.baseHP        = 78,
	.baseAttack    = 78,
	.baseDefense   = 100,
	.baseSpeed     = 90,
	.baseSpAttack  = 91,
	.baseSpDefense = 93,
	.types = MON_TYPES(TYPE_FAIRY, TYPE_ELECTRIC),
	.catchRate = 45,
	.expYield = 229,
	.evYield_Defense = 3,
	.genderRatio = PERCENT_FEMALE(12.5),
	.eggCycles = 20,
	.friendship = STANDARD_FRIENDSHIP,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD,EGG_GROUP_FAIRY),
	.abilities = {ABILITY_GALVANIZE, ABILITY_BULLETPROOF},
	.bodyColor = BODY_COLOR_PINK,
	.speciesName = _("Armanova"),
	.cryId = CRY_NONE,
	.natDexNum = NATIONAL_DEX_ARMANOVA, 
	.categoryName = _("Pink Armour"),
	.height = 21,
	.weight = 0,
	.description = COMPOUND_STRING(
		"The electric horns on its head can sense electromagnetic frequencies for miles around. Many sightings of 'ball lightning' can be attributed to this Pokémon."),
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
	.frontPic = gMonFrontPic_CircledQuestionMark,
	.frontPicSize = MON_COORDS_SIZE(64, 64),
	.frontPicYOffset = 0,
	//.frontAnimFrames = sAnims_Armanova,
	//.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
	.backPic = gMonBackPic_CircledQuestionMark,
	.backPicYOffset = 0,
	//.backAnimId = BACK_ANIM_NONE,
	.palette = gMonPalette_CircledQuestionMark,
	.shinyPalette = gMonShinyPalette_CircledQuestionMark,
	.iconSprite = gMonIcon_QuestionMark,
	.iconPalIndex = 4,
	.levelUpLearnset = sNoneLevelUpLearnset,
	.teachableLearnset = sNoneTeachableLearnset,
},

// Ekitna --> Sakkidna
[SPECIES_EKITNA] = 
{
	.baseHP        = 42,
	.baseAttack    = 55,
	.baseDefense   = 60,
	.baseSpeed     = 50,
	.baseSpAttack  = 55,
	.baseSpDefense = 40,
	.types = MON_TYPES(TYPE_NORMAL),
	.catchRate = 255,
	.expYield = 52,
	.evYield_Defense = 1,
	.genderRatio = PERCENT_FEMALE(50),
	.eggCycles = 20,
	.friendship = STANDARD_FRIENDSHIP,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
	.abilities = {ABILITY_IRON_BARBS, ABILITY_CUD_CHEW},
	// .bodyColor = BODY_COLOR_!!,
	.speciesName = _("Ekitna"),
	.cryId = CRY_NONE,
	.natDexNum = NATIONAL_DEX_EKITNA, 
	.categoryName = _("Unknown"),
	.height = 0,
	.weight = 0,
	.description = COMPOUND_STRING(
		""),
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
	.frontPic = gMonFrontPic_CircledQuestionMark,
	.frontPicSize = MON_COORDS_SIZE(64, 64),
	.frontPicYOffset = 0,
	//.frontAnimFrames = sAnims_SingleFramePlaceHolder,
	//.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
	.backPic = gMonBackPic_CircledQuestionMark,
	.backPicYOffset = 0,
	//.backAnimId = BACK_ANIM_NONE,
	.palette = gMonPalette_CircledQuestionMark,
	.shinyPalette = gMonShinyPalette_CircledQuestionMark,
	.iconSprite = gMonIcon_QuestionMark,
	.iconPalIndex = 4,
	.levelUpLearnset = sNoneLevelUpLearnset,
	.teachableLearnset = sNoneTeachableLearnset,
	.evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_SAKKIDNA}),
},
[SPECIES_SAKKIDNA] = 
{
	.baseHP        = 70,
	.baseAttack    = 80,
	.baseDefense   = 105,
	.baseSpeed     = 65,
	.baseSpAttack  = 80,
	.baseSpDefense = 60,
	.types = MON_TYPES(TYPE_NORMAL),
	.catchRate = 255,
	.expYield = 175,
	.evYield_Defense = 2,
	.genderRatio = PERCENT_FEMALE(50),
	.eggCycles = 20,
	.friendship = STANDARD_FRIENDSHIP,
	.growthRate = GROWTH_MEDIUM_FAST,
	.eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
	.abilities = {ABILITY_IRON_BARBS, ABILITY_CUD_CHEW},
	// .bodyColor = BODY_COLOR_!!,
	.speciesName = _("Sakkidna"),
	.cryId = CRY_NONE,
	.natDexNum = NATIONAL_DEX_SAKKIDNA, 
	.categoryName = _("Unknown"),
	.height = 0,
	.weight = 0,
	.description = COMPOUND_STRING(
		""),
	.pokemonScale = 356,
	.pokemonOffset = 17,
	.trainerScale = 256,
	.trainerOffset = 0,
	.frontPic = gMonFrontPic_CircledQuestionMark,
	.frontPicSize = MON_COORDS_SIZE(64, 64),
	.frontPicYOffset = 0,
	//.frontAnimFrames = sAnims_SingleFramePlaceHolder,
	//.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
	.backPic = gMonBackPic_CircledQuestionMark,
	.backPicYOffset = 0,
	//.backAnimId = BACK_ANIM_NONE,
	.palette = gMonPalette_CircledQuestionMark,
	.shinyPalette = gMonShinyPalette_CircledQuestionMark,
	.iconSprite = gMonIcon_QuestionMark,
	.iconPalIndex = 4,
	.levelUpLearnset = sNoneLevelUpLearnset,
	.teachableLearnset = sNoneTeachableLearnset,
},

// Skuarctic --> Skuindle --> Alburgle

// Dewsel --> Puipour --> Sealoch

// Fowlily --> Fowlotus

// Tropilot --> Propiary --> Jetimber

// Lensect --> Grubarlo --> Obuzzerve

// Termeet --> Clusterm --> Termanate

// Signoll --> Possana --> Possierra

// Clamour --> Musscara --> Valvogue

// conv.1 --> conv.2

// thero.1 --> thero.2 --> thero.3

// Claybara --> Briccapy

// Basilt --> Hextuff --> Hextature

// Ignicyn --> Tientooth --> Dynametro

// Escasete --> Recorgot

// Troubull

// sponge.1 --> sponge.2

// Pinnaugur

// Sharkelp --> Baskalgae

// Shyfono --> Emsifono --> Siphormix

// Drillito --> Drillitoil

// Solm --> Chasolm --> Grottolm

// Echore --> Rubite --> Vampphire

// fairy.1 --> fairy.2

// Beetemolt --> Phantomolt

// Skirmush --> Cordyspar

// iguanadon

// midge

// Icirkrill --> Krillowatt

// Gramain --> Tardevail

// Seahu --> Seathru --> Barrelight / Eelucent

// Canuway --> Stiksail --> Araukeel

// ghost2.1 --> ghost2.2

// Luridirt --> Luridwell --> Desolong

// Gnosepass --> Pocuspass

// fire solo

// Beagloss

// Faeto --> Silfilm --> Gallaery

// flying.1 --> flying.2 --> flying.3

// fight.1 --> fight.2

// Gizmit --> Crawidget

// solo.1

// solo.2

// Ohmeow --> Ampurr --> Comproar

// solar.1 --> solar.2

// healer

// Veilduck

// Smouldra

// Frostylo --> Fractylo

// Totully --> Monstoxin

// Gekobold --> Urdrowsy --> Dracozy

// Mosscrue --> Mosstrata --> Mosstroma

// Tinymph --> Phasmesh --> Phasmetal

// Strigilent

// Somnilus

// Chirurge

// trio.1

// trio.2

// trio.3

// duo.1

// duo.2

// ruler.1

// ruler.2

// ruler.3

// Formandala

// solo legend.1

// solo legend.2

#ifdef __INTELLISENSE__
};
#endif