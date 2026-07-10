#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_resta_heal__11TBoss4Type2FPv(void *arg0);

void *fn_8001E1D8(M2C_UNK, void *);
M2C_UNK fn_80052420(u16, s32);
f32 TTecResta__sub_802394B0(s32);

void apply_resta_heal__11TBoss4Type2FPv(void *arg0) {
    s16 temp_r31;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x2B0);
    temp_r31 = M2C_FIELD(temp_r4, s16 *, 2);
    fn_80052420(M2C_FIELD(arg0, u16 *, 0x3C4), (temp_r31 / 5) + (s32) TTecResta__sub_802394B0(M2C_FIELD(fn_8001E1D8(0x37, temp_r4), s32 *, 0x1C)));
}

}
