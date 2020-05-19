#include "Uncharted4.h"
#include "Survival.h"
#include "SurvivalArena.h"
#include "TeamDeathmatch.h"
#include "Playstation4.h"

Uncharted4::Uncharted4() : Game() {
	this->hasName("Uncharted 4")
		.hasCost(19.99)
		.hasReleaseDate(Date(5, 10, 2016))
		.hasGameMode(Survival())
		.hasGameMode(SurvivalArena())
		.hasGameMode(TeamDeathmatch())
		.isOnPlatform(Playstation4());
}


Uncharted4::~Uncharted4() {
}
