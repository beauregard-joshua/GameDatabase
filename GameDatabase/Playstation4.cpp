#include "Playstation4.h"


Playstation4::Playstation4() : Platform() {
	this->hasName("Playstation 4")
		.hasCost(399.99)
		.hasReleaseDate(Date(11, 15, 2013));
}


Playstation4::~Playstation4()
{
}
