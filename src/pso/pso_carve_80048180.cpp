#include "types.h"

extern "C" {

void fn_800481B4(void* p);
void fn_8004824C(void* p);

int fn_80048180(void) { return 0; }
void fn_800481B4(void* p) { *(u8*)((char*)p + 0x0) = 133; *(u8*)((char*)p + 0x1) = 5; }
int fn_800481C8(void) { return 0; }
int fn_80048218(void) { return 0; }
void fn_8004824C(void* p) { *(u8*)((char*)p + 0x0) = 24; *(u8*)((char*)p + 0x1) = 3; }

}
