#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_eecf68 { char pad[0x18]; };

struct VObj_18_eecf68 : VBase_18_eecf68 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s32 m14();
};

struct Eff_801B2D88 { u16 f0; u16 f2; u32 f4; u32 f8; };

struct Pair_801B2D88 { u32 a; u32 b; };

struct VBase_801B2CE4 { char pad[0x18]; };

struct VObj_801B2CE4 : VBase_801B2CE4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
};

struct Eff_801B2CE4 { u16 f0; u16 f2; u32 f4; u32 f8; };

extern "C" {
M2C_UNK set_params__10TObjPlayerFPvPvPviPv(void *, void *, void *, int, int);
s32 TObjPlayer__sub_801D92F4(void *);
s32 TObjPlayer__sub_801D9328();
s32 TObjPlayer__sub_801D93C4(void *);
s32 fn_801B2FC8(s32 arg0, s32 arg1);
int get_max_level__10TObjPlayerFv(void);
s8 TObjPlayer__sub_801AFDB0(void *);
s32 get_current_state_field__10TObjPlayerFv(s8, s32);
s32 TObjPlayer__sub_801B2E68(u8 *arg0);
void TObjPlayer__sub_801B2AE8(u32, Pair_801B2D88 *);
u32 get_player_by_client_id(s32);
void TObjPlayer__sub_801C092C(void *, void *);
void apply_status_effect__10TObjPlayerFPv(void *);
M2C_UNK set_code_12_3__10TObjPlayerFPv(M2C_UNK *);
s32 fn_8036B770(void *);
void handle_6x0C_add_or_remove_status_effect(void *arg0);
s32 clear_negative_status_effects__10TObjPlayerFi(s32 arg0);
u32 get_player_by_client_id(s32);
void TFontSmallLobby__sub_801C01BC(void *);
void set_code_14_1__10TObjPlayerFPv(void *);
s32 validate_6x0E_clear_negative_status_effects(void *);
void handle_6x0E_clear_negative_status_effects(s32 arg0);
}

extern "C" {

void TObjPlayer__vt76(s32 arg0, s32 arg1);
s32 TWindowHelpItem__sub_801B3038(void *self, void *arg1);
s32 get_quest_id__12TQuestListVMFPv(void *);
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
s32 rand();
int recover_full__10TObjPlayerFPv(void*);
M2C_UNK reinit_update_sub4_and_send__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK set_code_12_3__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK set_code_13_3__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK update_and_send__10TObjPlayerFPv(M2C_UNK *);

void TKeyBoardControl__sub_8000F998();
s16 obj_getField1c(s32);
void set_state_flags__10TObjPlayerFPvUi(void *, u32);
void *get_dest_area__17TObjAreaWarpQuestFPv(void *);
void TTecLuker__sub_801BAB1C(void *, void *);
void set_battle_flag__10TObjPlayerFPvi(void *, int);
void TObjPlayer__sub_801C5F84(s16, s32, s32);
s32 TObjPlayer__sub_801D8C9C(void *);
s32 TObjPlayer__sub_801D8CCC(void *);
s32 TLobby__sub_80207770(int);
void set_area__6TLobbyFPvi(void *, int, int);
s32 TNpcPlayer__sub_8034DDE0();
s32 TNpcPlayer__sub_8034DE10();
void apply_to_players__10TNpcPlayerFiPvi(void *, s32, s32);
extern u8 lbl_80515BA0[];
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

void handle_6x0E_clear_negative_status_effects(s32 arg0) {
    Eff_801B2CE4 e;
    set_code_14_1__10TObjPlayerFPv(&e);
    ((void (*)(void *, s32))clear_negative_status_effects__10TObjPlayerFi)(&e, arg0);
    TFontSmallLobby__sub_801C01BC(&e);
    if (validate_6x0E_clear_negative_status_effects(&e) != 0) {
        VObj_801B2CE4 *p = (VObj_801B2CE4 *)get_player_by_client_id(e.f2);
        if (p != 0) {
            p->m48();
        }
    }
}

s32 clear_negative_status_effects__10TObjPlayerFi(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void handle_6x0C_add_or_remove_status_effect(void *arg0) {
    Eff_801B2D88 e;
    set_code_12_3__10TObjPlayerFPv((M2C_UNK *)(&e));
    TObjPlayer__sub_801C092C(&e, arg0);
    apply_status_effect__10TObjPlayerFPv(&e);
    if (fn_8036B770(&e) != 0) {
        u32 p = get_player_by_client_id(e.f2);
        if (p != 0) {
            Pair_801B2D88 q;
            q.a = e.f4;
            q.b = e.f8;
            TObjPlayer__sub_801B2AE8(p, &q);
        }
    }
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

s32 TObjPlayer__sub_801B2E68(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    temp_r31_2 = get_max_level__10TObjPlayerFv();
    if (((VObj_18_eecf68 *)(arg0))->m14() >= temp_r31_2) {
        return 0;
    }
    temp_r31 = ((VObj_18_eecf68 *)(arg0))->m14();
    return get_current_state_field__10TObjPlayerFv(TObjPlayer__sub_801AFDB0(arg0), temp_r31 + 1);
}

s32 calc_scaled_value__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (is_flag30_10_set__10TObjPlayerFi() != 0) {
        return (s32) (lbl_805DC280 * (lbl_805DC284 * (lbl_805DC288 * (f32) rand())));
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

#pragma scheduling on
s32 TWindowHelpItem__sub_801B3038(void *self, void *arg1) {
    set_params__10TObjPlayerFPvPvPviPv(arg1, self, (void *) get_quest_id__12TQuestListVMFPv(self),
                                       TObjPlayer__sub_801D92F4(self), TObjPlayer__sub_801D9328());
    return 1;
}
#pragma scheduling off
int fn_801B309C(void* p) { return recover_full__10TObjPlayerFPv(p); }

#pragma scheduling on
void TObjPlayer__sub_801B30BC(void *player) {
    set_area__6TLobbyFPvi(lbl_80515BA0, 0, TLobby__sub_80207770(0));
    TKeyBoardControl__sub_8000F998();
    TObjPlayer__sub_801C5F84(obj_getField1c((s32) player), TObjPlayer__sub_801D8C9C(player), TObjPlayer__sub_801D8CCC(player));
    set_state_flags__10TObjPlayerFPvUi(player, 0x800);
    set_battle_flag__10TObjPlayerFPvi(player, 1);
    TTecLuker__sub_801BAB1C(player, get_dest_area__17TObjAreaWarpQuestFPv(lbl_80515BA0));
    apply_to_players__10TNpcPlayerFiPvi(get_dest_area__17TObjAreaWarpQuestFPv(lbl_80515BA0), TNpcPlayer__sub_8034DE10(), TNpcPlayer__sub_8034DDE0());
}

}
