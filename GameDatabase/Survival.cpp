#include "Survival.h"



Survival::Survival() : GameMode() {
	this->hasName("Survival")
		.hasMinimumPlayerCount(2)
		.hasMaximumPlayerCount(3)
		.hasStructure("Cooperative");
}


Survival::~Survival() {
}
