#include "types.h"

extern "C" {

void set_flag70_bit10__20TWindowShortListCtrlFPv(void* p);

void set_flag70_bit10__20TWindowShortListCtrlFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

}
