#include "Josh.h"
#include "Playstation4.h"
#include "PC.h"
#include "Browser.h"
#include "Steam.h"
#include "Uncharted4.h"


Josh::Josh() : Player() {
	this->ownsPlatform(Playstation4())
		.ownsPlatform(PC())
		.ownsPlatform(Browser())
		.ownsPlatform(Steam())
		.ownsGame(Uncharted4());
}


Josh::~Josh() {
}
