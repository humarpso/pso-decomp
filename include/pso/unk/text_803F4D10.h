#ifndef PSO_UNK_TEXT_803F4D10_H
#define PSO_UNK_TEXT_803F4D10_H

#include "types.h"

u32 calc_crc32(s32 buf, s32 len);
extern "C" {
u32 fn_803F4D10(u32 crc, u8 *buf, s32 len);
}

// --- C functions defined in text_803F4D10.cpp ---
extern "C" {
u32 fn_803F4D10(u32 crc, u8 *buf, s32 len);
}
// --- end of C functions

#endif
