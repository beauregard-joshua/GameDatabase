#pragma once
#include <string>

class Date {
public:
	Date();
	~Date();
	Date(const Date&);
	Date(const int, const int, const int);

	Date& operator=(const Date&);
	bool operator==(const Date&) const;
	bool operator!=(const Date&) const;

	virtual std::string toString() const;

	static const std::string INVALID;
	static const std::string UNKNOWN_DATE;
	static const Date UNKNOWN;

private:
	int month;
	int day;
	int year;
	bool unknown;
};

