#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct IllGillBase_80367984_8036690C { char pad[0x14]; };
struct IllGillVObj_80367984_8036690C : IllGillBase_80367984_8036690C {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
};

struct RecoveredGlobal_80367DC8_lbl_8050BF00 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80367DC8_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredFields_80367EFC_arg0
{
  u8 unknown_0[0xB8];
  s16 field_B8;
  u8 unknown_BA[0x26C];
  s16 field_326;
  s16 field_328;
  u8 unknown_32A[0x66];
  s32 field_390;
};

struct RecoveredFields_80367F6C_arg0
{
  u8 unknown_0[0xB8];
  s16 field_B8;
  u8 unknown_BA[0x26C];
  s16 field_326;
  s16 field_328;
  u8 unknown_32A[0x66];
  s32 field_390;
};

struct O_80367DA4 { u8 pad[0x3e0]; s32 arr[4]; };

struct Gill_803671A4 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x84];
    s16 xb8;
    u8 padba[0x26C];
    s16 x326;
    s16 x328;
    u8 pad32a[0x6A];
    s32 x394;
    u8 pad398[0x14];
    f32 x3ac;
};

struct Hit_803683BC { u8 pad[0x30]; u32 flags; };

struct Gill_803683BC {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x274];
    Hit_803683BC *x2a8;
    u8 pad2ac[8];
    f32 x2b4;
    u8 pad2b8[0x6E];
    s16 x326;
    u8 pad328[0x74];
    s32 x39c;
};

struct Vec_80367860 { f32 x, y, z; };

typedef s32 M2C_UNK;
struct VBase_18_80367FDC { char pad[0x18]; };

struct VObj_18_80367FDC : VBase_18_80367FDC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16();
    virtual s32 m17(s32);
};

struct Vec_80367FDC { f32 x, y, z; };

struct Gill_80367FDC : VObj_18_80367FDC {
    u16 f1C;
    u8 pad1E[0x2A8 - 0x1E];
    s32 f2A8;
    u8 pad2AC[0x338 - 0x2AC];
    u16 f338;
    u8 pad33A[0x350 - 0x33A];
    f32 *f350;
    u8 pad354[0x390 - 0x354];
    s32 f390;
};

extern "C" {
int obj_clearFlags30(void*, int);
void free_resources__14TObjEneIllGillFPv(void *arg0);
void TObjEneIllGill__vt57(u8 *arg0);
void refresh_lobby_state__10TObjPlayerFPv(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);
void free_resources__14TObjEneIllGillFPv(void *arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
void TObjEneIllGill__vt61(u8 *arg0);
int obj_clearFlags30(void*, int);
void update_collisions__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, int, f32);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
extern const f32 TObjEneIllGill__data_805E02BC;
void TObjEneIllGill__sub_803669B0(u8 *arg0);
M2C_UNK TObjPlayer__sub_80011734(void *, int, f32);
s32 TObjPlayer__sub_80017E6C(void *);
M2C_UNK obj_setFlags30(void *, int);
s32 queue_destruction__7TObjectFv(void *);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
s32 request_two_effects__10TObjPlayerFPv(void *);
s32 apply_effect_variant_b__10TObjPlayerFii(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 TObjEneIllGill__data_805E02C0;
extern const f32 TObjEneIllGill__data_805E02D8;
extern const f32 TObjEneIllGill__data_805E02DC;
extern const f32 lbl_805E02E0;
extern const f32 lbl_805E02E4;
void TObjEneIllGill__sub_803665B4(u8 *arg0);
s32 TObjPlayer__sub_80156844(void *, void *, int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
s32 TScene__sub_803D8DB4(int, void *, void *);
s32 rotate_matrix_y(int, void *);
s32 TObjPlayer__sub_803D97F0(void *);
s32 TCameraCtrl__sub_803D9858(int);
extern RecoveredGlobal_80367DC8_lbl_8050BF00 lbl_8050BF00;
extern RecoveredGlobal_80367DC8_lbl_8058D490 lbl_8058D490;
extern const f32 TObjEneIllGill__data_805E02BC;
void TObjEneIllGill__sub_80367DC8(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_80016D78(void *);
int obj_clearFlags30(void*, int);
s32 TObjEneIllGill__vt37(u8 *arg0);
s32 TObjPlayer__sub_80016FF8(void *);
int obj_clearFlags30(void*, int);
s32 TObjEneIllGill__vt34(u8 *arg0);
void TObjEneIllGill__sub_80367DA4(s32 arg0);
void TObjEneIllGill__sub_80367DA4(s32 arg0);
extern const f32 TObjEneIllGill__data_805E02BC;
void TObjEneIllGill__vt58(Gill_803671A4 *o);
void copy_position__20TBoss3VoloptHiraisinFi(void *);
void update_prev_position__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801B4A18(void *, int);
void TObjEneIllGill__sub_80365688(void *);
void TObjEneIllGill__sub_803660A4(void *);
void TObjEneIllGill__sub_803665B4(u8 *arg0);
void TObjEneIllGill__sub_803669B0(u8 *arg0);
void TObjEneIllGill__sub_80366AE4(void *);
void TObjEneIllGill__sub_80367588(void *);
void run_attack_phase__14TObjEneIllGillFPv(u8 *arg0);
extern const f32 TObjEneIllGill__data_805E02CC;
void run_task__14TObjEneIllGillFv(Gill_803683BC *o);
M2C_UNK TObjPlayer__sub_80011734(void *, int, f32);
f32 TObjPlayer__sub_80017804(void *, Vec_80367860, f32);
M2C_UNK obj_setFlags30(void *, int);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
s32 TScene__sub_803D8DB4(int, void *, void *);
s32 rotate_matrix_y(int, void *);
s32 TObjPlayer__sub_803D97F0(void *);
s32 TCameraCtrl__sub_803D9858(int);
extern RecoveredGlobal_80367DC8_lbl_8058D490 lbl_8058D490;
extern const f32 lbl_805E02B8;
extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 TObjEneIllGill__data_805E02CC;
extern const f32 TObjEneIllGill__data_805E02DC;
void TObjEneIllGill__sub_80367860(u8 *arg0);
M2C_UNK TObjPlayer__sub_80011734(void *, int, f32);
void VecCopy__FP3VecPC3Vec(void *, const void *);
int obj_clearFlags30(void*, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
void update_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 TObjEneIllGill__data_805E02C0;
extern const f32 lbl_805E02E8;
void TObjEneIllGill__sub_803667B8(u8 *arg0);
u16 TObjPlayer__sub_800115C4(void *, int, f32 *, f32);
s32 TObjPlayer__sub_80018428(void *, void *);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 TObjPlayer__sub_80019570(void *);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, int);
u16 obj_getField1c(void *);
int obj_clearFlags30(void*, int);
M2C_UNK obj_setFlags30(void *, int);
s32 TObjPlayer__sub_800196EC(void);
s32 get_field_3e4__10TObjPlayerFPv(s32);
s32 get_enemy_entity(u16);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void TBoss6Type1__sub_803D9370(void *, void *);
extern Vec_80367FDC lbl_8047A328;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
void TObjEneIllGill__vt26(Gill_80367FDC *self);
}

extern "C" {

int TObjEneIllGill__vt59(void* p);
void TObjEneIllGill__vt60(void *arg0);
void *__dt__14TObjEneIllGillFv(void *arg0, s16 arg1);
void * create__14TObjEneIllGillFPv(void *arg0);
void free_effect__14TObjEneIllGillFv(void);
void free_resources__14TObjEneIllGillFPv(void *arg0);
void run_attack_phase__14TObjEneIllGillFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);
int TLobby__sub_8001FE7C(void*, void*);
void *TObjControl__ct(void *, void *);
void TObjEneGibbles__sub_80156720(void *);
void *TObjEneIllGill__ct(void *, void *, void *);
M2C_UNK TObjEneIllGill__sub_80367B00(void *);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, int, f32);
M2C_UNK enemy_wander_home(void *, int, f32, f32, f32);
f32 TObjPlayer__sub_80141CF8(void *, void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void __dt__9TObjEnemyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK minimap_render_dot(void *, int, int, int);
int obj_clearFlags30(void*, int);
M2C_UNK obj_setFlags30(void *, int);
s32 request_destroy__11TBoss4Type2FUi(void *);

void TObjEneIllGill__sub_803665B4(u8 *arg0) {
  s16 temp_r0;
  s32 temp_r0_2;
  obj_setFlags30((void *) arg0, (int) 0x04040000);
  TBoss1Dragon__sub_80143504((void *) arg0);
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x328));
  switch (temp_r0)
  {
    default:
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
    case 0:
      ((s32)TObjPlayer__sub_80011734((void *) arg0, (int) 0, (f32) TObjEneIllGill__data_805E02BC));
      if (objInBand__FP7GameObjf((void *) arg0, (f32) TObjEneIllGill__data_805E02D8) != 0)
    {
      TBoss3Volopt__sub_8022675C((int) 0x4003A351, (void *) (arg0 + 0x38), (int) 0, (int) 0);
      *((s16 *) (((s8 *) arg0) + 0x328)) = 2;
    }
      return;
    return;
    case 2:
      *((f32 *) (((s8 *) arg0) + 0x300)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x300))) + TObjEneIllGill__data_805E02DC);
      TObjPlayer__sub_80017E6C((void *) arg0);
      *((f32 *) (((s8 *) arg0) + 0x308)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x308))) * lbl_805E02E0);
      *((f32 *) (((s8 *) arg0) + 0x310)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x310))) * lbl_805E02E0);
      if (objInBand__FP7GameObjf((void *) arg0, (f32) TObjEneIllGill__data_805E02C0) != 0)
    {
      *((s16 *) (((s8 *) arg0) + 0x328)) = 3;
      TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x38), (int) 0xF0);
      return;
    }
      break;
    case 3:
      if (objInBand__FP7GameObjf((void *) arg0, (f32) lbl_805E02E4) != 0)
    {
      TBoss3Volopt__sub_8022675C((int) 0x4003A358, (void *) (arg0 + 0x38), (int) 0, (int) 0);
      apply_effect_variant_b__10TObjPlayerFii((void *) (arg0 + 0x38), (int) 0xA);
      request_two_effects__10TObjPlayerFPv((void *) (arg0 + 0x38));
      *((s16 *) (((s8 *) arg0) + 0x328)) = 4;
      *((s32 *) (((s8 *) arg0) + 0x3A0)) = 0xA;
      return;
    }
      break;
    case 4:
      temp_r0_2 = (*((s32 *) (((s8 *) arg0) + 0x3A0))) - 1;
      *((s32 *) (((s8 *) arg0) + 0x3A0)) = temp_r0_2;
      if (temp_r0_2 < 0)
    {
      queue_destruction__7TObjectFv((void *) arg0);
    }
      break;
  }
}

void TObjEneIllGill__vt61(u8 *arg0) {
    u8 *temp_r5;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 8) {
        M2C_FIELD(arg0, s16 *, 0x326) = 8;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFF7FFE);
        free_resources__14TObjEneIllGillFPv(arg0);
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x2FC), (int) (0xF2));
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        send_entity_set_flags__6TLobbyFPv(arg0);
    }
}

void TObjEneIllGill__sub_803667B8(u8 *arg0) {
    obj_clearFlags30((void*)(arg0), (int)(0x04040000));
    TBoss1Dragon__sub_80143504(arg0);
    M2C_FIELD(arg0, f32 *, 0x310) = TObjEneIllGill__data_805E02BC;
    M2C_FIELD(arg0, f32 *, 0x308) = TObjEneIllGill__data_805E02BC;
    TObjPlayer__sub_80011734(arg0, 0, TObjEneIllGill__data_805E02BC);
    update_collisions__10TObjPlayerFPv(arg0);
    if (objInBand__FP7GameObjf(arg0, TObjEneIllGill__data_805E02C0) != 0) {
        TBoss3Volopt__sub_8022675C(0x4003A350, arg0 + 0x38, 0, 0);
    }
    if (M2C_FIELD(arg0, u32 *, 0xB4) != 8) {
        M2C_FIELD(arg0, u32 *, 0x30) &= ~0x600;
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), u32 *, 0x18) &= ~0x04000000;
        if ((f32)M2C_FIELD(arg0, s16 *, 0x32C) < lbl_805E02E8 * (f32)M2C_FIELD(arg0, s16 *, 0x2B8)) {
            M2C_FIELD(arg0, u32 *, 0x30) |= 0x2000;
            M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
            M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFF;
            VecCopy__FP3VecPC3Vec(arg0 + 0x290, arg0 + 0x2FC);
            VecCopy__FP3VecPC3Vec(arg0 + 0x29C, arg0 + 0x2FC);
            M2C_FIELD(arg0, f32 *, 0x3AC) = TObjEneIllGill__data_805E02BC;
        }
        M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

void TObjEneIllGill__vt60(void *arg0) {
    s16 temp_r0;
    void *temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xB8);
    if ((temp_r0 == 2) || (temp_r0 == 3)) {
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        M2C_FIELD(arg0, s32 *, 0x2DC) = 0;
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFBFFFFFF);
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        free_resources__14TObjEneIllGillFPv((void *)((M2C_UNK) arg0));
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}

void TObjEneIllGill__sub_803669B0(u8 *arg0) {
    s32 temp_r3;
    obj_clearFlags30((void*)(arg0), (int)(0x04040000U));
    TBoss1Dragon__sub_80143504((void *)((void *) (arg0)));
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        TObjPlayer__sub_80011734((void *) (arg0), (int) (0), (f32) ((*(f32 *)&TObjEneIllGill__data_805E02BC)));
    }
    update_collisions__10TObjPlayerFPv(arg0);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x39C);
    M2C_FIELD(arg0, s32 *, 0x39C) = (s32) (temp_r3 - 1);
    if (temp_r3 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        M2C_FIELD(arg0, s32 *, 0x39C) = (s32) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

int TObjEneIllGill__vt59(void* p) { return obj_clearFlags30((void*)(p), (int)(256)); }
void free_resources__14TObjEneIllGillFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x414) != 0U) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x414));
        M2C_FIELD(arg0, u32 *, 0x414) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x418) != 0U) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x418));
        M2C_FIELD(arg0, u32 *, 0x418) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x41C) != 0U) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x41C));
        M2C_FIELD(arg0, u32 *, 0x41C) = 0U;
    }
}

extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 lbl_805E02C4;
extern const f32 lbl_805E02C8;
extern const f32 TObjEneIllGill__data_805E02DC;
extern const f32 lbl_805E02E8;
extern const f32 lbl_805E02FC;

void TObjEneIllGill__vt58(Gill_803671A4 *o) {
    switch (o->x394) {
    default:
        o->x394 = 0;
    case 0:
    case 1:
        o->x326 = 3;
        o->x328 = 0;
        o->xb8 = 1;
        break;
    case 2:
        o->x326 = 5;
        o->x328 = 0;
        o->xb8 = 1;
        break;
    case 3:
        o->x326 = 4;
        o->x328 = 0;
        o->xb8 = 7;
        o->x3ac = TObjEneIllGill__data_805E02BC;
        TObjEneIllGill__sub_80367DA4((s32)o);
        break;
    }
    o->flags |= 0x200000;
    o->flags &= ~0x40000;
}

void TObjEneIllGill__vt57(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 >= 3) || (temp_r0 < 1)) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s16 *, 0x326) = 2;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        obj_clearFlags30((void*)(arg0), (int)(0x04040000U));
        free_resources__14TObjEneIllGillFPv(arg0);
    }
}

void TObjEneIllGill__sub_80367860(u8 *arg0) {
    Vec_80367860 v;
    f32 d;
    f32 a;
    f32 b;
    f32 *r;
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    TBoss1Dragon__sub_80143504(arg0);
    obj_setFlags30(arg0, 0x04040000);
    v.y = TObjEneIllGill__data_805E02BC;
    v.x = TObjEneIllGill__data_805E02BC;
    v.z = TObjEneIllGill__data_805E02CC;
    TObjPlayer__sub_803D97F0(&lbl_8058D490);
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0x60));
    TScene__sub_803D8DB4(0, &v, &v);
    TCameraCtrl__sub_803D9858(1);
    TBoss4Zako__sub_803D8910(&v, arg0 + 0x50);
    M2C_FIELD(arg0, f32 *, 0x300) += TObjEneIllGill__data_805E02DC;
    d = TObjPlayer__sub_80017804(arg0, v, lbl_805E02B8 * M2C_FIELD(arg0, f32 **, 0x350)[1]);
    r = M2C_FIELD(arg0, f32 **, 0x350);
    a = r[0] * r[0];
    b = r[1] * r[1];
    if (a < d || d < b) {
        M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    }
    TObjPlayer__sub_80011734(arg0, 0, TObjEneIllGill__data_805E02BC);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

void run_attack_phase__14TObjEneIllGillFPv(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;

    TBoss1Dragon__sub_80143504((void *)(arg0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        obj_setFlags30((void *) (arg0), (int) (0x04040000));
        TObjEneMe3SinowZoa__sub_800D758C((void *) (arg0 + 0x374));
        TBoss3Volopt__sub_800D8C48((void *) (arg0 + 0x38));
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        break;
    case 1:
        obj_setFlags30((void *) (arg0), (int) (0x04040000));
        if (((IllGillVObj_80367984_8036690C *) (arg0 + 0x374))->m5() == 1) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            M2C_FIELD(arg0, s32 *, 0x390) = 0;
        }
        break;
    case 2:
        obj_clearFlags30((void*)((void *) (arg0)), (int)((int) (0x04040000)));
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        if (TObjPlayer__sub_80141CF8((void *) (arg0 + 0x38), (void *) (arg0 + 0x50)) > lbl_805E02C8) {
            TObjEneIllGill__sub_80367B00((void *) (arg0));
        } else {
            M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + TObjEneIllGill__data_805E02DC);
            temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x350));
            enemy_wander_home((void *) (arg0), (int) (M2C_FIELD(temp_r4, s32 *, 8)), (f32) (lbl_805E02E8 * M2C_FIELD(temp_r4, f32 *, 4)), (f32) (lbl_805E02C4), (f32) (lbl_805E02FC));
        }
        TObjPlayer__sub_80154E3C((void *) (arg0));
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734((void *) (arg0), (int) (0), (f32) (TObjEneIllGill__data_805E02BC));
        }
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    obj_clearFlags30((void*)((void *) (arg0)), (int)((int) (0x200000)));
}

extern void *tl_04;

typedef char RecoveredGlobal_80367DC8_lbl_8050BF00_size[sizeof(RecoveredGlobal_80367DC8_lbl_8050BF00) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80367DC8_lbl_8058D490_size[sizeof(RecoveredGlobal_80367DC8_lbl_8058D490) == 0x30 ? 1 : -1];

void TObjEneIllGill__sub_80367DA4(s32 arg0) {
    O_80367DA4 *self = (O_80367DA4 *)arg0;
    s32 i;
    for (i = 0; i < 4; i++) {
        self->arr[i] = 0;
    }
}

void TObjEneIllGill__sub_80367DC8(u8 *arg0, s32 arg1) {
    M2C_FIELD(&lbl_8050BF00.value, f32 *, 4) = (f32) TObjEneIllGill__data_805E02BC;
    M2C_FIELD(&lbl_8050BF00.value, f32 *, 0) = (f32) TObjEneIllGill__data_805E02BC;
    M2C_FIELD(&lbl_8050BF00.value, f32 *, 8) = (f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4);
    TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
    rotate_matrix_y((int) (0), (void *) (arg1));
    TScene__sub_803D8DB4((int) (0), (void *) (&lbl_8050BF00.value), (void *) (&lbl_8050BF00.value));
    TCameraCtrl__sub_803D9858((int) (1));
    TBoss4Zako__sub_803D8910((void *) (&lbl_8050BF00.value), (void *) (arg0 + 0x38));
    TObjPlayer__sub_80156844((void *) (arg0), (void *) (&lbl_8050BF00.value), (int) (0));
}

typedef struct RecoveredFields_80367EFC_arg0 RecoveredFields_80367EFC_arg0;
s32 TObjEneIllGill__vt37(u8 *arg0) {
  if (TObjPlayer__sub_80016D78((void *) arg0) != 0)
  {
    if (((RecoveredFields_80367EFC_arg0 *) arg0)->field_326 != 0)
    {
      if ((arg0 && arg0) && arg0)
      {
      }
    }
    else
    {
      ((RecoveredFields_80367EFC_arg0 *) arg0)->field_390 = 0;
      ((RecoveredFields_80367EFC_arg0 *) arg0)->field_328 = 0;
      ((RecoveredFields_80367EFC_arg0 *) arg0)->field_B8 = 1;
      obj_clearFlags30((void*)((void *) arg0), (int)((int) 0x04040000));
    }
    return 1;
  }
  return 0;
}

typedef struct RecoveredFields_80367F6C_arg0 RecoveredFields_80367F6C_arg0;
s32 TObjEneIllGill__vt34(u8 *arg0) {
  if (0 != TObjPlayer__sub_80016FF8((void *) arg0))
  {
    if (((RecoveredFields_80367F6C_arg0 *) arg0)->field_326 != 0)
    {
      if (((!arg0) && (!arg0)) && (!arg0))
      {
      }
    }
    else
    {
      ((RecoveredFields_80367F6C_arg0 *) arg0)->field_390 = 0;
      ((RecoveredFields_80367F6C_arg0 *) arg0)->field_328 = 0;
      ((RecoveredFields_80367F6C_arg0 *) arg0)->field_B8 = 1;
      obj_clearFlags30((void*)((void *) arg0), (int)((int) 0x04040000));
    }
    return 1;
  }
  return 0;
}

#pragma push
#pragma opt_loop_invariants off
void TObjEneIllGill__vt26(Gill_80367FDC *self) {
    u16 best;
    s32 i;
    u8 *pl;
    u16 id;
    f32 bestDist;
    f32 d;
    u16 t;
    s32 ent;
    s32 x;
    if (self->m17(0x1E) != 0) {
        if (self->f390 != 0) {
            self->f338 = 0xFFFF;
            self->f2A8 = 0;
            return;
        }
        if (obj_testFlags30(self, 0x10) != 0) {
            i = 0;
            best = 0xFFFF;
            Vec_80367FDC v = lbl_8047A328;
            bestDist = *self->f350 * *self->f350;
            for (; i < lbl_805D586C + lbl_805D5870; i++) {
                pl = get_player_data__10TObjPlayerFi(i);
                if (pl == NULL) break;
                if (TObjPlayer__sub_80019570(pl) == 0) continue;
                id = obj_getField1c(pl);
                if (id >= 0x4000) continue;
                if (id == self->f1C) continue;
                if (M2C_FIELD(pl, s32 *, 0x30) & 0x02000800) continue;
                VecCopy__FP3VecPC3Vec(&v, pl + 0x2FC);
                TBoss6Type1__sub_803D9370(&v, (u8 *)self + 0x2FC);
                d = v.x * v.x + v.z * v.z;
                if (d < bestDist && TObjPlayer__sub_80018428(self, pl + 0x2FC) == 0) {
                    best = id;
                    bestDist = d;
                }
            }
            self->f338 = best;
        } else {
            self->f338 = TObjPlayer__sub_800115C4(self, 0, self->f350, *self->f350);
        }
        t = self->f338;
        if (t < 0x1000) {
            ent = TPlayerBattleCtrl4P__sub_801BA74C(t);
            if (ent != 0) {
                if (get_field_3e4__10TObjPlayerFPv(ent) == TObjPlayer__sub_800196EC()) {
                    self->f2A8 = ent;
                    obj_clearFlags30((void*)(self), (int)(0x04040000));
                    return;
                }
            }
            self->f2A8 = 0;
            obj_setFlags30(self, 0x04040000);
            return;
        }
        if (t < 0x4000) {
            self->f2A8 = get_enemy_entity(t);
            obj_clearFlags30((void*)(self), (int)(0x04040000));
        }
    }
}
#pragma pop

void run_task__14TObjEneIllGillFv(Gill_803683BC *o) {
    switch (o->x326) {
    case 0:
        run_attack_phase__14TObjEneIllGillFPv((u8 *)o);
        break;
    case 1:
        TObjEneIllGill__sub_80367860((u8 *)(o));
        break;
    case 2:
        TObjEneIllGill__sub_80367588(o);
        break;
    case 3:
        TObjEneIllGill__sub_80366AE4(o);
        break;
    case 4:
        TObjEneIllGill__sub_80365688(o);
        break;
    case 5:
        TObjEneIllGill__sub_803660A4(o);
        break;
    case 6:
        TObjEneIllGill__sub_803669B0((u8 *)o);
        break;
    case 7:
        TObjEneIllGill__sub_803667B8((u8 *)(o));
        break;
    case 8:
        TObjEneIllGill__sub_803665B4((u8 *)o);
        break;
    case 9:
        break;
    }
    if (o->x2a8 != NULL && (o->x2a8->flags & 0x02000800)) {
        o->x39c = 0;
        o->flags &= ~0x200000;
        o->x2a8 = NULL;
    }
    update_prev_position__10TObjPlayerFPv(o);
    copy_position__20TBoss3VoloptHiraisinFi(o);
    TObjPlayer__sub_801B4A18(o, -1);
    o->x2b4 += TObjEneIllGill__data_805E02CC;
}

void * create__14TObjEneIllGillFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x420);
    if (o2 != NULL) {
        o2 = TObjEneIllGill__ct(o2, o, arg0);
    }
    return o2;
}

extern M2C_UNK __vt__14TObjEneIllGill[];

void *__dt__14TObjEneIllGillFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEneIllGill;
        free_resources__14TObjEneIllGillFPv((void *)(arg0));
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x374, -1);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int lbl_805D6FD0;
void free_effect__14TObjEneIllGillFv(void) { TLobby__sub_8001FE7C((void*)(lbl_805D6FD0), (void*)1); lbl_805D6FD0 = 0; }

}
