#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual M2C_UNK m63(s32, s32);
};

struct VBase_18_c0d9f3
{
  char pad[0x18];
};

struct VObj_18_c0d9f3 : VBase_18_c0d9f3 {
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
    virtual s32 m17(M2C_UNK);
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
    virtual M2C_UNK m33();
    virtual M2C_UNK m34();
    virtual M2C_UNK m35();
    virtual M2C_UNK m36();
    virtual M2C_UNK m37();
    virtual M2C_UNK m38();
    virtual M2C_UNK m39();
    virtual M2C_UNK m40();
    virtual M2C_UNK m41();
};

typedef struct Msg_801B6C30 {
    u8 pad0[2];
    s16 f2;
    s16 f4[6];
    s16 f10;
    s16 f12;
} Msg_801B6C30;

typedef struct Src_801B6C30 {
    s16 v[6];
} Src_801B6C30;

typedef struct Player_801B6C30 {
    u8 pad0[0x2B0];
    Src_801B6C30 *src;
} Player_801B6C30;

struct Stats_801B6CE0 {
    u8 pad0[0x18];
    s32 level;
    s32 exp;
};

struct Obj_801B6CE0 {
    u8 pad0[0x2B0];
    Stats_801B6CE0 *stats;
};

struct Buf1C { u8 pad[0x1C]; };

struct VBase { u8 pad[0x18]; };

struct VObj : VBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(M2C_UNK); virtual void m21(M2C_UNK);
};

extern "C" {
u8 *TObjPlayer__sub_801D8DCC();
void get_hand_joint_position__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
u16 obj_getField1c(void *);
s32 get_mag_id__8TItemMagFPv(void *);
s32 update_target_lock__10TObjPlayerFPv(void *);
s32 update_timer__10TObjPlayerFPv(void *);
s32 decrement_clamp__10TObjPlayerFPvi(void *, s32);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 get_player_ctrl_field__6TSceneFUs(u16);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK obj_setFlags30(void *, int);
M2C_UNK set_flag_2000000__10TObjPlayerFPv(void *);
s32 set_flag_02000000__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801C5968(void *);
void update_status_effects__10TObjPlayerFPv(u8 *arg0);
s32 obj_isState2_324(void *);
u16 obj_getField1c(void *);
s32 reset_volopt_state__10TObjPlayerFv();
s16 clamp_nested_index__10TObjPlayerFPv(void *, int);
void TObjPlayer__sub_801C0C24(void *);
void TObjPlayer__sub_801C0CC4(void *);
void send_6x30_change_player_level(Player_801B6C30 *arg0);
s32 get_max_level__10TObjPlayerFv();
s8 get_class_index__10TObjPlayerFPv();
void add_evp__10TObjPlayerFPvi(void *, s32);
void add_ata__10TObjPlayerFPvi(void *, s32);
void add_mst__10TObjPlayerFPvi(void *, s32);
void add_hp__10TObjPlayerFPvi(void *, s32);
void add_dfp__10TObjPlayerFPvi(void *, s32);
void add_stat__10TObjPlayerFPvi(void *, s32);
s16 clamp_nested_index__10TObjPlayerFPv(void *, int);
u8 get_field_5__10TObjPlayerFPv(s32);
u8 get_byte_4__10TObjPlayerFPv(s32);
u8 TObjPlayer__sub_801C212C(s32);
u8 TObjPlayer__sub_801C2134(s32);
u8 get_team_id__10TObjPlayerFPv(s32);
u8 get_char_class__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801C214C();
s32 get_ply_level_table_row(s32, s32);
s32 apply_exp_level_growth__10TObjPlayerFPv(Obj_801B6CE0 *self);
s32 is_locally_controlled__10TObjPlayerFPv();
u16 obj_getField1c(void *);
s32 get_max_level__10TObjPlayerFv();
s8 get_class_index__10TObjPlayerFPv();
void send_6x30_change_player_level(Player_801B6C30 *arg0);
s32 apply_exp_level_growth__10TObjPlayerFPv(Obj_801B6CE0 *self);
s32 can_destroy_with_parents__10TObjPlayerFUi();
s16 clamp_nested_index__10TObjPlayerFPv(void *, int);
M2C_UNK reset_sub_status_disp__10TObjPlayerFPv(void *);
s32 is_item_equipped(int);
M2C_UNK calc_pos_delta__10TObjPlayerFPvPvPv(void *, void *, void *);
M2C_UNK init_shield_params__10TObjPlayerFPvi(void *, void *, void *, int, int);
u8 *get_slot_value__10TObjPlayerFPvi(void *, s32);
s32 get_current_state_field__10TObjPlayerFv(void *, int);
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK create_level_up_window__11TWindowCtrlFii(void *, void *);
void check_level_up__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void calc_move__10TObjPlayerFPvPvPv(void* p, void* a1, void* a2);
void clear_lobby_flag__10TObjPlayerFPv(void *arg0);
void *copy_fields__10TObjPlayerFPvPv(void *arg0, void *arg1);
void init_effect_5f0__10TObjPlayerFPv(u8 *arg0);
void update_position_history__10TObjPlayerFPv(u8 *arg0);
int vector_length(void*);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK TObjPlayer__sub_801BEA38(void *, s32, f32, f32);
s32 get_idle_animation__10TObjPlayerFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int calc_move_velocity__10TObjPlayerFPvPvf(void*, void*);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK set_action_id__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK set_anim_state__10TObjPlayerFPvi(void *, s32);
M2C_UNK set_anim_state__10TObjPlayerFPvs(void *, s32);
M2C_UNK set_state__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK update_field8__10TObjPlayerFPv(void *);

void *copy_fields__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) M2C_FIELD(arg1, s16 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) M2C_FIELD(arg1, s16 *, 0xE);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) M2C_FIELD(arg1, s16 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) M2C_FIELD(arg1, s16 *, 0x12);
    return arg0;
}

typedef struct VBase_18_c0d9f3 VBase_18_c0d9f3;
typedef struct VObj_18_c0d9f3 VObj_18_c0d9f3;
#define PSO_VCALL_VObj_18_c0d9f3_m17(_self, _arg0) (((VObj_18_c0d9f3 *)(_self))->m17((_arg0)))
#define PSO_VCALL_VObj_18_c0d9f3_m41(_self) (((VObj_18_c0d9f3 *)(_self))->m41())
#define PSO_VCALL_VObj_18_c0d9f3_m33(_self) (((VObj_18_c0d9f3 *)(_self))->m33())
#define PSO_VCALL_VObj_18_c0d9f3_m34(_self) (((VObj_18_c0d9f3 *)(_self))->m34())
#define PSO_VCALL_VObj_18_c0d9f3_m35(_self) (((VObj_18_c0d9f3 *)(_self))->m35())
#define PSO_VCALL_VObj_18_c0d9f3_m36(_self) (((VObj_18_c0d9f3 *)(_self))->m36())
#define PSO_VCALL_VObj_18_c0d9f3_m37(_self) (((VObj_18_c0d9f3 *)(_self))->m37())
#define PSO_VCALL_VObj_18_c0d9f3_m38(_self) (((VObj_18_c0d9f3 *)(_self))->m38())
#define PSO_VCALL_VObj_18_c0d9f3_m39(_self) (((VObj_18_c0d9f3 *)(_self))->m39())
#define PSO_VCALL_VObj_18_c0d9f3_m40(_self) (((VObj_18_c0d9f3 *)(_self))->m40())

void send_6x30_change_player_level(Player_801B6C30 *arg0) {
    Msg_801B6C30 m;
    Src_801B6C30 *s;
    if ((reset_volopt_state__10TObjPlayerFv() != 0) && ((arg0 == NULL) || (obj_isState2_324(arg0) == 0))) {
        TObjPlayer__sub_801C0CC4(&m);
        m.f2 = ((s16)obj_getField1c(arg0));
        s = arg0->src;
        m.f4[0] = s->v[0];
        m.f4[1] = s->v[1];
        m.f4[2] = s->v[2];
        m.f4[3] = s->v[3];
        m.f4[4] = s->v[4];
        m.f4[5] = s->v[5];
        m.f10 = clamp_nested_index__10TObjPlayerFPv(arg0, (int)s);
        m.f12 = 0;
        TObjPlayer__sub_801C0C24(&m);
    }
}

s32 apply_exp_level_growth__10TObjPlayerFPv(Obj_801B6CE0 *self) {
    s32 i;
    s32 lvl;
    s32 cls;
    s32 e;
    cls = get_class_index__10TObjPlayerFPv();
    lvl = ((s32 (*)(void *))clamp_nested_index__10TObjPlayerFPv)(self) + 1;
    for (i = 0; i < get_max_level__10TObjPlayerFv(); i++) {
        if (lvl > get_max_level__10TObjPlayerFv()) {
            break;
        }
        e = get_ply_level_table_row(cls, lvl);
        if (e == 0) {
            break;
        }
        if (TObjPlayer__sub_801C214C() > self->stats->exp) {
            break;
        }
        add_stat__10TObjPlayerFPvi(self, get_char_class__10TObjPlayerFPv(e));
        add_mst__10TObjPlayerFPvi(self, get_team_id__10TObjPlayerFPv(e));
        add_evp__10TObjPlayerFPvi(self, TObjPlayer__sub_801C2134(e));
        add_hp__10TObjPlayerFPvi(self, TObjPlayer__sub_801C212C(e));
        add_dfp__10TObjPlayerFPvi(self, get_byte_4__10TObjPlayerFPv(e));
        add_ata__10TObjPlayerFPvi(self, get_field_5__10TObjPlayerFPv(e));
        self->stats->level = lvl;
        lvl++;
    }
    return 1;
}

struct Player_801B6C30;
struct Obj_801B6CE0;
void check_level_up__10TObjPlayerFPv(u8 *arg0) {
    struct Buf1C sp40;
    struct Buf1C sp24;
    struct Buf1C sp8;
    s32 var_r31;
    u8 *temp_r31;
    s32 var_r30;
    s32 temp_r30;
    u8 *temp_r30_2;
    if ((is_locally_controlled__10TObjPlayerFPv() != 0) && (reset_key_machine_state__10TObjPlayerFv() != 0)) {
        temp_r30 = ((s32 (*)(void *))clamp_nested_index__10TObjPlayerFPv)((void *) (arg0)) + 1;
        if (temp_r30 <= get_max_level__10TObjPlayerFv()) {
            if (get_current_state_field__10TObjPlayerFv((void *) (((s32 (*)(void *))get_class_index__10TObjPlayerFPv)((void *) (arg0))), (int) (temp_r30)) <= (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), s32 *, 0x1C)) {
                reset_sub_status_disp__10TObjPlayerFPv((void *) (&sp40));
                reset_sub_status_disp__10TObjPlayerFPv((void *) (&sp24));
                reset_sub_status_disp__10TObjPlayerFPv((void *) (&sp8));
                var_r30 = 0;
                do {
                    temp_r31 = get_slot_value__10TObjPlayerFPvi(arg0 + 0xD04, var_r30);
                    if ((can_destroy_with_parents__10TObjPlayerFUi() != 0) && (is_item_equipped((int) (temp_r31)) != 0)) {
                        ((VObj *)temp_r31)->m21(1);
                    }
                    var_r30 += 1;
                } while (var_r30 < 0xD);
                init_shield_params__10TObjPlayerFPvi((void *) (&sp40), (void *) (arg0), (void *) (M2C_FIELD(arg0, void **, 0x2B0)), (int) (M2C_FIELD(arg0, s32 *, 0x318)), (int) (M2C_FIELD(arg0, s32 *, 0x31C)));
                apply_exp_level_growth__10TObjPlayerFPv((Obj_801B6CE0 *)((struct Obj_801B6CE0 *) (arg0)));
                init_shield_params__10TObjPlayerFPvi((void *) (&sp24), (void *) (arg0), (void *) (M2C_FIELD(arg0, void **, 0x2B0)), (int) (M2C_FIELD(arg0, s32 *, 0x318)), (int) (M2C_FIELD(arg0, s32 *, 0x31C)));
                var_r31 = 0;
                do {
                    temp_r30_2 = get_slot_value__10TObjPlayerFPvi(arg0 + 0xD04, var_r31);
                    if ((can_destroy_with_parents__10TObjPlayerFUi() != 0) && (is_item_equipped((int) (temp_r30_2)) != 0)) {
                        ((VObj *)temp_r30_2)->m20(1);
                    }
                    var_r31 += 1;
                } while (var_r31 < 0xD);
                calc_pos_delta__10TObjPlayerFPvPvPv((void *) (&sp40), (void *) (&sp24), (void *) (&sp8));
                create_level_up_window__11TWindowCtrlFii((void *) (&sp8), (void *) (obj_getField1c((void *) (arg0))));
                send_6x30_change_player_level((Player_801B6C30 *)((struct Player_801B6C30 *) (arg0)));
            }
        }
    }
}

void update_status_effects__10TObjPlayerFPv(u8 *arg0) {
  TObjPlayer__sub_801C5968((void *) (arg0 + 0x634));
  update_target_lock__10TObjPlayerFPv(arg0);
  if (PSO_VCALL_VObj_18_c0d9f3_m17(arg0, 3) != 0)
  {
    if (set_flag_02000000__10TObjPlayerFPv((void *) arg0) == 0)
    {
      get_global_state__14TOKeyMachine01Fv();
      *((s16 *) (((s8 *) arg0) + 0x28)) = get_player_ctrl_field__6TSceneFUs(obj_getField1c(arg0));
    }
  }
  set_flag_2000000__10TObjPlayerFPv((void *) arg0);
  PSO_VCALL_VObj_18_c0d9f3_m41(arg0);
  PSO_VCALL_VObj_18_c0d9f3_m33(arg0);
  PSO_VCALL_VObj_18_c0d9f3_m34(arg0);
  PSO_VCALL_VObj_18_c0d9f3_m35(arg0);
  PSO_VCALL_VObj_18_c0d9f3_m36(arg0);
  PSO_VCALL_VObj_18_c0d9f3_m37(arg0);
  PSO_VCALL_VObj_18_c0d9f3_m38(arg0);
  PSO_VCALL_VObj_18_c0d9f3_m39(arg0);
  PSO_VCALL_VObj_18_c0d9f3_m40(arg0);
  if (get_mag_id__8TItemMagFPv(arg0 + 0x644) <= 0)
  {
    obj_clearFlags30((void *) arg0, (int) 0x04000100);
  }
  else
  {
    decrement_clamp__10TObjPlayerFPvi(arg0 + 0x644, 1);
    obj_setFlags30((void *) arg0, (int) 0x04000000);
  }
  if ((*((s16 *) (((s8 *) arg0) + 0x32C))) <= 0)
  {
    obj_setFlags30((void *) arg0, (int) 0xA00);
  }
  update_timer__10TObjPlayerFPv(arg0 + 0x360);
}

void update_position_history__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;

    if ((M2C_FIELD(arg0, f32 *, 0x44) != M2C_FIELD(arg0, f32 *, 0x38)) || (M2C_FIELD(arg0, f32 *, 0x4C) != M2C_FIELD(arg0, f32 *, 0x40))) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x6AC) + 1;
        M2C_FIELD(arg0, s32 *, 0x6AC) = temp_r0;
        if (temp_r0 >= 0x10) {
            M2C_FIELD(arg0, s32 *, 0x6AC) = 0;
        }
        TObjPlayer__sub_801BEA38(arg0, M2C_FIELD(arg0, s32 *, 0x6AC), M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x40));
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    update_field8__10TObjPlayerFPv(arg0 + 0x360);
}

extern s32 lbl_805D55C0;

void clear_lobby_flag__10TObjPlayerFPv(void *arg0) {
    if ((s32) lbl_805D55C0 == 0) {
        obj_clearFlags30(arg0, 0x10000);
    }
}

void init_effect_5f0__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x10000);
    set_action_id__10TObjPlayerFPvs(arg0 + 0x5F0, 0x10);
    set_anim_state__10TObjPlayerFPvs(arg0 + 0x5F0, get_idle_animation__10TObjPlayerFPv(arg0));
    set_state__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
    set_anim_state__10TObjPlayerFPvi(arg0 + 0x5F0, M2C_FIELD(arg0, s32 *, 0x60));
}

void get_hand_joint_position__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    ((VObj_18 *)(arg0))->m63(M2C_FIELD(TObjPlayer__sub_801D8DCC(), s32 *, 0x10), arg1);
}

void calc_move__10TObjPlayerFPvPvPv(void* p, void* a1, void* a2) { vector_length(p); calc_move_velocity__10TObjPlayerFPvPvf(a1, a2); }

}
