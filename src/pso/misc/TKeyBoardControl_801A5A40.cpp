#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TKeyBoardControl__sub_801A5A40(void *arg0);

extern s32 lbl_805D53A4;
extern const f32 lbl_805DC0B0;

s32 TKeyBoardControl__sub_801A5A40(void *arg0) {
    s32 temp_r4_2;
    void *temp_r4;
    s32 temp_r5;
    u16 temp_r0;

    temp_r4 = M2C_FIELD(arg0, void **, 8);
    if (temp_r4 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r4, f32 *, 0x24) < lbl_805DC0B0) {
        return 0;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(temp_r4, s32 *, 0x1C);
    temp_r0 = temp_r5 - M2C_FIELD(arg0, s32 *, 0);
    if (((s32) temp_r0 > 0x5000) && ((s32) temp_r0 < 0xB000)) {
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 4) = (s32) lbl_805D53A4;
        if ((s32) (M2C_FIELD(arg0, s32 *, 4) - temp_r4_2) < 8) {
            return 1;
        }
    }
    return 0;
}

}
