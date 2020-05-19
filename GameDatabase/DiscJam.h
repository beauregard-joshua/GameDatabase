#pragma once
#include "Game.h"

class DiscJam : public Game {
public:
	DiscJam();
	~DiscJam();

	virtual DiscJam& hasName(const std::string&);
	virtual DiscJam& hasCost(const float);
	virtual DiscJam& hasReleaseDate(const Date&);
	virtual DiscJam& hasGameMode(const GameMode&);
	virtual DiscJam& isOnPlatform(const Platform&);
	virtual DiscJam& isCrossPlatform(const int);
};

class DiscJamPS4 : public DiscJam {
public:
	DiscJamPS4();
	~DiscJamPS4();
};

class DiscJamSteam : public DiscJam {
public:
	DiscJamSteam();
	~DiscJamSteam();
};

class DiscJamSwitch : public DiscJam {
public:
	DiscJamSwitch();
	~DiscJamSwitch();
};

