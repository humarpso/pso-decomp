#pragma fp_contract on
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern M2C_UNK lbl_804B84C0[];

void TObjMapCsn__sub_80194674(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r0 == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x88) == 0) {
            M2C_FIELD(arg0, s32 *, 0x88) = 1;
        }
    } else {
        if ((u32) temp_r0 > 5U) {
            M2C_FIELD(arg0, s32 *, 0x84) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x88) = (s32) lbl_804B84C0[M2C_FIELD(arg0, s32 *, 0x84)];
    }
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) | 0x40000000);
}

}
