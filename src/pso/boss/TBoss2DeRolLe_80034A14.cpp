#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss2DeRolLe__sub_80034A14(u8 *arg0);
void TBoss2DeRolLe__sub_80034A88(void *arg0);
f32 TObjFish__sub_8001973C(f32);
M2C_UNK TBoss2DeRolLe__sub_800361A4(void *, f32, f32, f32);

extern const f32 TBoss2DeRolLe__data_805D82D8;
extern const f32 TBoss2DeRolLe__data_805D82E8;
extern const f32 TBoss2DeRolLe__data_805D82F0;
extern const f32 TBoss2DeRolLe__data_805D8330;

void TBoss2DeRolLe__sub_80034A14(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    TBoss2DeRolLe__sub_800361A4(arg0 + 0x664, TBoss2DeRolLe__data_805D82F0, TObjFish__sub_8001973C(-M2C_FIELD(arg0, f32 *, 0x38)), TBoss2DeRolLe__data_805D8330);
    TBoss2DeRolLe__sub_800361A4(arg0 + 0x684, TBoss2DeRolLe__data_805D82D8, TObjFish__sub_8001973C(TBoss2DeRolLe__data_805D82E8 - M2C_FIELD(arg0, f32 *, 0x40)), TBoss2DeRolLe__data_805D8330);
}

extern f32 TBoss2DeRolLe__data_805D827C;
extern f32 lbl_805D8284;
extern f32 lbl_805D8444;

void TBoss2DeRolLe__sub_80034A88(void *arg0) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x6A4);
    if (temp_f2 > lbl_805D8284) {
        M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) (temp_f2 - lbl_805D8284);
        return;
    }
    if (temp_f2 < lbl_805D8444) {
        M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) (temp_f2 + lbl_805D8284);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) TBoss2DeRolLe__data_805D827C;
}

}
