#include "types.h"

extern "C" {

void* fn_80249C10(void* p);
u8 fn_80249C18(void* p);
u8 fn_80249C20(void* p);

void* fn_80249C10(void* p) { return (char*)p + 0x20; }
u8 fn_80249C18(void* p) { return *(u8*)((char*)p + 0x8e); }
u8 fn_80249C20(void* p) { return *(u8*)((char*)p + 0x8d); }

}
