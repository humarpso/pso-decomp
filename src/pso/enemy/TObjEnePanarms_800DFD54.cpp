#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEnePanarms__sub_800DFD54(void *arg0);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
M2C_UNK fn_8002AE74(void *, M2C_UNK);
s32 fn_80141F84(s32, s32, void *);

extern const f32 TObjEnePanarms__data_805DA524;

void TObjEnePanarms__sub_800DFD54(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x37C);
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x384) = 1;
    M2C_FIELD(arg0, s32 *, 0x388) = 1;
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) TObjEnePanarms__data_805DA524;
    M2C_FIELD(arg0, s32 *, 0x3B4) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 1;
    if (fn_80141F84(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4), temp_r5) < 0x2000) {
        if (TBoss4Type2__sub_80141FA8(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4)) >= 0) {
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D4) - 0x2000);
        } else {
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D4) + 0x2000);
        }
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
    fn_8002AE74(arg0, 2);
}

}
