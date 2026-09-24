#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 TObjPlayer__sub_8001978C(f32);
extern const f64 lbl_8043F2C0;
void TObjPlayer__sub_80142170(u8 *arg0, s32 *arg1, s32 *arg2);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 TObjPlayer__sub_8001978C(f32);
extern const f64 lbl_8043F2C0;
void TBoss1Dragon__sub_8014220C(u8 *arg0, s32 *arg1, s32 *arg2);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 TObjPlayer__sub_8001978C(f32);
extern const f64 lbl_8043F2C0;
void TObjPlayer__sub_801422A8(u8 *arg0, s32 *arg1, s32 *arg2);
f32 TBoss8Dragon__sub_803D64C0();
f32 TBoss8Dragon__sub_803D64DC(s32);
void TObjPlayer__sub_80141DCC(s32 arg0, void *arg1, void *arg2, f32 farg0);
f32 TObjPlayer__sub_8014241C(u8 *arg0, u8 *arg1);
}

extern "C" {

int TAdSinglePlyChrSelectGC__sub_80141E8C(void);
int TAdSinglePlyChrSelectGC__sub_80141EA0(void);
int TBoss4Type2__sub_80141FA8(void);
int TObjPlayer__sub_80141F84(void);
s32 calc_angle_to__10TObjPlayerFPvPv(void *arg0, void *arg1);
void calc_direction_vector__10TObjPlayerFiPvf(s32 arg0, void *arg1, f32 farg0);
s32 check_camera_distance__10TObjPlayerFi(s32 arg0);
s32 clamp_s32__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void fn_80141EB4(void);
void setSpriteInverseColorBlend(void);
void init_xyz_limits__10TObjPlayerFv(void);
s32 is_in_range__10TObjPlayerFf(f32 farg0);
u16 lerp_angle_half__10TObjPlayerFUsUs(u16 arg0, u16 arg1);
void reset_transform_state__10TObjPlayerFv(void);
void vsub(void *arg0, void *arg1, void *arg2);
f32 TBoss8Dragon__sub_803D64C0();
f32 TCameraCtrl__sub_803D8D00();
M2C_UNK TNpcPlayer__sub_803D97B4(s32);
int abs__4cXyzCFv(int, int);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);

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
    M2C_FIELD(arg1, f32 *, 8) = (f32) (farg0 * TBoss8Dragon__sub_803D64DC(arg0));
}

extern const f64 lbl_8043F2C0;

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_80141DCC(s32 arg0, void *arg1, void *arg2, f32 farg0) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((farg0 * TBoss8Dragon__sub_803D64C0()) + M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((farg0 * TBoss8Dragon__sub_803D64DC((s32)(arg0))) + M2C_FIELD(arg1, f32 *, 8));
}
#pragma pop

s32 calc_angle_to__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    f32 temp_f3;

    temp_f3 = M2C_FIELD(arg1, f32 *, 0);
    return (s32) (lbl_8043F2C0 * get_ad_end_text_start__10TObjPlayerFv(temp_f3 - M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg0, f32 *, 8)));
}

int TAdSinglePlyChrSelectGC__sub_80141E8C(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_80141EA0(void) { return 0; }
void fn_80141EB4(void) { abs__4cXyzCFv(0, 5); abs__4cXyzCFv(1, 6); }
void setSpriteInverseColorBlend(void) { abs__4cXyzCFv(0, 5); abs__4cXyzCFv(1, 7); }

void reset_transform_state__10TObjPlayerFv(void) { abs__4cXyzCFv(0, 8); abs__4cXyzCFv(1, 6); }

void init_xyz_limits__10TObjPlayerFv(void) { abs__4cXyzCFv(0, 8); abs__4cXyzCFv(1, 10); }

int TObjPlayer__sub_80141F84(void) { return 0; }
int TBoss4Type2__sub_80141FA8(void) { return 0; }

s32 clamp_s32__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < arg1) {
        var_r3 = arg1;
    }
    if (var_r3 > arg2) {
        return arg2;
    }
    return var_r3;
}

#pragma push
#pragma scheduling on
void TObjPlayer__sub_80142170(u8 *arg0, s32 *arg1, s32 *arg2) {
    f32 temp_f0;
    f32 temp_f1;
    *arg1 = -(s32) (lbl_8043F2C0 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 8)), (f32) (M2C_FIELD(arg0, f32 *, 0))));
    temp_f1 = M2C_FIELD(arg0, f32 *, 8);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0);
    *arg2 = (s32) (lbl_8043F2C0 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 4)), (f32) (TObjPlayer__sub_8001978C((f32) ((temp_f1 * temp_f1) + (temp_f0 * temp_f0))))));
}
#pragma pop

#pragma push
#pragma scheduling on
void TBoss1Dragon__sub_8014220C(u8 *arg0, s32 *arg1, s32 *arg2) {
    f32 temp_f0;
    f32 temp_f1;
    *arg2 = -(s32) (lbl_8043F2C0 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 0)), (f32) (M2C_FIELD(arg0, f32 *, 4))));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0);
    temp_f0 = M2C_FIELD(arg0, f32 *, 4);
    *arg1 = (s32) (lbl_8043F2C0 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 8)), (f32) (TObjPlayer__sub_8001978C((f32) ((temp_f1 * temp_f1) + (temp_f0 * temp_f0))))));
}
#pragma pop

#pragma push
#pragma scheduling on
void TObjPlayer__sub_801422A8(u8 *arg0, s32 *arg1, s32 *arg2) {
    f32 temp_f0;
    f32 temp_f1;
    *arg1 = -(s32) (lbl_8043F2C0 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 4)), (f32) (M2C_FIELD(arg0, f32 *, 8))));
    temp_f1 = M2C_FIELD(arg0, f32 *, 4);
    temp_f0 = M2C_FIELD(arg0, f32 *, 8);
    *arg2 = (s32) (lbl_8043F2C0 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 0)), (f32) (TObjPlayer__sub_8001978C((f32) ((temp_f1 * temp_f1) + (temp_f0 * temp_f0))))));
}
#pragma pop

u16 lerp_angle_half__10TObjPlayerFUsUs(u16 arg0, u16 arg1) {
    return (u16) (arg0 + ((s16) ((u16) arg1 - arg0) >> 1));
}

void vsub(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg0, f32 *, 4));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg0, f32 *, 8));
}

extern f32 lbl_805DB15C;
extern f32 lbl_805DB160;

#pragma fp_contract on
f32 TObjPlayer__sub_8014241C(u8 *arg0, u8 *arg1) {
  f32 *new_var;
  f32 temp_f3;
  f32 temp_f1;
  f32 temp_f4;
  new_var = (f32 *) (((s8 *) arg0) + 4);
  ;
  temp_f3 = (*((f32 *) (((s8 *) arg1) + 0))) - (*((f32 *) (((s8 *) arg0) + 0)));
  temp_f1 = (*((f32 *) (((s8 *) arg1) + 8))) - (*((f32 *) (((s8 *) arg0) + 8)));
  return (temp_f1 * temp_f1) + ((temp_f3 * temp_f3) + (((*((f32 *) (((s8 *) arg1) + 4))) - (*new_var)) * ((*((f32 *) (((s8 *) arg1) + 4))) - (*new_var))));
}

s32 is_in_range__10TObjPlayerFf(f32 farg0) {
    if ((lbl_805DB160 < farg0) && (farg0 < lbl_805DB15C)) {
        return 1;
    }
    return 0;
}

}
