#include "types.h"

extern "C" {

void fn_803323A8(void* p);
void fn_803323B8(void* p);
void TWindowSubTradeMain__sub_803323C8(void* p);

void fn_803323A8(void* p) { *(u16*)((char*)p + 0x60) |= 0x40; }
void fn_803323B8(void* p) { *(u16*)((char*)p + 0x60) &= 0xffffffbf; }
void TWindowSubTradeMain__sub_803323C8(void* p) { *(u16*)((char*)p + 0x70) &= 0xfffffffb; }

}
