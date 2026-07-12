#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__sub_802674B0(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK set_inventory_item__20TWindowSubStatusDispFPvPvii(s32, s32, s32, s32);

void TWindowSubStatusDisp__sub_802674B0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;
    if (arg1 != 0) {
        temp_r4 = (s16) M2C_FIELD(arg0, s16 *, 0x72);
        if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
            set_inventory_item__20TWindowSubStatusDispFPvPvii(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2, arg3);
            M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
        }
    }
}

}
