#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 obj_isState2_324(void *);
s32 obj_isState3_324(void *);
s16 obj_getField1c(void *);
s32 get_state_ptr__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8012ADD4(void *, void *);
s32 test_flag_2000000__10TObjPlayerFPv(void *);
s32 reset_volopt_state__10TObjPlayerFv(void *);
M2C_UNK build_packet_header__10TObjPlayerFPv(void *);
M2C_UNK send_6x46_attack_finished(void *);
u32 capture_lockon_targets(void *, void *);
void send_attack_target_packet__10TObjPlayerFUi(u32 arg0);
s32 reset_target_link__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CDDEC(void *);
s32 TObjPlayer__sub_801CDE0C(void *);
s32 TObjPlayer__sub_801CDF9C(void *);
s32 TObjPlayer__sub_801CE064();
s32 TObjPlayer__sub_801CE068(void *);
s32 TObjPlayer__sub_801CE134(void *);
s32 apply_status_action__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CE19C(s32 arg0, s16 arg1);
void TObjPlayer__sub_801D2658(void *, f32);
s16 TObjPlayer__sub_801D2EA8(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
extern const f32 TObjPlayer__data_805DC39C;
extern const f32 TObjPlayer__data_805DC3AC;
void TObjPlayer__sub_801CE3EC(u8 *arg0);
s16 obj_getField1c(void *);
u16 TObjPlayer__sub_801B5AC4(void *, s32);
u16 TObjPlayer__sub_801B5AF8(void *, s32);
s32 check_mode_action__10TObjPlayerFii(void *, s32);
s32 check_action_usable__10TObjPlayerFPvi(void *, s32);
s32 TObjPlayer__sub_80354D5C(s16);
s32 TObjPlayer__sub_801CEAC8(u8 *self);
s16 obj_getField1c(void *);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, u32);
M2C_UNK TObjLight__sub_80134548(u16, f32, f32);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, s32);
M2C_UNK TObjPlayer__sub_801D2DB4(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
void *__nw__7TObjectFUl(u32);
M2C_UNK construct_actor_light_task(void *, f32 *, f32 *, int, void *, f32, s32);
M2C_UNK dispatch_weapon_special_effect(void *, int, int, int);
extern f32 lbl_8050BEE0[];
extern f32 lbl_8050BFE0[];
extern s32 tl_07;
extern const f32 TObjPlayer__data_805DC360;
extern const f32 TObjPlayer__data_805DC39C;
extern const f32 lbl_805DC3A8;
extern const f32 TObjPlayer__data_805DC3AC;
void start_attack_preparation__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801CE19C(s32 arg0, s16 arg1) {
  int new_var2;
  void *new_var;
  new_var2 = ((u32) arg1) <= 8U;
  {
    new_var = (void *) arg0;
    switch (arg1)
    {
      case 7:
        apply_status_action__10TObjPlayerFPv((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801CE134((void *) arg0);
        return;
      case 3:
        TObjPlayer__sub_801CE068(new_var);
        return;
      case 8:
        TObjPlayer__sub_801CE064();
        return;
      case 5:
        TObjPlayer__sub_801CDF9C((void *) arg0);
        return;
      case 0:
        TObjPlayer__sub_801CDE0C(new_var);
        return;
      case 1:
        TObjPlayer__sub_801CDDEC(new_var);
        return;
      case 6:
        reset_target_link__10TObjPlayerFPv(new_var);
        break;
    }
  }
}

void start_attack_preparation__10TObjPlayerFPv(u8 *arg0) {
    void *p;
    switch (TObjPlayer__sub_801D2F4C(arg0 + 0x7CC)) {
    case 0:
        *(s16 *)(arg0 + 0x328) = 3;
        break;
    case 1:
        *(s16 *)(arg0 + 0x328) = 1;
        set_state_flags__10TObjPlayerFPvUi(arg0, 0x80);
        TObjPlayer__sub_801D2DB4(arg0 + 0x384);
        lbl_8050BEE0[1] = lbl_8050BEE0[0] = 0.0f;
        lbl_8050BFE0[0] = lbl_8050BEE0[2] = 1.0f;
        lbl_8050BFE0[2] = lbl_8050BFE0[1] = lbl_805DC3A8;
        lbl_8050BFE0[3] = 1.0f;
        p = __nw__7TObjectFUl(0x64);
        if (p != NULL) {
            construct_actor_light_task(p, lbl_8050BFE0, lbl_8050BEE0, 8, arg0, TObjPlayer__data_805DC39C, tl_07);
        }
        TObjLight__sub_80134548(obj_getField1c(arg0), TObjPlayer__data_805DC360, TObjPlayer__data_805DC3AC);
        send_field_state_if_active__10TObjPlayerFii(arg0, 0x1AD1C);
        break;
    case 2:
        *(s16 *)(arg0 + 0x328) = 1;
        set_state_flags__10TObjPlayerFPvUi(arg0, 0x80);
        dispatch_weapon_special_effect(arg0, 0, 0, 0);
        lbl_8050BEE0[1] = lbl_8050BEE0[0] = 0.0f;
        lbl_8050BFE0[0] = lbl_8050BEE0[2] = 1.0f;
        lbl_8050BFE0[2] = lbl_8050BFE0[1] = lbl_805DC3A8;
        lbl_8050BFE0[3] = 1.0f;
        p = __nw__7TObjectFUl(0x64);
        if (p != NULL) {
            construct_actor_light_task(p, lbl_8050BFE0, lbl_8050BEE0, 8, arg0, TObjPlayer__data_805DC39C, tl_07);
        }
        TObjLight__sub_80134548(obj_getField1c(arg0), TObjPlayer__data_805DC360, TObjPlayer__data_805DC3AC);
        send_field_state_if_active__10TObjPlayerFii(arg0, 0x1AD1D);
        break;
    }
}

void TObjPlayer__sub_801CE3EC(u8 *arg0) {
    *(s16 *)(arg0 + 0x328) = 0;
    switch (TObjPlayer__sub_801D2F4C(arg0 + 0x7CC)) {
    case 0:
        if (TObjPlayer__sub_801D2EA8(arg0 + 0x7CC) == 0) {
            TObjPlayer__sub_801D2658(arg0, TObjPlayer__data_805DC3AC);
        }
        break;
    case 1:
    case 2:
        if (TObjPlayer__sub_801D2EA8(arg0 + 0x7CC) == 0) {
            TObjPlayer__sub_801D2658(arg0, TObjPlayer__data_805DC39C);
        }
        break;
    }
}

void send_attack_target_packet__10TObjPlayerFUi(u32 arg0) {
    s16 sp8[0x14];
    if (((obj_isState2_324((void *) (arg0)) == 0) || (reset_volopt_state__10TObjPlayerFv((void *) (arg0)) != 0)) && ((obj_isState3_324((void *) (arg0)) != 0) || (capture_lockon_targets((void *) (arg0 + 0x7CC), (void *) (arg0)) != 0U)) && (test_flag_2000000__10TObjPlayerFPv((void *) (arg0)) == 0) && ((arg0 == 0U) || (obj_isState2_324((void *) (arg0)) == 0))) {
        build_packet_header__10TObjPlayerFPv((void *) (sp8));
        sp8[1] = obj_getField1c((void *) (arg0));
        TObjPlayer__sub_8012ADD4((void *) (&sp8[2]), (void *) (get_state_ptr__10TObjPlayerFPv((void *) (arg0 + 0x7CC))));
        send_6x46_attack_finished((void *) (sp8));
    }
}
s32 TObjPlayer__sub_801CEAC8(u8 *self) {
    s32 r = -1;
    if (TObjPlayer__sub_801B5AF8(self, 1) == 2 && check_action_usable__10TObjPlayerFPvi(self + 0x550, 4) != 0) {
        r = 1;
    }
    if (TObjPlayer__sub_801B5AF8(self, 2) == 2 && check_action_usable__10TObjPlayerFPvi(self + 0x550, 0x400) != 0 &&
        TObjPlayer__sub_80354D5C(obj_getField1c(self)) == 0) {
        r = 2;
    }
    if (TObjPlayer__sub_801B5AF8(self, 3) == 2 && check_action_usable__10TObjPlayerFPvi(self + 0x550, 2) != 0) {
        r = 3;
    }
    return check_mode_action__10TObjPlayerFii(self, TObjPlayer__sub_801B5AC4(self, r)) != 0 ? r : -1;
}

}
