#include "types.h"

extern "C" {

int TWindowSubMag__sub_8027C0DC(void* p);
int TWindowSubMag__sub_8027C0E8(void* p);

int TWindowSubMag__sub_8027C0C4(void) { return 0; }
int TWindowSubMag__sub_8027C0DC(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubMag__sub_8027C0E8(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
