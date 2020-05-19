#include "DiscJam.h"
#include "PlatformHeader.h"
#include "DiscDodge.h"
#include "Versus.h"


DiscJam::DiscJam() : Game() {
	this->hasName("Disc Jam")
		.hasGameMode(DiscDodge())
		.hasGameMode(Versus())
		.isCrossPlatform(Game::CROSS_PLATFORM);
}

DiscJam::~DiscJam() {
}

DiscJam& DiscJam::hasName(const std::string& NAME) {
	Game::hasName(NAME);
	return *this;
}

DiscJam& DiscJam::hasCost(const float c) {
	Game::hasCost(c);
	return *this;
}

DiscJam& DiscJam::hasReleaseDate(const Date& d) {
	Game::hasReleaseDate(d);
	return *this;
}

DiscJam& DiscJam::hasGameMode(const GameMode& m) {
	Game::hasGameMode(m);
	return *this;
}

DiscJam& DiscJam::isOnPlatform(const Platform& p) {
	Game::isOnPlatform(p);
	return *this;
}

DiscJam& DiscJam::isCrossPlatform(const int value) {
	Game::isCrossPlatform(value);
	return *this;
}



DiscJamPS4::DiscJamPS4() : DiscJam() {
	this->hasCost(14.99)
		.hasReleaseDate(Date(3, 7, 2017))
		.isOnPlatform(Playstation4());
}

DiscJamPS4::~DiscJamPS4() {
}


DiscJamSteam::DiscJamSteam() : DiscJam() {
	this->hasCost(14.99)
		.hasReleaseDate(Date(3, 7, 2017))
		.isOnPlatform(Steam());
}

DiscJamSteam::~DiscJamSteam() {
}


DiscJamSwitch::DiscJamSwitch() : DiscJam() {
	this->hasCost(14.99)
		.hasReleaseDate(Date(2, 8, 2018))
		.isOnPlatform(Switch());
}

DiscJamSwitch::~DiscJamSwitch() {
}