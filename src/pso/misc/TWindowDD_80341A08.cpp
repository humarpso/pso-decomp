#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowDD__sub_80341AC0(void);
void TWindowDD__sub_80341B10(void* p);
void TWindowDD__sub_80341B1C(void* p);

s32 TWindowDD__sub_80341A08(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;

    if (TWindowDD__sub_80341AC0() == 0) {
        return 0;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x78);
    temp_r5 = temp_r4 / 2;
    if (arg1 > 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x6C);
        if (temp_r0 < temp_r5) {
            return 0;
        }
        return (M2C_FIELD(arg0, s32 *, 0x68) + (temp_r4 - temp_r0)) < M2C_FIELD(arg0, s32 *, 0x74);
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_r3 >= temp_r5) {
        return 0;
    }
    return ((u32) (M2C_FIELD(arg0, s32 *, 0x68) - (temp_r3 + 1)) >> 0x1FU) ^ 1;
}

}
