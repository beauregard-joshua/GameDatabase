#include "Player.h"

const int Player::ERROR_PLATFORM_ALREADY_EXISTS;
const int Player::ERROR_GAME_ALREADY_EXISTS;

Player::Player() : Resource() {
	this->platforms = std::vector<Platform>(0);
	this->games = std::vector<Game>(0);
}

Player::~Player() {
	this->platforms.clear();
	this->games.clear();
}

Player::Player(const Player& p) {
	*this = p;
}

Player& Player::operator=(const Player& p) {
	Resource::operator=(p);
	this->platforms.clear();
	this->platforms = p.platforms;
	this->games.clear();
	this->games = p.games;
	return *this;
}

bool Player::operator==(const Player& p) const {
	if (!Resource::operator==(p)) {
		return false;
	}
	if (this->platforms.size() != p.platforms.size()) {
		return false;
	}
	for (int i = 0; i < this->platforms.size(); i++) {
		int counter = 0;
		while (counter < p.platforms.size()) {
			if (this->platforms[i] == p.platforms[counter]) {
				break;
			}
			counter++;
		}
		if (counter == this->platforms.size()) {
			return false;
		}
	}
	if (this->games.size() != p.games.size()) {
		return false;
	}
	for (int i = 0; i < this->games.size(); i++) {
		int counter = 0;
		while (counter < p.games.size()) {
			if (this->games[i] == p.games[counter]) {
				break;
			}
			counter++;
		}
		if (counter == this->games.size()) {
			return false;
		}
	}
	return true;
}

Player& Player::hasName(const std::string NAME) {
	Resource::hasName(NAME);
	return *this;
}

Player& Player::ownsPlatform(const Platform& p) {
	for (int i = 0; i < this->platforms.size(); i++) {
		if (p == this->platforms[i]) {
			this->assignErrorCode(ERROR_PLATFORM_ALREADY_EXISTS);
			return *this;
		}
	}
	this->platforms.push_back(p);
	return *this;
}

Player& Player::ownsGame(const Game& g) {
	for (int i = 0; i < this->games.size(); i++) {
		if (g == this->games[i]) {
			this->assignErrorCode(ERROR_GAME_ALREADY_EXISTS);
			return *this;
		}
	}
	this->games.push_back(g);
	return *this;
}

std::string Player::toString() const {
	std::string output = Resource::toString();
	for (int i = 0; i < this->platforms.size(); i++) {
		output += "\nownsPlatform: \n" + this->platforms[i].toString();
	}
	for (int i = 0; i < this->games.size(); i++) {
		output += "\nownsGame: \n" + this->games[i].toString();
	}
	return output;
}

void Player::assignErrorCode(const int error) {
	Resource::assignErrorCode(error);
}
