#include "pch.h"
#include "Master_Control.h"
using namespace MASTER_CONTROLL;

BOOL APIENTRY DllMain(HMODULE /* hModule */, DWORD ul_reason_for_call, LPVOID /* lpReserved */)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

MCDLL_API COMUNICATION_VIRTUAL_CLASS* APIENTRY GET_P_M_COMUNICATION()
{
	return new P_M_COMUNICATION;
}