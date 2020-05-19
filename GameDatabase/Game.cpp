#include "Game.h"

const int Game::ERROR_VALUE_NOT_IN_RANGE;
const int Game::ERROR_EXPANSION_ALREADY_EXISTS;

const int Game::CROSS_PLATFORM_NOT_APPLICABLE;
const int Game::CROSS_PLATFORM;
const int Game::NOT_CROSS_PLATFORM;

Game::Game() : GameExpansion() {
	this->expansions = std::vector<GameExpansion>(0);
	this->crossPlatform = CROSS_PLATFORM_NOT_APPLICABLE;
}


Game::~Game() {
	this->expansions.clear();
}

Game::Game(const Game& g) {
	*this = g;
}

Game& Game::operator=(const Game& g) {
	GameExpansion::operator=(g);
	this->expansions.clear();
	this->expansions = g.expansions;
	this->crossPlatform = g.crossPlatform;
}

bool Game::operator==(const Game& g) const {
	if (!GameExpansion::operator==(g)) {
		return false;
	}
	if (this->crossPlatform != g.crossPlatform) {
		return false;
	}
	if (this->expansions.size() != g.expansions.size()) {
		return false;
	}
	int counter = 0;
	for (int i = 0; i < this->expansions.size(); i++) {
		counter = 0;
		while (counter < g.expansions.size()) {
			if (this->expansions[i] == g.expansions[counter]) {
				break;
			}
			counter++;
		}
		if (counter == g.expansions.size()) {
			return false;
		}
	}
	return true;
}

Game& Game::hasName(const std::string& NAME) {
	GameExpansion::hasName(NAME);
	return *this;
}

Game& Game::hasCost(const float c) {
	GameExpansion::hasCost(c);
	return *this;
}

Game& Game::hasReleaseDate(const Date& d) {
	GameExpansion::hasReleaseDate(d);
	return *this;
}

Game& Game::hasGameMode(const GameMode& m) {
	GameExpansion::hasGameMode(m);
	return *this;
}

Game& Game::hasExpansion(const GameExpansion& e) {
	for (int i = 0; i < this->expansions.size(); i++) {
		if (this->expansions[i] == e) {
			this->assignErrorCode(ERROR_EXPANSION_ALREADY_EXISTS);
			return *this;
		}
	}
	this->expansions.push_back(e);
	return *this;
}

Game& Game::isOnPlatform(const Platform& p) {
	this->platform = p;
	return *this;
}

Game& Game::isCrossPlatform(const int value) {
	if (value < CROSS_PLATFORM || value > NOT_CROSS_PLATFORM) {
		this->assignErrorCode(ERROR_VALUE_NOT_IN_RANGE);
	}
	else {
		this->crossPlatform = value;
	}
	return *this;
}

std::string Game::toString() const {
	std::string output = GameExpansion::toString();
	for (int i = 0; i < this->expansions.size(); i++) {
		output += "\nhasExpansion: \n" + this->expansions[i].toString();
	}
	output += "\nisOnPlatform: " + this->platform.toString();
	output += "\nisCrossPlatform: " + std::to_string(this->crossPlatform);
	return output;
}

void Game::assignErrorCode(const int error) {
	GameExpansion::assignErrorCode(error);
}
