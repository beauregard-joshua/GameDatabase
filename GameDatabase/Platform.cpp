#include "Platform.h"


Platform::Platform() : Purchaseable() {
}


Platform::~Platform() {
}

Platform::Platform(const Platform& p) {
	*this = p;
}

Platform& Platform::operator=(const Platform& p) {
	Purchaseable::operator=(p);
	return *this;
}

bool Platform::operator==(const Platform& p) const {
	if (!Purchaseable::operator==(p)) {
		return false;
	}
	return true;
}

Platform& Platform::hasName(const std::string NAME) {
	Purchaseable::hasName(NAME);
	return *this;
}

std::string Platform::toString() const {
	return Purchaseable::toString();
}

void Platform::assignErrorCode(const int error) {
	Purchaseable::assignErrorCode(error);
}
