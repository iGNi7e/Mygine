#pragma once

#ifdef MG_PLATFORM_WINDOWS
	#ifdef MG_BUILD_DLL
		#define MYGINE_API __declspec(dllexport)
	#else
		#define MYGINE_API __delclspec(dllinport)
	#endif
#else
	#error Mygine support only windows!
#endif
