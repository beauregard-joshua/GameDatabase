#include "DiscJam.h"
#include "PlatformHeader.h"
#include "DiscDodge.h"
#include "Versus.h"


DiscJam::DiscJam() : Game() {
	this->hasName("Disc Jam")
		.hasCost(14.99)
		.hasReleaseDate(Date(3, 7, 2017))
		.hasGameMode(DiscDodge())
		.hasGameMode(Versus())
		.isOnPlatform(Playstation4());
}


DiscJam::~DiscJam() {
}
