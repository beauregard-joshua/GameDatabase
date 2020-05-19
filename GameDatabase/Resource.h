#pragma once
#include <string>

// A resource is anything that can be named. Resources include games, players, etc.
class Resource {
public:
	Resource();
	~Resource();
	Resource(const Resource&);

	virtual Resource& operator=(const Resource&);
	virtual bool operator==(const Resource&) const;

	int getLastError() const;

	virtual Resource& hasName(const std::string&);

	virtual std::string toString() const;

	// Allowable errors: 1-15
	static const std::string VOID;
	static const int ERROR_NAME_ALREADY_ASSIGNED = 1;
	static const int ERROR_CANNOT_NAME_VOID = 2;

private:
	std::string name;
	int errorCode;

protected:
	void assignErrorCode(const int);
};

