#include "Standard.h"



Standard::Standard() : GameMode() {
	this->hasName("Standard")
		.hasMinimumPlayerCount(2)
		.hasMaximumPlayerCount(8)
		.hasStructure("Competitive");
}


Standard::~Standard()
{
}
