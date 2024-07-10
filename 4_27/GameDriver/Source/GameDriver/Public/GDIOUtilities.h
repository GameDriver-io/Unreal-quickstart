// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include <string>
#include "HAL/Platform.h"

GAMEDRIVER_API bool ValidateLicense(std::string filename, int& daysLeft, std::string& licenseId);

namespace GDIOUtilities
{
	static constexpr time_t const NULL_TIME = -1;
#if PLATFORM_ANDROID || PLATFORM_IOS || PLATFORM_MAC || PLATFORM_SWITCH
	int StringToWString(std::u16string& ws, const std::string& s);
#else
	int StringToWString(std::wstring& ws, const std::string& s);
#endif
	long tz_offset(time_t when = NULL_TIME);
}
