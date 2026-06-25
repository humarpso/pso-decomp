#include "types.h"

extern "C" {

void fn_8001BED0(void* p, f32 v);
void fn_8001BED8(void* p, u32 v);
void fn_8001BEE8(void* p, u32 v);
void fn_8001BF40(void* p);

void fn_8001BED0(void* p, f32 v) { *(f32*)((char*)p + 0x34) = v; }
void fn_8001BED8(void* p, u32 v) { *(u32*)((char*)p + 0x0) |= v; }
void fn_8001BEE8(void* p, u32 v) { *(u32*)((char*)p + 0x0) &= ~v; }
int fn_8001BEF8(void) { return 0; }
void* fn_8001BF10(void* p) { fn_8001BF40(p); return p; }
void fn_8001BF40(void* p) { *(s32*)((char*)p + 0x0) = 0; }

}
