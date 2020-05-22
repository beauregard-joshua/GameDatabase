#include "DotAUnderlords.h"
#include "PlatformHeader.h"
#include "Duos.h"
#include "Knockout.h"
#include "Standard.h"


DotAUnderlords::DotAUnderlords() : Game() {
	this->hasName("DotA Underlords")
		.hasCost(0.0)
		.hasReleaseDate(Date(2, 25, 2020))
		.hasGameMode(Duos())
		.hasGameMode(Knockout())
		.hasGameMode(Standard())
		.isCrossPlatform(Game::CROSS_PLATFORM);
}


DotAUnderlords::~DotAUnderlords() {
}

DotAUnderlords& DotAUnderlords::hasName(const std::string& NAME) {
	Game::hasName(NAME);
	return *this;
}

DotAUnderlords& DotAUnderlords::hasCost(const float c) {
	Game::hasCost(c);
	return *this;
}

DotAUnderlords& DotAUnderlords::hasReleaseDate(const Date& d) {
	Game::hasReleaseDate(d);
	return *this;
}

DotAUnderlords& DotAUnderlords::hasGameMode(const GameMode& m) {
	Game::hasGameMode(m);
	return *this;
}

DotAUnderlords& DotAUnderlords::isOnPlatform(const Platform& p) {
	Game::isOnPlatform(p);
	return *this;
}

DotAUnderlords& DotAUnderlords::isCrossPlatform(const int value) {
	Game::isCrossPlatform(value);
	return *this;
}


DotAUnderlordsPC::DotAUnderlordsPC() : DotAUnderlords() {
	this->isOnPlatform(PC());
}

DotAUnderlordsPC::~DotAUnderlordsPC() {
}


DotAUnderlordsMac::DotAUnderlordsMac() : DotAUnderlords() {
	this->isOnPlatform(Mac());
}

DotAUnderlordsMac::~DotAUnderlordsMac() {
}


DotAUnderlordsiOS::DotAUnderlordsiOS() : DotAUnderlords() {
	this->isOnPlatform(iOS());
}

DotAUnderlordsiOS::~DotAUnderlordsiOS() {
}


DotAUnderlordsAndroid::DotAUnderlordsAndroid() : DotAUnderlords() {
	this->isOnPlatform(Android());
}

DotAUnderlordsAndroid::~DotAUnderlordsAndroid() {
}