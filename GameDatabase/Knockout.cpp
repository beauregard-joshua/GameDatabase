#include "Knockout.h"



Knockout::Knockout() : GameMode() {
	this->hasName("Knockout")
		.hasMinimumPlayerCount(2)
		.hasMaximumPlayerCount(8)
		.hasStructure("Competitive");
}


Knockout::~Knockout() {
}
