#pragma once
#include "Resource.h"
#include "Date.h"

// A purchaseable is a resource that can be associated with a monetary cost. The cost can be zero, but this should have meaning.
// For example, it makes no sense that a player has a cost, but a free game has a cost of zero. Every purchaseable also has a
// date of first release.
class Purchaseable : public Resource {
public:
	Purchaseable();
	~Purchaseable();
	Purchaseable(const Purchaseable& p);

	virtual Purchaseable& operator=(const Purchaseable&);
	virtual bool operator==(const Purchaseable&) const;

	virtual Purchaseable& hasName(const std::string&);
	virtual Purchaseable& hasCost(const float c);
	virtual Purchaseable& hasReleaseDate(const Date&);

	virtual std::string toString() const;

	static const std::string NO_COST;
	static const std::string UNKNOWN_COST;

	// Allowable errors: 16-31
	static const int ERROR_COST_IS_NEGATIVE = 16;
	static const int ERROR_RELEASE_DATE_INVALID = 17;

protected:
	void assignErrorCode(const int);

private:
	float cost;
	Date releaseDate;
};

