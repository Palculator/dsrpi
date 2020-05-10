#pragma once

#ifndef _DSRPI_MAIN_H
#define _DSRPI_MAIN_H

#include <Windows.h>

#define DSRPI_INTRO "\n+-------------------------------+\n|           DSRPI v0.1          |\n+-------------------------------+\n"

BOOL on_process_attach(HMODULE h_module, LPVOID lp_reserved);
BOOL on_process_detach(HMODULE h_module, LPVOID lp_reserved);
BOOL on_thread_attach(HMODULE h_module, LPVOID lp_reserved);
BOOL on_thread_detach(HMODULE h_module, LPVOID lp_reserved);

#endif

