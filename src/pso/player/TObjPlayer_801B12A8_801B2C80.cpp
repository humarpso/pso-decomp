#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK set_params__10TObjPlayerFPvPvPviPv(void *, void *, void *, int, int);
s32 TObjPlayer__sub_801D92F4(void *);
s32 TObjPlayer__sub_801D9328();
s32 TObjPlayer__sub_801D93C4(void *);
s32 fn_801B2FC8(s32 arg0, s32 arg1);
}

extern "C" {

void TObjPlayer__vt76(s32 arg0, s32 arg1);
int TWindowHelpItem__sub_801B3038(void);
void apply_speed_scale__10TObjPlayerFif(s32 arg0, f32 farg0);
s32 calc_scaled_value__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 clear_negative_status_effects__10TObjPlayerFi(s32 arg0);
int fn_801B309C(void* p);
void send_code_13_3__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK TObjPlayer__sub_800A7798(s32, f32);
s32 is_flag30_10_set__10TObjPlayerFi();
s32 is_flag30_8_set__10TObjPlayerFi();
M2C_UNK obj_copyVec2_0(M2C_UNK *, s32);
s16 obj_getField1c(s32);
s32 obj_isState2_324();
s32 rand__11TOBoss4RockFv();
int recover_full__10TObjPlayerFPv(void*);
M2C_UNK reinit_update_sub4_and_send__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK set_code_12_3__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK set_code_13_3__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK update_and_send__10TObjPlayerFPv(M2C_UNK *);

void send_code_13_3__10TObjPlayerFii(s32 arg0, s32 arg1) {
    M2C_UNK spC;
    M2C_UNK sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_13_3__10TObjPlayerFPv(&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        obj_copyVec2_0(&spC, arg1);
        update_and_send__10TObjPlayerFPv(&sp8);
    }
}

s32 clear_negative_status_effects__10TObjPlayerFi(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void TObjPlayer__vt76(s32 arg0, s32 arg1) {
    M2C_UNK spC;
    M2C_UNK sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_12_3__10TObjPlayerFPv(&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        obj_copyVec2_0(&spC, arg1);
        reinit_update_sub4_and_send__10TObjPlayerFPv(&sp8);
    }
}

extern M2C_UNK TObjPlayer__data_80446F48;
extern f32 lbl_805DC280;
extern f32 lbl_805DC284;
extern f32 lbl_805DC288;

s32 calc_scaled_value__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (is_flag30_10_set__10TObjPlayerFi() != 0) {
        return (s32) (lbl_805DC280 * (lbl_805DC284 * (lbl_805DC288 * (f32) rand__11TOBoss4RockFv())));
    }
    return arg1;
}

extern f32 TObjPlayer__data_805DC28C;

void apply_speed_scale__10TObjPlayerFif(s32 arg0, f32 farg0) {
    f32 var_f1;

    if (is_flag30_8_set__10TObjPlayerFi() != 0) {
        var_f1 = TObjPlayer__data_805DC28C * farg0;
    } else {
        var_f1 = farg0;
    }
    TObjPlayer__sub_800A7798(arg0, var_f1);
}

#pragma scheduling off
s32 fn_801B2FC8(s32 arg0, s32 arg1) {
  void *new_var;
  unsigned int new_var2;
  s32 temp_r30;
  s32 temp_r31;
  if (arg0 == 0)
  {
    if (!arg0)
    {
    }
    return 0;
  }
  temp_r31 = TObjPlayer__sub_801D9328();
  new_var = (void *) arg0;
  temp_r30 = temp_r31;
  new_var2 = (int) temp_r30;
  temp_r31 = TObjPlayer__sub_801D92F4(new_var);
  set_params__10TObjPlayerFPvPvPviPv((void *) arg1, new_var, (void *) TObjPlayer__sub_801D93C4(new_var), (int) temp_r31, new_var2);
  return 1;
}

int TWindowHelpItem__sub_801B3038(void) { return 0; }
int fn_801B309C(void* p) { return recover_full__10TObjPlayerFPv(p); }

}
