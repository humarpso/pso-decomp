#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_801CE928 { u8 pad[0x18]; };

struct Item_801CE928 : VBase_801CE928 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
};

struct Player_801CE928 : VBase_801CE928 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual s32 v65(f32);
};

extern "C" {
s32 obj_isState2_324(void *);
s32 obj_isState3_324(void *);
s16 obj_getField1c(void *);
s32 get_state_ptr__10TObjPlayerFPv(void *);
M2C_UNK copy_attack_targets(void *, void *);
s32 test_flag_2000000__10TObjPlayerFPv(void *);
s32 reset_volopt_state__10TObjPlayerFv(void *);
M2C_UNK build_packet_header__10TObjPlayerFPv(void *);
M2C_UNK send_6x46_attack_finished(void *);
u32 capture_lockon_targets(void *, void *);
void send_attack_target_packet__10TObjPlayerFUi(u32 arg0);
s32 reset_target_link__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CDDEC(void *);
s32 enter_attack_stage2__10TObjPlayerFPv(void *);
s32 send_attack_stage2_request__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CE064();
s32 finish_attack_stage2__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CE134(void *);
s32 apply_status_action__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CE19C(s32 arg0, s16 arg1);
void TObjPlayer__sub_801D2658(void *, f32);
s16 get_validated_attack_stage(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
extern const f32 TObjPlayer__data_805DC39C;
extern const f32 TObjPlayer__data_805DC3AC;
void setup_attack_stage__10TObjPlayerFPv(u8 *arg0);
s16 obj_getField1c(void *);
u16 get_action_palette_entry__10TObjPlayerFii(void *, s32);
u16 TObjPlayer__sub_801B5AF8(void *, s32);
s32 check_mode_action__10TObjPlayerFii(void *, s32);
s32 check_action_usable__10TObjPlayerFPvi(void *, s32);
s32 TObjPlayer__sub_80354D5C(s16);
s32 TObjPlayer__sub_801CEAC8(u8 *self);
s16 obj_getField1c(void *);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, u32);
M2C_UNK publish_actor_light_scalars(u16, f32, f32);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, s32);
M2C_UNK request_heavy_attack_particles__10TObjPlayerFPv(void *);
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
Item_801CE928 *get_item_field_6__10TObjPlayerFPv(void *);
s32 reset_volopt_state__10TObjPlayerFv(void *);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, s32);
s32 is_in_tl03_state__10TObjPlayerFPv();
Player_801CE928 *get_player_by_client_id(u16);
M2C_UNK bswap_field4_sub__10TObjPlayerFPv(void *);
M2C_UNK build_packet_header__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D2BB8(void *, s32);
M2C_UNK on_attack_finished__10TObjPlayerFPv(void *, void *);
s32 validate_6x46_attack_finished(void *);
extern const f32 TObjPlayer__data_805DC360;
void handle_6x46_attack_finished(s32 arg0);
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
        finish_attack_stage2__10TObjPlayerFPv(new_var);
        return;
      case 8:
        TObjPlayer__sub_801CE064();
        return;
      case 5:
        send_attack_stage2_request__10TObjPlayerFPv((void *) arg0);
        return;
      case 0:
        enter_attack_stage2__10TObjPlayerFPv(new_var);
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
        request_heavy_attack_particles__10TObjPlayerFPv(arg0 + 0x384);
        lbl_8050BEE0[1] = lbl_8050BEE0[0] = 0.0f;
        lbl_8050BFE0[0] = lbl_8050BEE0[2] = 1.0f;
        lbl_8050BFE0[2] = lbl_8050BFE0[1] = lbl_805DC3A8;
        lbl_8050BFE0[3] = 1.0f;
        p = __nw__7TObjectFUl(0x64);
        if (p != NULL) {
            construct_actor_light_task(p, lbl_8050BFE0, lbl_8050BEE0, 8, arg0, TObjPlayer__data_805DC39C, tl_07);
        }
        publish_actor_light_scalars(obj_getField1c(arg0), TObjPlayer__data_805DC360, TObjPlayer__data_805DC3AC);
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
        publish_actor_light_scalars(obj_getField1c(arg0), TObjPlayer__data_805DC360, TObjPlayer__data_805DC3AC);
        send_field_state_if_active__10TObjPlayerFii(arg0, 0x1AD1D);
        break;
    }
}

void setup_attack_stage__10TObjPlayerFPv(u8 *arg0) {
    *(s16 *)(arg0 + 0x328) = 0;
    switch (TObjPlayer__sub_801D2F4C(arg0 + 0x7CC)) {
    case 0:
        if (get_validated_attack_stage(arg0 + 0x7CC) == 0) {
            TObjPlayer__sub_801D2658(arg0, TObjPlayer__data_805DC3AC);
        }
        break;
    case 1:
    case 2:
        if (get_validated_attack_stage(arg0 + 0x7CC) == 0) {
            TObjPlayer__sub_801D2658(arg0, TObjPlayer__data_805DC39C);
        }
        break;
    }
}

void handle_6x46_attack_finished(s32 arg0) {
    u16 sp8[0x18];
    Player_801CE928 *pl;
    Item_801CE928 *it;
    build_packet_header__10TObjPlayerFPv(sp8);
    TObjPlayer__sub_801D2BB8(sp8, arg0);
    bswap_field4_sub__10TObjPlayerFPv(sp8);
    if (validate_6x46_attack_finished(sp8) != 0 && (pl = get_player_by_client_id(sp8[1])) != NULL &&
        is_in_tl03_state__10TObjPlayerFPv() != 0 && reset_volopt_state__10TObjPlayerFv(pl) != 0) {
        on_attack_finished__10TObjPlayerFPv((u8 *)pl + 0x7CC, &sp8[2]);
        it = get_item_field_6__10TObjPlayerFPv(pl);
        if (it != NULL) {
            it->v28();
            return;
        }
        if (pl->v65((*(f32 *)&TObjPlayer__data_805DC360)) == 0) {
            send_field_state_if_active__10TObjPlayerFii(pl, 0x4001A80C);
        }
    }
}

void send_attack_target_packet__10TObjPlayerFUi(u32 arg0) {
    s16 sp8[0x14];
    if (((obj_isState2_324((void *) (arg0)) == 0) || (reset_volopt_state__10TObjPlayerFv((void *) (arg0)) != 0)) && ((obj_isState3_324((void *) (arg0)) != 0) || (capture_lockon_targets((void *) (arg0 + 0x7CC), (void *) (arg0)) != 0U)) && (test_flag_2000000__10TObjPlayerFPv((void *) (arg0)) == 0) && ((arg0 == 0U) || (obj_isState2_324((void *) (arg0)) == 0))) {
        build_packet_header__10TObjPlayerFPv((void *) (sp8));
        sp8[1] = obj_getField1c((void *) (arg0));
        copy_attack_targets((void *) (&sp8[2]), (void *) (get_state_ptr__10TObjPlayerFPv((void *) (arg0 + 0x7CC))));
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
    return check_mode_action__10TObjPlayerFii(self, get_action_palette_entry__10TObjPlayerFii(self, r)) != 0 ? r : -1;
}

}
