#include "DotA2.h"
#include "PlatformHeader.h"


DotA2::DotA2() : Game() {
	this->hasName("DotA2")
		.hasCost(0)
		.hasReleaseDate(Date(7, 9, 2013));
	// TODO: research game modes for DotA2
}


DotA2::~DotA2() {
}
