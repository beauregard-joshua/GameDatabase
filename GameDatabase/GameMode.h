#pragma once
#include "Resource.h"

// A GameMode is a piece of a game in which players perform activities. This can either be
// compoetitive, cooperative, or some combination of the two. Any acceptable method of playing
// together in a game constitutes a game mode.
class GameMode : public Resource {
public:
	GameMode();
	~GameMode();
	GameMode(const GameMode&);

	virtual GameMode& operator=(const GameMode&);
	virtual bool operator==(const GameMode&) const;
	virtual bool operator!=(const GameMode&) const;

	virtual GameMode& hasName(const std::string&);
	virtual GameMode& hasMinimumPlayerCount(const int);
	virtual GameMode& hasMaximumPlayerCount(const int);
	virtual GameMode& hasStructure(const std::string&);

	virtual std::string toString() const;

	// Allowable errors: 32-47
	static const int ERROR_COUNT_ALREADY_ASSIGNED = 32;
	static const int ERROR_COUNT_NOT_POSITIVE = 33;
	static const int ERROR_MIN_COUNT_HIGHER_THAN_MAX = 34;
	static const int ERROR_MAX_COUNT_LOWER_THAN_MIN = 35;
	static const int ERROR_STRUCTURE_DEFINED = 36;

protected:
	void assignErrorCode(const int);

private:
	int minPlayerCount;
	int maxPlayerCount;
	std::string structure;
};

