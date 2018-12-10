#pragma once
#include <string>
#ifdef BUILDING_GRACIAS
#define DECLSPEC_API _declspec(dllexport)
#else
#define DECLSPEC_API _declspec(dllimport)
#endif

class DECLSPEC_API HelloWorld
{
public:
	HelloWorld();
	~HelloWorld();
	const std::string& Greet() const;
	const std::string& Msg() const;
};

