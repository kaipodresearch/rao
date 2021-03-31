// Written by Milad Kahsari Alhadi
// aiooo.ir
// Telegram: clightning

#include <windows.h> 

#include "obfuscation.h"

BASE g_CallGate = { 0 };

int main(int argc, char* argv[])
{
	obfuscation::load(g_CallGate);
	g_CallGate._MessageBoxW(NULL, L"I am an anonymous call.", L"Obfuscated Runtime", MB_OKCANCEL);

	return 0;
}


