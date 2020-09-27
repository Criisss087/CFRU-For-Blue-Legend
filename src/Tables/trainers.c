#include "../defines.h"
#include "../../include/battle.h"
#include "../../include/constants/trainers.h"
#include "../../include/constants/trainer_classes.h"
#include "../../include/constants/battle_ai.h"

//const union TrainerMonNoItemDefaultMoves *const gTrainerMons262[] = 
struct TrainerMonNoItemDefaultMoves gTrainerMons262[] =
{
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_TENTACRUEL,
    },
};


const struct Trainer gTrainer262 = 
{
    .partyFlags = 0,
    .trainerClass = CLASS_GAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .trainerPic = TRAINER_PIC_GAMBLER,
    .trainerName = {"STAN"},
    .items = {},
    .doubleBattle = FALSE,
    .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
    .partySize = NELEMS(gTrainerMons262),
    .party = {.NoItemDefaultMoves = gTrainerMons262}
};
