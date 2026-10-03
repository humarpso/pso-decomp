#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8012685C {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
};

#include "pso/items/TItemWeaponFist.h"
struct WeaponPlayerObjectPrefix
{
  char pad[0x18];
};
struct WeaponPlayerAttachmentInterface : WeaponPlayerObjectPrefix {
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
    virtual void sample_joint_position(s32, void *);
};

extern "C" {
u8 get_slot_count__14TItemProShieldFPv(s32);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK reflect_matrix_in_plane(M2C_UNK, f32 *, f32);
extern s32 lbl_805D5518;
extern const f32 lbl_805DAD80;
extern const f32 lbl_805DAD94;
void TObjPlayer__sub_8012685C(s32 arg0);
void spawn_particle_effect(void *, s32);
void spawn_cane_effects__10TObjPlayerFiUiii(s32, void *, s32, s32);
u8 get_slot_count__14TItemProShieldFPv(s32);
s32 get_attack_stage__11TItemWeaponFPv(void *);
s32 has_valid_handle__10TObjPlayerFPv(void *);
s16 get_validated_attack_stage(void *);
extern s32 lbl_804A2B50[];
extern s32 tl_05;
}

extern "C" {

void TObjPlayer__sub_8012685C(s32 arg0) {
    Stack_8012685C stack;
    if ((get_player_list__10TObjPlayerFv() == 0) && (get_slot_count__14TItemProShieldFPv(arg0) == 3) && ((s32) lbl_805D5518 != 0)) {
        stack.sp10 = lbl_805DAD94;
        stack.spC = lbl_805DAD94;
        stack.sp8 = lbl_805DAD94;
        stack.sp1C = lbl_805DAD94;
        stack.sp18 = lbl_805DAD94;
        stack.sp14 = lbl_805DAD80;
        reflect_matrix_in_plane(0, &stack.sp8, lbl_805DAD94);
    }
}
}

void TItemWeaponFist::emit_marker_effects() {
  TItemWeaponFist* arg0 = this;
  u8 buf[16];
  s32 k;
  s16 stage;
  s32 index;
  if (get_slot_count__14TItemProShieldFPv((s32)(arg0)) == 3)
  {
    if (get_attack_stage__11TItemWeaponFPv(arg0) == 0)
    {
      spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, -1, -2);
    }
  }
  else
  {
    k = has_valid_handle__10TObjPlayerFPv(arg0->player) * 3;
    stage = get_validated_attack_stage(((u8 *) arg0->player) + 0x7CC);
    index = stage;
    index += k;
    arg0->player->sample_joint_position(lbl_804A2B50[index], buf);
    spawn_particle_effect(buf, 0x1D0);
  }
}
