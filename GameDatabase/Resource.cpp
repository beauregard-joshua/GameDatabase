#include "Resource.h"

const std::string Resource::VOID = "VOIDSTRING";

Resource::Resource() {
	this->errorCode = 0;
	this->name = VOID;
}


Resource::~Resource() {
}

Resource::Resource(const Resource& r) {
	*this = r;
}

Resource& Resource::operator=(const Resource& r) {
	this->name = r.name;
	this->errorCode = 0;
}

bool Resource::operator==(const Resource& r) const {
	if (this->name == r.name) {
		return true;
	}
	return false;
}

int Resource::getLastError() const {
	return this->errorCode;
}

Resource& Resource::hasName(const std::string& NAME) {
	if (this->name != VOID) {
		errorCode = ERROR_NAME_ALREADY_ASSIGNED;
	}
	else if (NAME == VOID) {
		errorCode = ERROR_CANNOT_NAME_VOID;
	}
	else {
		this->name = NAME;
	}
	return *this;
}

std::string Resource::toString() const {
	return "hasName: " + this->name;
}

void Resource::assignErrorCode(const int error) {
	this->errorCode = error;
}
