#pragma once
#include "GameMode.h"
#include "Purchaseable.h"
#include "Date.h"
#include <vector>

// A GameExpansion is any purchaseable part of a game that is not the core game. To qualify for this
// category, this must have been purchaseable at some point as a standalone piece, even if it is now
// considered to be combined with other pieces.
class GameExpansion : public Purchaseable {
public:
	GameExpansion();
	~GameExpansion();
	GameExpansion(const GameExpansion&);

	virtual GameExpansion& operator=(const GameExpansion&);
	virtual bool operator==(const GameExpansion&) const;

	virtual GameExpansion& hasName(const std::string&);
	virtual GameExpansion& hasCost(const float);
	virtual GameExpansion& hasReleaseDate(const Date&);
	virtual GameExpansion& hasGameMode(const GameMode&);

	virtual std::string toString() const;

	// Allowable errors: 48-63
	static const int ERROR_MODE_ALREADY_EXISTS = 48;

protected:
	void assignErrorCode(const int);

private:
	std::vector<GameMode> modes;
};