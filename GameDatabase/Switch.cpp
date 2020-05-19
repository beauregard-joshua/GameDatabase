#include "Switch.h"



Switch::Switch() : Platform() {
	this->hasName("Switch")
		.hasCost(299.99)
		.hasReleaseDate(Date(3, 3, 2017));
}


Switch::~Switch() {
}
