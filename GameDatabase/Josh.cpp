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
	this->ownsPlatform(Browser())
		.ownsPlatform(iOS())
		.ownsPlatform(Mac())
		.ownsPlatform(PC())
		.ownsPlatform(Playstation4())
		.ownsPlatform(Switch())
		.ownsGame(DiscJamPS4())
		.ownsGame(DotA2())
		.ownsGame(DotAUnderlordsPC())
		.ownsGame(DotAUnderlordsMac())
		.ownsGame(Uncharted4());
}

Josh::~Josh() {
}
