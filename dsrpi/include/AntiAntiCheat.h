/*
    Taken with permission from the Dark Souls 1 Overhaul project: https://github.com/metal-crow/Dark-Souls-1-Overhaul

    DARK SOULS OVERHAUL

    Contributors to this file:
        Ainsley Harriott  -  Reverse engineering, Anti-Cheat Identification
        metal-crow  -  Reverse engineering, Anti-Cheat Identification
*/
#pragma once

#ifndef ANTI_ANTI_CHEAT_H
#define ANTI_ANTI_CHEAT_H

#include <cstdint>
#include <tuple>

class AntiAntiCheat
{
public:
    static void start();

private:
    static const uint64_t game_hash_compare_checks[];
    static const std::tuple<uint64_t, uint8_t> game_runtime_hash_checks[];
    static const uint64_t game_send_playerdata_to_server_injection_offset = 0xBD0577;
};

#endif

