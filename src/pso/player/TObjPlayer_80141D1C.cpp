#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_camera_distance__10TObjPlayerFi(s32 arg0);
void calc_direction_vector__10TObjPlayerFiPvf(s32 arg0, void *arg1, f32 farg0);
f32 TBoss8Dragon__sub_803D64C0();
f32 TBoss8Dragon__sub_803D64DC(s32, f32);
f32 TCameraCtrl__sub_803D8D00();
M2C_UNK TNpcPlayer__sub_803D97B4(s32);

extern f32 lbl_805DB158;

s32 check_camera_distance__10TObjPlayerFi(s32 arg0) {
    if (TCameraCtrl__sub_803D8D00() < lbl_805DB158) {
        return 0;
    }
    TNpcPlayer__sub_803D97B4(arg0);
    return 1;
}

extern const f32 lbl_805DB150;

void calc_direction_vector__10TObjPlayerFiPvf(s32 arg0, void *arg1, f32 farg0) {
    f32 temp_f1;

    temp_f1 = farg0 * TBoss8Dragon__sub_803D64C0();
    M2C_FIELD(arg1, f32 *, 0) = temp_f1;
    M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_805DB150;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (farg0 * TBoss8Dragon__sub_803D64DC(arg0, temp_f1));
}

}
