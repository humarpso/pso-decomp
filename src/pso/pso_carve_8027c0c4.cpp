#include "types.h"

extern "C" {

int fn_8027C0DC(void* p);
int fn_8027C0E8(void* p);

int fn_8027C0C4(void) { return 0; }
int fn_8027C0DC(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int fn_8027C0E8(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
