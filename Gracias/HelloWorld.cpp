#include "stdafx.h"
#include "HelloWorld.h"


HelloWorld::HelloWorld()
{
}


HelloWorld::~HelloWorld()
{
}

namespace
{
	const std::string greet = "hi!!!";
	const std::string msg = "Greetings, This is a test!";
}

const std::string& HelloWorld::Greet() const
{
	return greet;
}


const std::string& HelloWorld::Msg() const
{
	return msg;
}