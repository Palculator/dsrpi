#pragma once

#ifndef _DSRPI_H
#define _DSRPI_H

#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
#define CLOG(msg) global::cmd_out << __FILENAME__ << ": " << msg << "\n";

#include <stdio.h>
#include <Windows.h>

#include "sp/main.h"

void inline FATALERROR(const char* error, ...) {
	char dest[1024];
	va_list argptr;
	va_start(argptr, error);
	vsnprintf(dest, 1024, error, argptr);
	va_end(argptr);

	MessageBox(NULL, dest, NULL, MB_OK);
	exit(1);
}

#endif
