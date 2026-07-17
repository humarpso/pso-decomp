#include "types.h"

extern "C" {

void reset_status_block__10TObjPlayerFPv(void* p);

void reset_status_block__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; *(s32*)((char*)p + 0x8) = 0; *(s32*)((char*)p + 0xc) = 0; *(s32*)((char*)p + 0x10) = 0; }

}
