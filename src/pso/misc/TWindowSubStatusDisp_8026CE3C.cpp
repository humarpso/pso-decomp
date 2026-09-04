#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_scale__20TWindowSubStatusDispFPv(void* p);
void set_entry1_field20__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
void * get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s32 a1 = 0);

f32 get_scale__20TWindowSubStatusDispFPv(void* p) { return *(f32*)((char*)p + 0x1c); }
void set_entry1_field20__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1), s32 *, 0x20) = arg1;
}

}
