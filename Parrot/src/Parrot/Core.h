#pragma once

#ifdef PR_PLATFORM_WINDOWS
	#ifdef PR_BUILD_DLL
		#define PARROT_API __declspec(dllexport)
	#else
		#define PARROT_API __declspec(dllimport)
	#endif
#else
	#error Parrot only supports Windows!
#endif // PR_PLATFORM_WINDOWS
