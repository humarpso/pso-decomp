#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__10TBoss6MineFPv(void *arg0);
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
s32 fn_8001ED9C(s32, M2C_UNK);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E4AF4(s32, s32, f32);
M2C_UNK fn_803E4BC4();
M2C_UNK fn_803E4BD0();

extern f32 TBoss6Mine__data_805DF580;

void draw__10TBoss6MineFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r30;

    fn_803E4BC4();
    temp_r31 = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x374), 2);
    temp_r30 = TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x374), 2);
    temp_r31_2 = fn_8001ED9C(M2C_FIELD(arg0, s32 *, 0x374), 0);
    fn_803DA798(temp_r31);
    TBoss6PlotFalz__sub_802AC008(M2C_FIELD(arg0, f32 *, 0x3C8), TBoss6Mine__data_805DF580);
    fn_803E4AF4(temp_r30, temp_r31_2, M2C_FIELD(arg0, f32 *, 0x39C));
    update_camera_target__14TBoss6PlotFalzFv();
    fn_803E4BD0();
}

}
