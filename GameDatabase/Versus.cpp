#include "Versus.h"



Versus::Versus() : GameMode() {
	this->hasName("Versus")
		.hasMinimumPlayerCount(2)
		.hasMaximumPlayerCount(4)
		.hasStructure("Team Competitive");
}


Versus::~Versus() {
}
