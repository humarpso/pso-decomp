#include "types.h"

extern "C" {

int fn_8013ACA4(void*, void*);
void* fn_8013AC0C(void* p, void* a1);

void* fn_8013AC0C(void* p, void* a1) { *(void**)(p) = *(void**)((char*)a1 + 0x0); fn_8013ACA4((char*)p + 0x4, (char*)a1 + 0x4); fn_8013ACA4((char*)p + 0x8, (char*)a1 + 0x8); fn_8013ACA4((char*)p + 0xc, (char*)a1 + 0xc); fn_8013ACA4((char*)p + 0x10, (char*)a1 + 0x10); fn_8013ACA4((char*)p + 0x14, (char*)a1 + 0x14); fn_8013ACA4((char*)p + 0x18, (char*)a1 + 0x18); fn_8013ACA4((char*)p + 0x1c, (char*)a1 + 0x1c); fn_8013ACA4((char*)p + 0x20, (char*)a1 + 0x20); return p; }

}
