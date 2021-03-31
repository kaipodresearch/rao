#pragma once

#include "Windows.h"

typedef int (WINAPI* fnMessageBoxW)(HWND, LPCTSTR, LPCTSTR, UINT);
#define HashMessageBoxW 1903425129

#define offset_to_pointer(Module, Pointer) PBYTE(PBYTE(Module) + DWORD(Pointer))

struct BASE {
	HMODULE User32;
	fnMessageBoxW _MessageBoxW;
};

namespace obfuscation {
	VOID	load(BASE arg_api);
	HMODULE get_proc_address(HMODULE arg_module_base, DWORD arg_hash, DWORD arg_data_directory);
	HMODULE resolved_functions(HMODULE arg_module_base, DWORD arg_hash);
}

namespace encoder {
	UINT api_call_hashed(PCHAR arg_input);
};

extern BASE g_CallGate;

