#pragma once
#include "Platform.h"
#include "Game.h"

class Player : public Resource {
public:
	Player();
	~Player();
	Player(const Player&);

	virtual Player& operator=(const Player&);
	virtual bool operator==(const Player&) const;

	virtual Player& hasName(const std::string);
	virtual Player& ownsPlatform(const Platform&);
	virtual Player& ownsGame(const Game&);

	virtual std::string toString() const;

	// Allowable errors: 80-95
	static const int ERROR_PLATFORM_ALREADY_EXISTS = 80;
	static const int ERROR_GAME_ALREADY_EXISTS = 81;

protected:
	void assignErrorCode(const int);

private:
	std::vector<Platform> platforms;
	std::vector<Game> games;
};

