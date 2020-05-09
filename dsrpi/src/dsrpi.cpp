#include "sp/main.h"

BOOL on_process_attach(HMODULE h_module, LPVOID lp_reserved) {
	global::cmd_out << "AAAAAAAAAAAAAAAAAAAAAAAAAA\n\n";
	return true;
}
