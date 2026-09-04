#include "types.h"

extern "C" {

int fn_80221838(void);
void set_flag70_bit10__20TWindowShortListCtrlFPv(void* p);

void set_flag70_bit10__20TWindowShortListCtrlFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

int fn_80221838(void) { return 0; }

}
