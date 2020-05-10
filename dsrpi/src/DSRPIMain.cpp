#include "sp/main.h"

#include "AntiAntiCheat.h"
#include "DSRData.h"
#include "DSRPI.h"
#include "DSRPIMain.h"

BOOL on_process_attach(HMODULE h_module, LPVOID lp_reserved) {
	global::cmd_out << DSRPI_INTRO;

	DSRData::init();
	AntiAntiCheat::start();

	return true;
}

BOOL on_process_detach(HMODULE h_module, LPVOID lp_reserved) {
	return true;
}

BOOL on_thread_attach(HMODULE h_module, LPVOID lp_reserved) {
	return true;
}

BOOL on_thread_detach(HMODULE h_module, LPVOID lp_reserved) {
	return true;
}

