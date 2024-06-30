#include "pch.h"
#include "detours.h"

#pragma comment(lib, "detours.lib")

void (WINAPI* real_get_system_time_precise_as_file_time)(LPFILETIME lp_system_time_as_file_time) = GetSystemTimePreciseAsFileTime;

/**
 * This function returns 13 June 2024 instead of the current date.
 * @param lp_system_time_as_file_time 
 */
void WINAPI hooked_get_system_time_as_file_time(const LPFILETIME lp_system_time_as_file_time)
{
    const SYSTEMTIME st = { 2024, 6, 0, 13, 0, 0, 0, 0 };
    SystemTimeToFileTime(&st, lp_system_time_as_file_time);
}

BOOL APIENTRY DllMain(HMODULE h_module, DWORD ul_reason_for_call, LPVOID lp_reserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        // Detour functions that replaces the Windows API-function GetSystemTimePreciseAsFileTime() with hooked_get_system_time_as_file_time()
        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());
        DetourAttach(&reinterpret_cast<PVOID&>(real_get_system_time_precise_as_file_time), hooked_get_system_time_as_file_time);
        DetourTransactionCommit();
        break;
    case DLL_PROCESS_DETACH:
        // Restores the Windows API-function
        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());
        DetourDetach(&reinterpret_cast<PVOID&>(real_get_system_time_precise_as_file_time), hooked_get_system_time_as_file_time);
        DetourTransactionCommit();
        break;
    }
    return TRUE;
}