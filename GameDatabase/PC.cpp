#include "PC.h"


PC::PC() : Platform() {
	this->hasName("PC")
		.hasReleaseDate(Date());
}


PC::~PC() {
}
