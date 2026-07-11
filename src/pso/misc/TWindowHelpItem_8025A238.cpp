#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowHelpItem__sub_8025A238(u16 *arg0, s32 arg1);
void set_flag8_and_field20__15TWindowHelpItemFPvi(void *arg0, s32 arg1);
void set_compare_color__15TWindowHelpItemFPvi(void *arg0, s32 arg1);
M2C_UNK set_flag4_and_field1c__15TWindowHelpItemFPvi(void *, s32);

void TWindowHelpItem__sub_8025A238(u16 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *arg0 |= 0x10;
        return;
    }
    *arg0 &= 0xFFFFFFEF;
}

void set_flag8_and_field20__15TWindowHelpItemFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 8);
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}

void set_compare_color__15TWindowHelpItemFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r0 == arg1) {
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
        return;
    }
    if (temp_r0 > arg1) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0xFF77E8FF;
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = 0xFFDD8C41;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0x1E;
    set_flag4_and_field1c__15TWindowHelpItemFPvi(arg0, arg1);
}

}
