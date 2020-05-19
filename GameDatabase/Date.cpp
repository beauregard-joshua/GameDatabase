#include "Date.h"

const std::string Date::INVALID = "INVALID_DATE";
const std::string Date::UNKNOWN_DATE = "Unknown Date";
const Date Date::UNKNOWN = Date();

Date::Date() {
	this->unknown = true;
}

Date::~Date() {
}

Date::Date(const Date& d) {
	*this = d;
}

Date::Date(const int m, const int d, const int y) {
	this->month = m;
	this->day = d;
	this->year = y;
	this->unknown = false;
}

Date& Date::operator=(const Date& d) {
	this->day = d.day;
	this->month = d.month;
	this->year = d.year;
	return *this;
}

bool Date::operator==(const Date& d) const {
	if (this->day != d.day) {
		return false;
	}
	if (this->month != d.month) {
		return false;
	}
	if (this->year != d.year) {
		return false;
	}
	return true;
}

bool Date::operator!=(const Date& d) const {
	return !this->operator==(d);
}

std::string Date::toString() const {
	if (this->unknown) {
		return UNKNOWN_DATE;
	}
	if (this->year < 1950) {
		return INVALID;
	}
	if (this->month < 1 || this->month > 12) {
		return INVALID;
	}
	if (this->day < 1 || this->day > 31) {
		return INVALID;
	}
	if (this->day == 31 && (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11)) {
		return INVALID;
	}
	if (this->day > 29 && this->month == 2) {
		return INVALID;
	}
	if (this->day == 29 && this->month == 2 && year % 4 != 0) {
		return INVALID;
	}
	if (this->day == 29 && year % 4 == 0 && year % 100 == 0 && year % 400 != 0) {
		return INVALID;
	}
	return std::to_string(this->month) + "/" + std::to_string(this->day) + "/" + std::to_string(this->year);

}
