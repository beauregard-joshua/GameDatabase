#include "SurvivalArena.h"



SurvivalArena::SurvivalArena() : GameMode() {
	this->hasName("Survival Arena")
		.hasMinimumPlayerCount(2)
		.hasMaximumPlayerCount(3)
		.hasStructure("Cooperative");
}


SurvivalArena::~SurvivalArena() {
}
