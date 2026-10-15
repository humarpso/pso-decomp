#include "types.h"

extern "C" {

f32 get_scale__20TWindowSubStatusDispFPv(void* p);
void set_entry1_field20__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
void * get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s32 a1 = 0);

f32 get_scale__20TWindowSubStatusDispFPv(void* p) { return *(f32*)((char*)p + 0x1c); }
void set_entry1_field20__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    *(s32 *)((s8 *)(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1)) + 0x20) = arg1;
}

}
