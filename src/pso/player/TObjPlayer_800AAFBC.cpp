#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
int TObjPlayer__sub_800AB974(void);
int TObjPlayer__sub_800AB9C0(void);
int TObjPlayer__sub_800ABA0C(void);
int TObjPlayer__sub_800ABA50(void);
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
int TObjPlayer__sub_800AB974(void) { return 0; }
int TObjPlayer__sub_800AB9C0(void) { return 0; }
int TObjPlayer__sub_800ABA0C(void) { return 0; }
int TObjPlayer__sub_800ABA50(void) { return 0; }
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
