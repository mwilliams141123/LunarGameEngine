#pragma once

#ifdef L_PLATFORM_WINDOWS
	#ifdef L_BUILD_DLL
		#define LUNAR_API __declspec(dllexport)
	#else
		#define LUNAR_API __declspec(dllimport)
	#endif
#endif