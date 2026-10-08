#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct TBoss6Tube_802B1020 {
    u8 pad[0x28];
    s32 f28;
    s32 f2c;
} TBoss6Tube_802B1020;

extern "C" {
f32 calc_tube_progress__10TBoss6TubeFi(s32 arg0);
f32 get_random_float__8TObjFishFv(f32);
s32 rand(void);
void TBoss6Tube__sub_802B129C(u8 *arg0);
f32 scale_by_const__10TBoss6TubeFf(f32 farg0);
f32 calc_tube_progress__10TBoss6TubeFi(s32 arg0);
extern s32 TBoss6Tube__data_805D6720;
extern f32 TBoss6Tube__data_805D6724;
void TBoss6Tube__sub_802B1218(u8 *arg0);
s32 rand(void);
extern s32 TBoss6Tube__data_805D6720;
extern f32 TBoss6Tube__data_805D6724;
void update_wobble__10TBoss6TubeFPv(u8 *arg0);
void get_bml_model(s32, s32);
s32 query_teammate_state__9TObjEneDDFPv(void);
void func_80141618__Fv(void);
void set_depth_buffer_settings_id__FUl(u32);
f32 get_value__14TBoss6PlotFalzFv(void);
s32 get_phase__8TObjFishFPv(s32);
f32 scale_by_const__10TBoss6TubeFf(f32 farg0);
f32 calc_tube_progress__10TBoss6TubeFi(s32 arg0);
void translate_matrix(s32, f32, f32, f32);
void push_matrix(void);
void pop_matrix(void);
void set_global_param__8TObjFishFi(s32);
void draw_ginja_object(void);
extern s32 lbl_80470A54[];
extern s32 lbl_805D6718;
extern s32 lbl_805D671C;
void render__10TBoss6TubeFv(TBoss6Tube_802B1020 *o);
}

extern "C" {

void reset_state__10TBoss6TubeFv(void);
void spawn_trap__10TBoss6TubeFi(s32 arg0);
void update_timer__10TBoss6TubeFPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_persistent_sound(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);

void render__10TBoss6TubeFv(TBoss6Tube_802B1020 *o) {
    f32 lo = (-1.6e+03f);
    f32 hi = (2.4e+03f);
    s32 mode;
    f32 start;
    f32 y;
    s32 i;
    if (query_teammate_state__9TObjEneDDFPv() != 0) {
        return;
    }
    mode = 0;
    switch (get_phase__8TObjFishFPv(o->f2c)) {
    case 2: {
        f32 v = get_value__14TBoss6PlotFalzFv();
        if (v < (-1e+01f)) {
            mode = 1;
        } else if (v > (1e+02f)) {
            mode = 2;
        }
        break;
    }
    case 1:
    case 3:
        mode = 3;
        break;
    }
    switch (mode) {
    case 0:
        break;
    case 1:
        lo = (-4.8e+03f);
        hi = (1.6e+03f);
        break;
    case 2:
        lo = (-8e+02f);
        hi = (5.6e+03f);
        break;
    case 3:
        lo = (-4.8e+03f);
        hi = (5.6e+03f);
        break;
    }
    start = lo - scale_by_const__10TBoss6TubeFf(calc_tube_progress__10TBoss6TubeFi(o->f28));
    set_global_param__8TObjFishFi(lbl_805D671C);
    set_depth_buffer_settings_id__FUl(3);
    for (i = 0; i < 3; i++) {
        for (y = start; y < hi; y += (8e+02f)) {
            push_matrix();
            translate_matrix(0, 0.0f, y, 0.0f);
            get_bml_model(lbl_805D6718, lbl_80470A54[i]);
            draw_ginja_object();
            pop_matrix();
        }
    }
    func_80141618__Fv();
}

f32 scale_by_const__10TBoss6TubeFf(f32 farg0) {
    return (8e+02f) * farg0;
}

extern s32 TBoss6Tube__data_805D6720;
extern f32 TBoss6Tube__data_805D6724;

f32 calc_tube_progress__10TBoss6TubeFi(s32 arg0) {
    return (1.0f) - ((f32) (arg0 & 0x7FFFF) / (524288.0f));
}

void TBoss6Tube__sub_802B1218(u8 *arg0) {
    if (((0.0f) == TBoss6Tube__data_805D6724) && ((s32) TBoss6Tube__data_805D6720 == 0)) {
        TBoss6Tube__data_805D6720 = M2C_FIELD(arg0, s32 *, 0x28);
        return;
    }
    TBoss6Tube__data_805D6724 = scale_by_const__10TBoss6TubeFf(
        calc_tube_progress__10TBoss6TubeFi(TBoss6Tube__data_805D6720 - M2C_FIELD(arg0, s32 *, 0x28)));
    TBoss6Tube__data_805D6720 = M2C_FIELD(arg0, s32 *, 0x28);
}

void reset_state__10TBoss6TubeFv(void) {
    TBoss6Tube__data_805D6720 = 0;
    TBoss6Tube__data_805D6724 = (0.0f);
}

#pragma fp_contract on
void TBoss6Tube__sub_802B129C(u8 *arg0) {
  f32 temp_f31;
  *((s32 *) (((s8 *) arg0) + 0x24)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x24))) + 0x3A);
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x24)))) > 0x3333)
  {
    *((s32 *) (((s8 *) arg0) + 0x24)) = 0x3333;
  }
  ;
  *((s32 *) (((s8 *) arg0) + 0x24)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x24))) + ((s32) (((0.075f) * ((2.0f) * (((3.0517578e-05f) * ((f32) rand())) - (0.5f)))) * get_random_float__8TObjFishFv((f32) (*((s32 *) (((s8 *) arg0) + 0x24)))))));
  *((s32 *) (((s8 *) arg0) + 0x28)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x28))) + (*((s32 *) (((s8 *) arg0) + 0x24))));
}

#pragma push
#pragma fp_contract on
void update_wobble__10TBoss6TubeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + (s32) (((-464.0f) * ((3.0517578e-05f) * (f32) rand())) + (-116.0f)));
    if ((f32) M2C_FIELD(arg0, s32 *, 0x24) <= (0.0f)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x28) + (((13107.0f) * ((3.0517578e-05f) * (f32) rand())) - (6553.0f)));
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s32 *, 0x24));
    TBoss6Tube__data_805D6724 = (0.0f);
    TBoss6Tube__data_805D6720 = M2C_FIELD(arg0, s32 *, 0x28);
}
#pragma pop

void spawn_trap__10TBoss6TubeFi(s32 arg0) {
    TBoss6Tube__sub_802B129C((u8 *)(arg0));
    play_persistent_sound(0x40033520, arg0, 0, 0, 0);
}

void update_timer__10TBoss6TubeFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) >= 0x10E) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        play_sound_effect(0x4003351F, 0, 0, 0);
        set_shake_preset__11TCameraCtrlFi(2);
    }
}

}
