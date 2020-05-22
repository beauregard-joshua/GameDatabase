#include "Duos.h"



Duos::Duos() : GameMode() {
	this->hasName("Duos")
		.hasMinimumPlayerCount(2)
		.hasMaximumPlayerCount(16)
		.hasStructure("Competitive");
}


Duos::~Duos() {
}
