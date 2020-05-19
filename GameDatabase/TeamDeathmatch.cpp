#include "TeamDeathmatch.h"



TeamDeathmatch::TeamDeathmatch() : GameMode() {
	this->hasName("Team Deathmatch")
		.hasMinimumPlayerCount(2)
		.hasMaximumPlayerCount(10)
		.hasStructure("Team Competitive");
}


TeamDeathmatch::~TeamDeathmatch() {
}
