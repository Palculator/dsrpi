#include "sp/main.h"

#include "DSRData.h"
#include "DSRPI.h"

uint64_t DSRData::ds1_base = NULL;

void DSRData::init() {
	CLOG("Initializing DSR pointers...");
	DSRData::ds1_base = (uint64_t)sp::mem::get_process_base();
	CLOG("Done initializing DSR pointers.");
}

