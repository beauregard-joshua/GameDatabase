#pragma once
#include "Platform.h"

// A PC platform includes all games that do not satisfy the following two criteria:
// (1) Purchaseable on Steam
// (2) Browser playable
class PC : public Platform {
public:
	PC();
	~PC();
};

