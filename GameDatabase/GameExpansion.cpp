#include "GameExpansion.h"

const int GameExpansion::ERROR_MODE_ALREADY_EXISTS;
const int GameExpansion::ERROR_RELEASE_DATE_INVALID;
const int GameExpansion::ERROR_COST_IS_NEGATIVE;

GameExpansion::GameExpansion() : Purchaseable() {
	this->modes = std::vector<GameMode>(0);
}


GameExpansion::~GameExpansion() {
	this->modes.clear();
}

GameExpansion::GameExpansion(const GameExpansion& g) {
	*this = g;
}

GameExpansion& GameExpansion::operator=(const GameExpansion& g) {
	Purchaseable::operator=(g);
	this->modes.clear();
	this->modes = g.modes;
	return *this;
}

bool GameExpansion::operator==(const GameExpansion& g) const {
	if (!Purchaseable::operator==(g)) {
		return false;
	}
	if (this->modes.size() != g.modes.size()) {
		return false;
	}
	int counter = 0;
	for (int i = 0; i < this->modes.size(); i++) {
		counter = 0;
		while (counter < g.modes.size()) {
			if (this->modes[i] == g.modes[counter]) {
				break;
			}
			counter++;
		}
		if (counter == g.modes.size()) {
			return false;
		}
	}
	return true;
}

GameExpansion& GameExpansion::hasName(const std::string& NAME) {
	Purchaseable::hasName(NAME);
	return *this;
}

GameExpansion& GameExpansion::hasCost(const float c) {
	Purchaseable::hasCost(c);
	return *this;
}

GameExpansion& GameExpansion::hasReleaseDate(const Date& d) {
	Purchaseable::hasReleaseDate(d);
	return *this;
}

GameExpansion& GameExpansion::hasGameMode(const GameMode& m) {
	for (int i = 0; i < this->modes.size(); i++) {
		if (m == this->modes[i]) {
			this->assignErrorCode(ERROR_MODE_ALREADY_EXISTS);
			return *this;
		}
	}
	this->modes.push_back(m);
	return *this;
}

std::string GameExpansion::toString() const {
	std::string output = Purchaseable::toString();
	for (int i = 0; i < this->modes.size(); i++) {
		output += "\nhasGameMode: {\n";
		output += this->modes[i].toString();
		output += "}";
	}
	return output;
}

void GameExpansion::assignErrorCode(const int error) {
	Purchaseable::assignErrorCode(error);
}
