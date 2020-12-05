// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include <iostream>
#include <string>

const std::string version = "V0.0.10";

extern "C" {
    __declspec(dllexport) int outadd(int a, int b);
    __declspec(dllexport) void outloaded();
}

int outadd(int a,int b);
void outloaded();

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
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

int outadd(int a, int b)
{
    int outcont;
    outcont = a + b;
    return outcont;
}

void outloaded()
{
    using namespace std;
    cout << "<syhan> <DLL for syhan-BDSpyrunner> loaded!" << endl;
    cout << "当前版本为：" << version << endl;
}