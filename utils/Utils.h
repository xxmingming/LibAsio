#pragma once
#include <string>
///////////////////////////////////////////////////////////////////

extern std::string GBToUTF8(const char* str);

extern std::string UTF8ToGB(const char* str);


////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////
template<int AllocSize>
BOOL AFXAPI AllocHook( size_t nSize, BOOL bObject, LONG lRequestNumber )
{
	if(nSize == AllocSize)
	{
#ifdef _DEBUG
		//DebugBreak();
		int i = 0;
		i++;
#endif
	}

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////////////////////