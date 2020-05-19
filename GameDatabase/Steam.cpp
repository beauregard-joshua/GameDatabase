#include "Steam.h"


Steam::Steam() : Platform() {
	this->hasName("Steam")
		.hasCost(0.0)
		.hasReleaseDate(Date(9, 12, 2003));
}


Steam::~Steam() {
}
