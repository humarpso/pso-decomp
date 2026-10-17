#include "types.h"
#include "pso/object/obj_band.h"
#include "pso/system/vector.h"
#include "pso/TParticleCtrl.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TObjEneRe2Flower.h"
#include "pso/misc/TNowLoading.h"
#include "pso/misc/TTecMegid.h"
#include "pso/player/TObjPlayer.h"
#include "pso/enemy/TObjEneDD_ST.h"

#include <stddef.h>
struct Stack_800C32DC {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct VBase_18_880cfd
{
  char pad[0x18];
};

struct VObj_18_880cfd : VBase_18_880cfd {
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
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual s32 m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual s32 m23(void *, f32);
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
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual s32 m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
};

struct RecoveredFields_800C3088_arg0
{
  u8 unknown_0[0xB8];
  s16 field_B8;
  u8 unknown_BA[0xA];
  f32 field_C4;
  f32 field_C8;
  u8 unknown_CC[0x2C4];
  u8 *field_390;
  u8 unknown_394[0x30];
  int field_3C4;
  u8 unknown_3C8[0x48];
  int field_410;
  int field_414;
  int field_418;
};

extern "C" {
s32 queue_destruction__7TObjectFv(int);
u32 create_particle_emitter(void *, int);
s32 transition_enemy_state(void *, int);
s32 noop__9TObjEneDDFv(void *);
s32 fn_800C3A60(void *, int);
s32 check_hit_flag__16TObjEneRe2FlowerFv(void *);
s32 TObjPlayer__sub_800C4A5C(int, void *, void *, int);
s32 advance_animation_playback(void *);
s32 play_sound_effect(void *, void *, int, int);
u32 __nw__7TObjectFUl(int);
extern u8 *lbl_805D5170;
extern const f32 lbl_805D9FD8;
extern const f32 lbl_805D9FDC;
void fn_800C32DC(u8 *arg0, s32 arg1);
s32 enemy_validate_retained_target(void *);
extern const f32 lbl_805D9FAC;
extern const f32 lbl_805D9FC0;
extern const f32 lbl_805D9FC4;
extern const f32 lbl_805D9FD4;
void fn_800C3088(u8 *arg0, int arg1);

typedef struct RecoveredFields_800C3088_arg0 RecoveredFields_800C3088_arg0;
typedef struct VBase_18_880cfd VBase_18_880cfd;
typedef struct VObj_18_880cfd VObj_18_880cfd;
void fn_800C3088(u8 *arg0, int arg1) {
  int temp_r0;
  u8 *temp_r3;
  u8 *temp_r3_2;
  u8 *temp_r3_3;
  switch (arg1)
  {
    case 4:
      ((RecoveredFields_800C3088_arg0 *) arg0)->field_B8 = 7;
      (((TObjEneDD *)(arg0))->vfunc_96());
      ((TObjEneRe2Flower *)arg0)->set_child_flags();
      ((RecoveredFields_800C3088_arg0 *) arg0)->field_3C4 = (int) (((RecoveredFields_800C3088_arg0 *) arg0)->field_3C4 & 0xFFFFFFF7);
      ((TObjEneDD *)arg0)->set_field_378((int) 3);
      ((RecoveredFields_800C3088_arg0 *) arg0)->field_410 = 0;
      ((RecoveredFields_800C3088_arg0 *) arg0)->field_414 = 0;
      ((RecoveredFields_800C3088_arg0 *) arg0)->field_418 = 0;
      return;
    case 3:
      if (((int) ((RecoveredFields_800C3088_arg0 *) arg0)->field_410) >= 0x14)
    {
      transition_enemy_state((void *) arg0, (int) 3);
    }
    case 1:
      return;
    return;
    case 0:
      advance_animation_playback((void *) arg0);
      enemy_validate_retained_target((void *) arg0);
      temp_r0 = ((RecoveredFields_800C3088_arg0 *) arg0)->field_414;
      switch (temp_r0)
    {
      case 0:
        if (objInBand((GameObj *)arg0, (f32) ((((RecoveredFields_800C3088_arg0 *) arg0)->field_C4 - lbl_805D9FC0) - ((RecoveredFields_800C3088_arg0 *) arg0)->field_C8)) != 0)
      {
        ((RecoveredFields_800C3088_arg0 *) arg0)->field_418 = (int) (((RecoveredFields_800C3088_arg0 *) arg0)->field_418 + 1);
        if (((f32) ((RecoveredFields_800C3088_arg0 *) arg0)->field_418) >= lbl_805D9FD4)
        {
          ((RecoveredFields_800C3088_arg0 *) arg0)->field_414 = 1;
          ((RecoveredFields_800C3088_arg0 *) arg0)->field_C8 = (f32) lbl_805D9FAC;
        }
      }
      else
        if (objInBand((GameObj *)arg0, (f32)((f32) lbl_805D9FC4)) != 0)
      {
        if (((TObjEneDD_ST *)arg0)->enemy_check_target_valid() != 0)
        {
          temp_r3 = (u8 *) ((RecoveredFields_800C3088_arg0 *) arg0)->field_390;
          if ((((VObj_18_880cfd *)(temp_r3))->m18((arg0), (lbl_805D9FC0))) != 0)
          {
            temp_r3_2 = (u8 *) ((RecoveredFields_800C3088_arg0 *) arg0)->field_390;
            (((VObj_18_880cfd *)(temp_r3_2))->m20((arg0), (lbl_805D9FC0)));
            temp_r3_3 = (u8 *) ((RecoveredFields_800C3088_arg0 *) arg0)->field_390;
            (((VObj_18_880cfd *)(temp_r3_3))->m23((arg0), (lbl_805D9FD4)));
          }
        }
        play_sound_effect((void *) fn_800C3A60((void *) arg0, (int) 0x4003A814), (void *) (arg0 + 0x38), (int) 0, (int) 0);
        TObjPlayer::play_effect_if_v2((int) (-0x200));
      }
        break;
      case 1:
        ((RecoveredFields_800C3088_arg0 *) arg0)->field_410 = (int) (((RecoveredFields_800C3088_arg0 *) arg0)->field_410 + 1);
        break;
    }
      (((TObjEneDD *)(arg0))->vfunc_102());
      (((TObjEneDD *)(arg0))->vfunc_88());
      noop__9TObjEneDDFv((void *) arg0);
      return;
    case 5:
      ((RecoveredFields_800C3088_arg0 *) arg0)->field_3C4 = (int) (((RecoveredFields_800C3088_arg0 *) arg0)->field_3C4 & 0xFFFFFFFD);
      break;
  }
}

void fn_800C32DC(u8 *owner, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_800C32DC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800C32DC, spC) == 0x4) ? 1 : -1];
    Stack_800C32DC stack;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)owner + 0xB8) = 0;
        ((TObjEneDD *)(owner))->vfunc_96();
        ((TObjEneRe2Flower *)owner)->set_child_flags();
        *(s32 *)((s8 *)owner + 0x3C4) = (s32) (*(s32 *)((s8 *)owner + 0x3C4) & 0xFFFFFFF7);
        ((TObjEneDD *)owner)->set_field_378((int) (3));
        *(u32 *)((s8 *)owner + 0x428) = 0U;
        break;
    case 3:
        if ((check_hit_flag__16TObjEneRe2FlowerFv((void *) (owner)) == 0) && (((TObjEneDD *)owner)->get_flag_b4() != 0)) {
            transition_enemy_state((void *) (owner), (int) (3));
            break;
        }
    case 1:
        break;
    case 0:
        advance_animation_playback((void *) (owner));
        if ((u32) *(u32 *)((s8 *)owner + 0x428) == 0U) {
            *(u32 *)((s8 *)owner + 0x428) = create_particle_emitter((void *) (owner + 0x3E8), (int) (0xD1));
            temp_r3 = *(u32 *)((s8 *)owner + 0x428);
            if (temp_r3 != 0U) {
                ((TParticleCtrl *)temp_r3)->enable();
            }
        }
        temp_r3_2 = *(u32 *)((s8 *)owner + 0x428);
        if (temp_r3_2 != 0U) {
            if (*(f32 *)((s8 *)owner + 0xC0) < lbl_805D9FD8) {
                ((TNowLoading *)temp_r3_2)->copy_pos((void *) (owner + 0x3E8));
            } else {
                ((TParticleCtrl *)temp_r3_2)->enable();
            }
        }
        if (objInBand((GameObj *)(owner), (f32) (lbl_805D9FDC)) != 0) {
            VecCopy((Vec *)(&stack.sp8), (const Vec *)(owner + 0x3DC));
            stack.spC = lbl_805D9FDC + *(f32 *)((s8 *)owner + 0x3C);
            if ((((TObjEneRe2Flower *)owner)->get_flag_11() != 0) || (TObjEneDD::check_v2_mode() != 0)) {
                TTecMegid::create_ex((s32)((void *) (owner)), (s32)((void *) (&stack.sp8)), (s32)((int) (*(s32 *)((s8 *)owner + 0x60))), (s32)((int) (TObjEneDD::clamp_frame_index((int) (*(s32 *)((s8 *)lbl_805D5170 + 0x18))))));
            } else {
                temp_r3_3 = __nw__7TObjectFUl((int) (0x104));
                if (temp_r3_3 != 0U) {
                    TObjPlayer__sub_800C4A5C((int) (temp_r3_3), (void *) (owner), (void *) (&stack.sp8), (int) (*(s32 *)((s8 *)owner + 0x60)));
                }
            }
            play_sound_effect((void *) (fn_800C3A60((void *) (owner), (int) (0x4003A10E))), (void *) (owner + 0x3DC), (int) (0), (int) (0));
        }
        ((TObjEneDD *)(owner))->vfunc_102();
        ((TObjEneDD *)(owner))->vfunc_88();
        noop__9TObjEneDDFv((void *) (owner));
        break;
    case 5:
        temp_r3_4 = *(u32 *)((s8 *)owner + 0x428);
        if (temp_r3_4 != 0U) {
            queue_destruction__7TObjectFv((int) (temp_r3_4));
            *(u32 *)((s8 *)owner + 0x428) = 0U;
        }
        break;
    }
}

}

#include "pso/enemy/TObjEneEpsilon.h"

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
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual s32 m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual s32 m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
};

extern "C" {

s32 enemy_clear_target__12TObjEneDD_STFUs(void *);
extern const f32 lbl_805D9FF0;

f64 atan2_float(f32, f32);
s32 enemy_set_target_id(void *, u16);
u16 set_squared_value__9TObjEneDDFf(void *, f32);
u16 enemy_find_nearest_player_in_range(void *, f32);
s32 tick_period_counter(void *, void *, int);
s32 angle_difference_abs(int, int);
s32 approach_angle_limited(int, int, void *);
extern const f64 lbl_8043BBD8;
extern const f32 lbl_805D9FE0;
extern const f32 lbl_805D9FE4;
extern const f32 lbl_805D9FE8;
extern const f32 lbl_805D9FEC;

void TObjEneDD::state_chase_target(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    f32 d;
    s32 t;
    u16 idx;

    switch (arg1) {
    case 5:
        break;
    case 4:
        if (this->mode == 2) {
            this->m_b8 = 3;
        } else {
            this->m_b8 = 2;
        }
        this->vfunc_96();
        ((TObjEneRe2Flower *)arg0)->set_child_flags();
        *(s32 *)((s8 *)arg0 + 0x3C4) &= ~8;
        ((TObjEneDD *)arg0)->set_field_378(3);
        *(s32 *)((s8 *)arg0 + 0x414) = 0;
        *(s32 *)((s8 *)arg0 + 0x420) = 0;
        if (((TObjEneRe2Flower *)arg0)->get_flag_11() != 0) {
            play_sound_effect((void *)0x4003A840, (u8 *)&this->position, 0, 0);
        }
        break;
    case 3:
        if (((s32 (*)())check_hit_flag__16TObjEneRe2FlowerFv)() == 0) {
            d = *(f32 *)((s8 *)arg0 + 0x3AC);
            if (d > lbl_805D9FE0 || *(void **)((s8 *)arg0 + 0x390) == NULL) {
                transition_enemy_state(arg0, 2);
            } else if (d < lbl_805D9FE4) {
                t = angle_difference_abs(this->rotation_y, *(s32 *)((s8 *)arg0 + 0x420));
                if (t < ((TObjPlayer *)(*(s32 *)&this->m_318))->get_field_0c()) {
                    transition_enemy_state(arg0, 5);
                }
            } else if ((f32)*(s32 *)((s8 *)arg0 + 0x414) > lbl_805D9FE8) {
                transition_enemy_state(arg0, 4);
            }
        }
        break;
    case 0:
        ((s32 (*)())advance_animation_playback)();
        idx = 0xFFFF;
        if (tick_period_counter(arg0, arg0 + 0x3D0, 0x14) != 0) {
            if (*(f32 *)((s8 *)arg0 + 0x3AC) > lbl_805D9FEC) {
                if (((VObj_18 *)(arg0))->m97() != 0) {
                    idx = set_squared_value__9TObjEneDDFf(arg0, *(f32 *)((s8 *)arg0 + 0x3AC) - lbl_805D9FEC);
                }
                if (idx == 0xFFFF) {
                    idx = enemy_find_nearest_player_in_range(arg0, *(f32 *)((s8 *)arg0 + 0x3AC) - lbl_805D9FEC);
                }
                if (idx != 0xFFFF) {
                    enemy_set_target_id(arg0, idx);
                }
            }
        } else if (((TObjEneEpsilon *)arg0)->update_death_check() == 0) {
            break;
        }
        ((TObjEneDD_ST *)arg0)->enemy_copy_target_destination();
        ((TObjEneDD *)arg0)->update_velocity();
        (*(s32 *)((s8 *)arg0 + 0x414))++;
        *(s32 *)((s8 *)arg0 + 0x420) = (s32)(lbl_8043BBD8 * atan2_float(*(f32 *)((s8 *)arg0 + 0x3A0), *(f32 *)((s8 *)arg0 + 0x3A8)));
        this->rotation_y = approach_angle_limited(this->rotation_y, *(s32 *)((s8 *)arg0 + 0x420), *(void **)((s8 *)(*(u8 * *)&this->movementParameters) + 8));
        this->rotation_y = (s16)this->rotation_y;
        this->vfunc_102();
        this->vfunc_88();
        noop__9TObjEneDDFv(arg0);
        break;
    }
}

void handle_flower_state_change(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        ((TObjEneDD *)arg0)->vfunc_96();
        ((TObjEneRe2Flower *)arg0)->clear_child_flags();
        *(s32 *)((s8 *)arg0 + 0x3C4) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C4) & 0xFFFFFFF7);
        ((TObjEneDD *)arg0)->set_field_378(2);
        enemy_clear_target__12TObjEneDD_STFUs(arg0);
        return;
    case 3:
        if ((((s32 (*)())check_hit_flag__16TObjEneRe2FlowerFv)() == 0) && (((TObjEneDD_ST *)arg0)->update_linked_position(lbl_805D9FF0) != 0)) {
            transition_enemy_state(arg0, 3);
        }
    case 5:
    case 1:
        return;
    case 0:
        ((s32 (*)())advance_animation_playback)();
        ((TObjEneDD *)arg0)->vfunc_102();
        ((TObjEneDD *)arg0)->vfunc_88();
        break;
    }
}

}
