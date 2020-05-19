#pragma once
#include "Purchaseable.h"

// A Platform is a way to play a game.
class Platform : public Purchaseable {
public:
	Platform();
	~Platform();
	Platform(const Platform&);

	virtual Platform& operator=(const Platform&);
	virtual bool operator==(const Platform&) const;

	virtual Platform& hasName(const std::string);

	virtual std::string toString() const;

protected:
	void assignErrorCode(const int);
};

