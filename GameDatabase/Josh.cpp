#pragma once
#include "Player.h"
#include "PlatformHeader.h"
#include "GameHeader.h"

class Josh : public Player {
public:
	Josh();
	~Josh();
};

Josh::Josh() : Player() {
	this->ownsPlatform(Playstation4())
		.ownsPlatform(PC())
		.ownsPlatform(Browser())
		.ownsPlatform(Steam())
		.ownsPlatform(Switch())
		.ownsGame(DiscJamPS4())
		.ownsGame(DotA2())
		.ownsGame(Uncharted4());
}

Josh::~Josh() {
}
