#pragma once

#ifdef RD_PLATFORM_WINDOWS
	#ifdef RD_BUILD_DLL
		#define REDACTED_API __declspec(dllexport)
	#else
		#define REDACTED_API __declspec(dllimport)
	#endif
#else
	#error Redacted only supports Windows
#endif