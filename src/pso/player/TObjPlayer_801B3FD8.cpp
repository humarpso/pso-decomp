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

extern "C" {
u8 *TObjPlayer__sub_801D8DCC();
void TObjPlayer__sub_801B7248(u8 *arg0, s32 arg1);
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
void TObjPlayer__sub_801B6F8C(u8 *arg0);
}

extern "C" {

void calc_move__10TObjPlayerFPvPvPv(void* p, void* a1, void* a2);
void clear_lobby_flag__10TObjPlayerFPv(void *arg0);
void *copy_fields__10TObjPlayerFPvPv(void *arg0, void *arg1);
void init_effect_5f0__10TObjPlayerFPv(u8 *arg0);
void update_position_history__10TObjPlayerFPv(u8 *arg0);
int TBoss6Kakusan__sub_803D8BD8(void*);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK TObjPlayer__sub_801BEA38(void *, s32, f32, f32);
s32 TObjPlayer__sub_801D0458(void *);
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
void TObjPlayer__sub_801B6F8C(u8 *arg0) {
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
    set_anim_state__10TObjPlayerFPvs(arg0 + 0x5F0, TObjPlayer__sub_801D0458(arg0));
    set_state__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
    set_anim_state__10TObjPlayerFPvi(arg0 + 0x5F0, M2C_FIELD(arg0, s32 *, 0x60));
}

void TObjPlayer__sub_801B7248(u8 *arg0, s32 arg1) {
    ((VObj_18 *)(arg0))->m63(M2C_FIELD(TObjPlayer__sub_801D8DCC(), s32 *, 0x10), arg1);
}

void calc_move__10TObjPlayerFPvPvPv(void* p, void* a1, void* a2) { TBoss6Kakusan__sub_803D8BD8(p); calc_move_velocity__10TObjPlayerFPvPvf(a1, a2); }

}
