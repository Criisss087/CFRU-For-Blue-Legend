#include "../config.h"
#include "../../include/global.h"
#include "../../include/constants/maps.h"
#include "../../include/wild_encounter.h"
#include "../../include/constants/region_map_sections.h"
#include "../../include/constants/species.h"

/*
wild_encounter_tables.c
	day/night and/or regular map wild encounter species
tables to edit:
	gWildMonMorningHeaders
	gWildMonEveningHeaders
	gWildMonNightHeaders
	gSwarmTable
*/

static const struct WildPokemon sRoute1_LandMonsMorning[] =
{
    {2, 3, SPECIES_PIDGEY},
    {2, 3, SPECIES_RATTATA},
    {2, 3, SPECIES_RATTATA},
    {2, 3, SPECIES_PIDGEY},
    {2, 4, SPECIES_RATTATA},
    {2, 4, SPECIES_STARLY},
    {2, 2, SPECIES_STARLY},
    {2, 2, SPECIES_RATTATA},
    {3, 3, SPECIES_PIDGEY},
    {4, 4, SPECIES_PIDGEY},
    {5, 5, SPECIES_RATTATA},
    {5, 5, SPECIES_STARLY},
};
static const struct WildPokemonInfo sRoute1_LandMonsInfoMorning = {20, sRoute1_LandMonsMorning};

static const struct WildPokemon sRoute1_LandMonsEvening[] =
{
    {2, 3, SPECIES_STARLY},
    {2, 3, SPECIES_RATTATA},
    {2, 3, SPECIES_RATTATA},
    {2, 3, SPECIES_STARLY},
    {2, 4, SPECIES_RATTATA},
    {2, 4, SPECIES_STARLY},
    {2, 2, SPECIES_STARLY},
    {2, 2, SPECIES_RATTATA},
    {3, 3, SPECIES_STARLY},
    {4, 4, SPECIES_STARLY},
    {5, 5, SPECIES_RATTATA},
    {5, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute1_LandMonsInfoEvening = {20, sRoute1_LandMonsEvening};

static const struct WildPokemon sRoute1_LandMonsNight[] =
{
    {2, 3, SPECIES_HOOTHOOT},
    {2, 3, SPECIES_RATTATA},
    {2, 3, SPECIES_RATTATA},
    {2, 3, SPECIES_HOOTHOOT},
    {2, 4, SPECIES_RATTATA},
    {2, 4, SPECIES_HOOTHOOT},
    {2, 2, SPECIES_HOOTHOOT},
    {2, 2, SPECIES_RATTATA},
    {3, 3, SPECIES_HOOTHOOT},
    {4, 4, SPECIES_HOOTHOOT},
    {5, 5, SPECIES_RATTATA},
    {5, 5, SPECIES_HOOTHOOT},
};
static const struct WildPokemonInfo sRoute1_LandMonsInfoNight = {20, sRoute1_LandMonsNight};


const struct WildPokemonHeader gWildMonMorningHeaders[] =
{
    {
        .mapGroup = MAP_GROUP(ROUTE_1),
        .mapNum = MAP_NUM(ROUTE_1),
        .landMonsInfo = &sRoute1_LandMonsInfoMorning,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = 0xFF,
        .mapNum = 0xFF,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    }
};

const struct WildPokemonHeader gWildMonEveningHeaders[] =
{
    {
        .mapGroup = MAP_GROUP(ROUTE_1),
        .mapNum = MAP_NUM(ROUTE_1),
        .landMonsInfo = &sRoute1_LandMonsInfoEvening,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = 0xFF,
        .mapNum = 0xFF,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    }
};

const struct WildPokemonHeader gWildMonNightHeaders[] =
{
    {
        .mapGroup = MAP_GROUP(ROUTE_1),
        .mapNum = MAP_NUM(ROUTE_1),
        .landMonsInfo = &sRoute1_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = 0xFF,
        .mapNum = 0xFF,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    }
};

const struct SwarmData gSwarmTable[] =
{
	/*{
		.mapName = 0xFF,
		.species = 0xFFFF,
	},*/
};


const u16 gSwarmTableLength = NELEMS(gSwarmTable);