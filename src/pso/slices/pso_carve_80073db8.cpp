#include "types.h"

extern "C" {

int TWindowSubComCard__sub_80073DB8(void* p);
void fn_80073DC4(void* p, s32 v);

int TWindowSubComCard__sub_80073DB8(void* p) { return (*(u16*)((char*)p + 0x70) >> 2) & 0x1; }
void fn_80073DC4(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }
int fn_80073DCC(void) { return 0; }

}
