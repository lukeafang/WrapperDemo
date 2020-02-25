#include "stdafx.h"
#include "Common.h"
#include "CommonWrapper.h"

CommonWrapper* CommonWrapper::_instance = NULL;

const char* __stdcall HelloWorld(const char* username)
{
	if (CommonWrapper::_instance == NULL)
		CommonWrapper::_instance = new CommonWrapper();
	

	return CommonWrapper::_instance->CommonHelloWorld(username);
}