#pragma once
#include "GameExpansion.h"
#include "Platform.h"

// A Game is a full collection of executable game modes, even if the pieces were purchased seperately.
// Each piece is a GameExpansion and may have a separate cost, but the Game itself can be thought of
// as a base form of expansion.
class Game : public GameExpansion {
public:
	Game();
	~Game();
	Game(const Game&);

	virtual Game& operator=(const Game&);
	virtual bool operator==(const Game&) const;

	virtual Game& hasName(const std::string&);
	virtual Game& hasCost(const float);
	virtual Game& hasReleaseDate(const Date&);
	virtual Game& hasGameMode(const GameMode&);
	virtual Game& hasExpansion(const GameExpansion&);
	virtual Game& isOnPlatform(const Platform&);
	virtual Game& isCrossPlatform(const int);

	virtual std::string toString() const;

	// Allowable errors: 48-64
	static const int ERROR_VALUE_NOT_IN_RANGE = 48;
	static const int ERROR_EXPANSION_ALREADY_EXISTS = 49;

	static const int CROSS_PLATFORM_NOT_APPLICABLE = 0;
	static const int CROSS_PLATFORM = 1;
	static const int NOT_CROSS_PLATFORM = 2;

protected:
	void assignErrorCode(const int);

private:
	std::vector<GameExpansion> expansions;
	Platform platform;
	int crossPlatform;
};

