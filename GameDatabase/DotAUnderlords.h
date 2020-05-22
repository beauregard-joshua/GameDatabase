#pragma once
#include "Game.h"

class DotAUnderlords : public Game {
public:
	DotAUnderlords();
	~DotAUnderlords();

	virtual DotAUnderlords& hasName(const std::string&);
	virtual DotAUnderlords& hasCost(const float);
	virtual DotAUnderlords& hasReleaseDate(const Date&);
	virtual DotAUnderlords& hasGameMode(const GameMode&);
	virtual DotAUnderlords& isOnPlatform(const Platform&);
	virtual DotAUnderlords& isCrossPlatform(const int);
};

class DotAUnderlordsPC : public DotAUnderlords {
public:
	DotAUnderlordsPC();
	~DotAUnderlordsPC();
};

class DotAUnderlordsMac: public DotAUnderlords {
public:
	DotAUnderlordsMac();
	~DotAUnderlordsMac();
};

class DotAUnderlordsiOS : public DotAUnderlords {
public:
	DotAUnderlordsiOS();
	~DotAUnderlordsiOS();
};

class DotAUnderlordsAndroid : public DotAUnderlords {
public:
	DotAUnderlordsAndroid();
	~DotAUnderlordsAndroid();
};
