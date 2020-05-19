#include "Purchaseable.h"

const std::string Purchaseable::NO_COST = "Free";
const std::string Purchaseable::UNKNOWN_COST = "Unknown";

const int Purchaseable::ERROR_COST_IS_NEGATIVE;
const int Purchaseable::ERROR_RELEASE_DATE_INVALID;

Purchaseable::Purchaseable() {
	this->cost = -1.0;
	this->releaseDate = Date();
}


Purchaseable::~Purchaseable() {
}

Purchaseable::Purchaseable(const Purchaseable& p) {
	*this = p;
}

Purchaseable& Purchaseable::operator=(const Purchaseable& p) {
	Purchaseable::operator=(p);
	this->cost = p.cost;
	this->releaseDate = p.releaseDate;
	return *this;
}

bool Purchaseable::operator==(const Purchaseable& p) const {
	if (!Resource::operator==(p)) {
		return false;
	}
	if (this->cost != p.cost) {
		return false;
	}
	if (this->releaseDate != p.releaseDate) {
		return false;
	}
	return true;
}

Purchaseable& Purchaseable::hasName(const std::string& NAME) {
	Resource::hasName(NAME);
	return *this;
}

Purchaseable& Purchaseable::hasCost(const float c) {
	if (this->cost < 0.0) {
		this->assignErrorCode(ERROR_COST_IS_NEGATIVE);
	}
	else {
		this->cost = c;
	}
	return *this;
}

Purchaseable& Purchaseable::hasReleaseDate(const Date& d) {
	if (d.toString() == Date::INVALID) {
		this->assignErrorCode(ERROR_RELEASE_DATE_INVALID);
	}
	else {
		this->releaseDate = d;
	}
	return *this;
}

std::string Purchaseable::toString() const {
	std::string output = Resource::toString();
	output += "\nhasCost: ";
	if (this->cost < 0.0) {
		output += UNKNOWN_COST;
	}
	if (this->cost == 0.0) {
		output += NO_COST;
	}
	else {
		output += "$" + std::to_string(this->cost);
	}
	output += "\nhasReleaseDate: " + this->releaseDate.toString();
}

void Purchaseable::assignErrorCode(const int error) {
	Resource::assignErrorCode(error);
}