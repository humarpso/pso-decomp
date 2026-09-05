#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void update_status_entry__20TWindowSubStatusDispFi(s32);
s32 update_hp_gauge__20TWindowSubStatusDispFi(s32);
s32 fn_8026F8CC(void *);
void fn_8026FEA8(u8 *arg0);
}

extern "C" {

void fn_8026FEA8(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6);
    M2C_FIELD(temp_r31, s32 *, 0x2C) = fn_8026F8CC((void *) (arg0));
    temp_r31_2 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 7);
    M2C_FIELD(temp_r31_2, s32 *, 0x2C) = update_hp_gauge__20TWindowSubStatusDispFi((s32) arg0);
    update_status_entry__20TWindowSubStatusDispFi((s32) arg0);
}

}
