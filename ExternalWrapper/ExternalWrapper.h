// ExternalWrapper.h

#pragma once

#using "External.dll"

#include <msclr\auto_gcroot.h>

using namespace System;
using namespace System::Runtime::InteropServices; // Marshal
using namespace External;
