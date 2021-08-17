#include "includes.h" //Includes everything that we need
uintptr_t Baseeeeee = (uintptr_t)GetModuleHandle(NULL);
using ReloadMemory = __int64(*)();
ULONG Initialize()
{

    AllocConsole();
    AttachConsole(GetCurrentProcessId());
    string __ASM;
    cout << NULL <<endl;
    cout << "Welcome to 0xJMP's Authentication Bypasser Prototype" << endl;
    cout << "Press (1) to Initialize The Crack" << endl;
    getline(cin,__ASM);
    if (__ASM == "1");
    {
        ReloadMemory CrackIT = (ReloadMemory)(Baseeeeee + 0x1FFB0);
        cout << "Great News you Choose to Initialize the Program" << endl; //Hillaroius it was the only option LMAOO
        MessageBoxA(NULL, "Github.com/0xJMP Succesfully Cracked And yes ik im 2 smart lol", NULL, NULL);
        CrackIT();


    }


}
BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        Initialize();
        return TRUE;
    }
}