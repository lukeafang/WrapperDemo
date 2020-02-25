#pragma once

#include "ExternalWrapper.h"

class CommonWrapper
{
private:

public:
	msclr::auto_gcroot<Common^> _common;
	static CommonWrapper* _instance;

	CommonWrapper();
	~CommonWrapper();

	char* CommonHelloWorld(const char* username);

};