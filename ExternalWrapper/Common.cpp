#include "stdafx.h"
#include "Common.h"

CommonWrapper::CommonWrapper()
{
	_common = gcnew Common();
}

CommonWrapper::~CommonWrapper()
{
	delete _common;
}

char* CommonWrapper::CommonHelloWorld(const char* username)
{
	return (char*)Marshal::StringToHGlobalAnsi(_common->HelloWorld(gcnew System::String(username))).ToPointer();
}