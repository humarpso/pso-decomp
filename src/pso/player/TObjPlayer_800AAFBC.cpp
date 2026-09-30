#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800ABA9C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_800ABA9C_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_800ABA9C_lbl_8058D490_size[sizeof(RecoveredGlobal_800ABA9C_lbl_8058D490) == 0x30 ? 1 : -1];

struct VBase_14_800ABCBC { char pad[0x14]; };

struct VObj_14_800ABCBC : VBase_14_800ABCBC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual s32 m5();
};

struct Obj_800ABCBC { u8 pad0[0x38]; u8 sub38[0x326 - 0x38]; s16 f326; s16 state; u8 pad32a[0x390 - 0x32A]; s32 f390; };

extern "C" {
void obj_setFlags30(void *, u32);
void TObjPlayer__sub_800AB034(u8 *arg0);
void obj_clearFlags30(void *, u32);
void TObjPlayer__sub_800AAFF8(u8 *arg0);
s32 get_action_priority__10TObjPlayerFPv(void *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
extern s32 lbl_805D5094;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9B68;
void draw_model_no_fog__10TObjPlayerFPv(u8 *arg0);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);
extern M2C_UNK lbl_80491478[];
void *destroy_with_particle_cleanup__10TObjPlayerFPvs(void *arg0, s16 arg1);
void TObjPlayer__sub_800AB970(void);
void set_param__12TObjEneLappyFPvi(void *, s32);
void TObjPlayer__sub_800ABC24(u8 *arg0);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
extern s32 lbl_805D50C4;
void update_particle_by_phase__10TObjPlayerFv(void);
void queue_destruction__7TObjectFv(void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u32 TObjButterflyLobby__sub_8007A5D8(void *, void *, int);
M2C_UNK TObjPlayer__sub_800AB0EC(void *, int);
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805D9B5C;
extern const f32 lbl_805D9B60;
void TObjPlayer__sub_800AB1C8(u8 *arg0);
f32 get_random_float__8TObjFishFv(f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805D9B10;
s32 TObjPlayer__sub_800AB068(u8 *arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjPlayer__sub_800ABA0C(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_effect_if_v2__10TObjPlayerFi(int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjPlayer__sub_800AB974(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_effect_if_v2__10TObjPlayerFi(int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjPlayer__sub_800AB9C0(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_effect_if_v2__10TObjPlayerFi(int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjPlayer__sub_800ABA50(s32 arg0);
s32 spawn_ground_effect__10TObjPlayerFPvi(void *, int);
s32 TObjPlayer__sub_800D92BC(void *, int);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
s32 TScene__sub_803D8DB4(int, void *, void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
s32 TObjPlayer__sub_803D97F0(void *);
M2C_UNK TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_800ABA9C_lbl_8058D490 lbl_8058D490;
extern const f32 lbl_805D9BA0;
extern const f32 lbl_805D9BA4;
extern const f32 lbl_805D9BA8;
void TObjPlayer__sub_800ABA9C(u8 *arg0);
s32 TBoss3Volopt__sub_800D8E80(void *);
s32 TObjEneMe3SinowZoa__sub_800D758C(void *);
s32 TBoss1Dragon__sub_80143504();
void TObjPlayer__sub_800ABCBC(Obj_800ABCBC *arg0);
}

extern "C" {

void TObjPlayer__sub_800AAFF0(void* p, f32 v);
void cancel_action__10TObjPlayerFPv(void *arg0);
void *dt__10TObjPlayerFPvs(void *arg0, s16 arg1);
void init_level_stats__10TObjPlayerFPvi(void *arg0, s32 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_cancel_flag__10TObjPlayerFPv(u32);

extern void *lbl_805D5090;
extern s32 lbl_805D5098;

void init_level_stats__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5090, void **, 0x42C), s32 *, 8);
    if (arg1 == 0) {
        var_r0 = M2C_FIELD(M2C_FIELD(lbl_805D5090, void **, 0x42C), s32 *, 0xC);
    } else {
        var_r0 = lbl_805D5098;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0;
}

void TObjPlayer__sub_800AAFF0(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }

extern M2C_UNK lbl_80491460[];

void TObjPlayer__sub_800AAFF8(u8 *arg0) {
    u8 *temp_r6;
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
    M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xF5FFFFFF);
    obj_clearFlags30(arg0, 0x04000000U);
}

void TObjPlayer__sub_800AB034(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 0x0A000000);
    obj_setFlags30(arg0, 0x04000000U);
}

s32 TObjPlayer__sub_800AB068(u8 *arg0) {
  u8 *new_var;
  f32 temp_f31;
  ;
  if ((get_random_float__8TObjFishFv((*((f32 *) (((s8 *) arg0) + 0x38))) - (*((f32 *) (((s8 *) arg0) + 0x44)))) + get_random_float__8TObjFishFv((*((f32 *) (((s8 *) arg0) + 0x40))) - (*((f32 *) (((s8 *) arg0) + 0x4C))))) > lbl_805D9B10)
  {
    VecCopy__FP3VecPC3Vec((void *) ((new_var = arg0) + 0x38), (void *) (arg0 + 0x44));
    return 1;
  }
  return 0;
}

void TObjPlayer__sub_800AB1C8(u8 *arg0) {
  s32 var_r31;
  u8 *temp_r3;
  s32 new_var;
  TBoss4Zako__sub_803D8910((void *) (arg0 + 0x1C), (void *) (arg0 + 0x34));
  *((s32 *) (((s8 *) arg0) + 0x60)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x60))) + 1);
  if (!((*((s32 *) (((s8 *) arg0) + 0x60))) & 3))
  {
    if (TObjButterflyLobby__sub_8007A5D8((void *) (arg0 + 0x28), (void *) (arg0 + 0x1C), (int) (-1)) != 0U)
    {
      queue_destruction__7TObjectFv(arg0);
      return;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg0 + 0x1C));
    goto block_4;
  }
  block_4:
  temp_r3 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x5C)));
  if (temp_r3 != 0)
  {
    copy_pos__11TNowLoadingFPvPv(temp_r3, arg0 + 0x1C);
  }
  *((f32 *) (((s8 *) arg0) + 0x58)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x58))) + lbl_805D9B5C);
  if ((*((f32 *) (((s8 *) arg0) + 0x58))) >= lbl_805D9B60)
  {
    queue_destruction__7TObjectFv(arg0);
    return;
  }
  var_r31 = 0;
  do
  {
    if (!arg0)
    {
    }
    new_var = TPlayerBattleCtrl4P__sub_801BA74C((int) var_r31);
    TObjPlayer__sub_800AB0EC((void *) arg0, (int) new_var);
    var_r31 += 1;
  }
  while (var_r31 < 0xC);
}

void *dt__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80491460;
        if (M2C_FIELD(arg0, void **, 0x5C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x5C)); }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void cancel_action__10TObjPlayerFPv(void *arg0) {
    if (get_action_priority__10TObjPlayerFPv((void *)(arg0)) != 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD0) != 0U) {
            set_cancel_flag__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0xD0));
        }
        M2C_FIELD(arg0, s16 *, 0xAE) = 2;
    }
}
s32 get_action_priority__10TObjPlayerFPv(void *arg0) {
    return (s32)((u32)__cntlzw(3 - M2C_FIELD(arg0, s16 *, 0xAE)) >> 5);
}
void draw_model_no_fog__10TObjPlayerFPv(u8 *arg0) {
    set_global_param__8TObjFishFi(lbl_805D5094);
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xD8));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0xF0);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xC0));
    TOMonitorMachine01__sub_803D8B5C(0, lbl_805D9B68, lbl_805D9B68, lbl_805D9B68);
    some_id_805c6f74 &= 0xFFFFFBFF;
    TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0xC8));
    TObjPlayer__sub_803D9B78();
}
void *destroy_with_particle_cleanup__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80491478;
        if (M2C_FIELD(arg0, void **, 0xD0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD0)); M2C_FIELD(arg0, M2C_UNK *, 0xD0) = 0; }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void TObjPlayer__sub_800AB970(void) {  }

void TObjPlayer__sub_800AB974(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A60C))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    play_effect_if_v2__10TObjPlayerFi((int) (-0x300));
}

void TObjPlayer__sub_800AB9C0(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A60B))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    play_effect_if_v2__10TObjPlayerFi((int) (-0x300));
}

void TObjPlayer__sub_800ABA0C(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A60D))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjPlayer__sub_800ABA50(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A60B))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    play_effect_if_v2__10TObjPlayerFi((int) (-0x300));
}

void TObjPlayer__sub_800ABA9C(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_800ABA9C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800ABA9C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800ABA9C, sp10) == 0x8) ? 1 : -1];
    Stack_800ABA9C stack;
    stack.sp8 = lbl_805D9BA0;
    stack.spC = lbl_805D9BA4;
    stack.sp10 = lbl_805D9BA8 * M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), f32 *, 0x10);
    TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
    TObjPlayer__sub_803D9214((M2C_UNK)((int) (0)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x60))));
    TScene__sub_803D8DB4((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    TObjPlayer__sub_803D9B78();
    TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    spawn_ground_effect__10TObjPlayerFPvi((void *) (&stack.sp8), (int) (0x23));
    TObjPlayer__sub_800D92BC((void *) (&stack.sp8), (int) (0xF));
}

void TObjPlayer__sub_800ABC24(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x334);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x334) = 0;
    } else if (temp_r0 > 2) {
        M2C_FIELD(arg0, s32 *, 0x334) = 2;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x334);
    switch (temp_r0_2) {
    case 2:
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
        set_param__12TObjEneLappyFPvi(arg0, 0x12);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x368) = 0;
        set_param__12TObjEneLappyFPvi(arg0, 0x11);
        return;
    default:
        M2C_FIELD(arg0, s32 *, 0x368) = 2;
        set_param__12TObjEneLappyFPvi(arg0, 0x10);
        return;
    }
}

void TObjPlayer__sub_800ABCBC(Obj_800ABCBC *arg0) {
    TBoss1Dragon__sub_80143504();
    switch (arg0->state) {
    case 0:
    default:
        if (arg0->f390 != 0) {
            TObjEneMe3SinowZoa__sub_800D758C((u8 *)arg0 + 0x3A8);
            TBoss3Volopt__sub_800D8E80(arg0->sub38);
            arg0->state = 1;
        } else {
            arg0->state = 2;
        }
        break;
    case 1:
        if (((VObj_14_800ABCBC *)((u8 *)arg0 + 0x3A8))->m5() == 1) {
            arg0->state = 2;
            arg0->f390 = 0;
        }
        break;
    case 2:
        arg0->f326 = 1;
        arg0->state = 0;
        break;
    }
}

void update_particle_by_phase__10TObjPlayerFv(void) {
    switch (lbl_805D50C4) {
    case 0x10:
    case 0x1A:
    case 0x20:
        begin_effect_render__13TParticleCtrlFv();
        break;
    default:
        end_effect_render__13TParticleCtrlFv();
        break;
    }
    lbl_805D50C4 += 1;
}

}
