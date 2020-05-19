#include "GameMode.h"

const int GameMode::ERROR_COUNT_ALREADY_ASSIGNED;
const int GameMode::ERROR_COUNT_NOT_POSITIVE;
const int GameMode::ERROR_MIN_COUNT_HIGHER_THAN_MAX;
const int GameMode::ERROR_MAX_COUNT_LOWER_THAN_MIN;
const int GameMode::ERROR_STRUCTURE_DEFINED;

GameMode::GameMode() : Resource() {
	this->minPlayerCount = 0;
	this->maxPlayerCount = 0;
	this->structure = "";
}


GameMode::~GameMode() {
}

GameMode::GameMode(const GameMode& m) {
	*this = m;
}

GameMode& GameMode::operator=(const GameMode& m) {
	Resource::operator=(m);
	this->minPlayerCount = m.minPlayerCount;
	this->maxPlayerCount = m.maxPlayerCount;
	this->structure = m.structure;
	return *this;
}

bool GameMode::operator==(const GameMode& m) const {
	if (!Resource::operator==(m)) {
		return false;
	}
	if (this->minPlayerCount != m.minPlayerCount) {
		return false;
	}
	if (this->maxPlayerCount != m.maxPlayerCount) {
		return false;
	}
	if (this->structure != m.structure) {
		return false;
	}
	return true;
}

bool GameMode::operator!=(const GameMode& m) const {
	return !(*this == m);
}

GameMode& GameMode::hasName(const std::string& NAME) {
	Resource::hasName(NAME);
	return *this;
}

GameMode& GameMode::hasMinimumPlayerCount(const int m) {
	if (this->minPlayerCount != 0) {
		this->assignErrorCode(ERROR_COUNT_ALREADY_ASSIGNED);
	}
	if (m < 1) {
		this->assignErrorCode(ERROR_COUNT_NOT_POSITIVE);
	}
	else if (m > this->maxPlayerCount && this->maxPlayerCount != 0) {
		this->assignErrorCode(ERROR_MIN_COUNT_HIGHER_THAN_MAX);
	}
	else {
		this->minPlayerCount = m;
	}
	return *this;
}

GameMode& GameMode::hasMaximumPlayerCount(const int m) {
	if (this->maxPlayerCount != 0) {
		this->assignErrorCode(ERROR_COUNT_ALREADY_ASSIGNED);
	}
	else if (m < 1) {
		this->assignErrorCode(ERROR_COUNT_NOT_POSITIVE);
	}
	else if (m < this->minPlayerCount && this->minPlayerCount != 0) {
		this->assignErrorCode(ERROR_MAX_COUNT_LOWER_THAN_MIN);
	}
	else {
		this->maxPlayerCount = m;
	}
	return *this;
}

GameMode& GameMode::hasStructure(const std::string& s) {
	if (this->structure != "") {
		this->assignErrorCode(ERROR_STRUCTURE_DEFINED);
	}
	else {
		this->structure = s;
	}
	return *this;
}

std::string GameMode::toString() const {
	std::string output = Resource::toString();
	output += "\nhasMinPlayerCount: " + std::to_string(this->minPlayerCount);
	output += "\nhasMaxPlayerCount: " + std::to_string(this->maxPlayerCount);
	output += "\nhasStructure: " + this->structure;
	return output;
}

void GameMode::assignErrorCode(const int error) {
	Resource::assignErrorCode(error);
}
