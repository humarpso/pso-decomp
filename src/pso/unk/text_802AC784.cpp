#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_aa4667 { char pad[0x18]; };
struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual M2C_UNK m79(s32);
};

typedef struct Loc_802AC9EC {
    s32 a;
    s16 b;
    s16 c;
    s32 d;
    s32 e;
} Loc_802AC9EC;

struct RecoveredGlobal_802ACBE4_lbl_804DE200 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802ACBE4_lbl_804DE200_size[sizeof(RecoveredGlobal_802ACBE4_lbl_804DE200) == 0x10 ? 1 : -1];

struct RecoveredGlobal_802AC904_lbl_804705E8
{
  M2C_UNK value;
  u8 remaining[0x5];
};

struct RecoveredGlobal_802AC904___vt__14TBoss6PlotFalz
{
  M2C_UNK value;
  u8 remaining[0x14C];
};

struct RecoveredFields_802AC904_arg0
{
  u8 unknown_0[0x18];
  M2C_UNK *field_18;
  u8 unknown_1C[0x35C];
  s32 field_378;
  u8 unknown_37C[0x4];
  u32 field_380;
};

struct Msg_802AC7E4 { u8 pad[2]; u16 id; s8 phase; s8 mode; };

struct Boss_802AC7E4 { u8 pad[0x37C]; u8 mode; };

extern "C" {
s32 query_teammate_state__9TObjEneDDFPv();
M2C_UNK TBoss6PlotFalz__sub_802AB14C(void *);
M2C_UNK TBoss6PlotFalz__sub_802AB1C8(void *);
M2C_UNK set_visible_flag__14TBoss6PlotFalzFPv(void *);
void run_task__14TBoss6PlotFalzFv(u8 *arg0);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
M2C_UNK TBoss6Tube__sub_802B1760();
M2C_UNK fn_802E52AC();
M2C_UNK TBoss6Rock__sub_80354B18();
M2C_UNK TItemEffOrgaFlowShot__sub_80357210();
M2C_UNK TLobby__sub_8036DDE8();
extern RecoveredGlobal_802ACBE4_lbl_804DE200 lbl_804DE200;
extern int lbl_805D66E8;
void TBoss6PlotFalz__sub_802ACBE4(void);
s32 queue_destruction__7TObjectFv(int);
s32 TCameraCtrl__sub_80069DA8();
void __dt__9TObjEnemyFv(void *, int);
s32 send_entity_set_flags__6TLobbyFPv(void *);
s32 TLobby__sub_8022743C();
s32 TObjBgmColCtrl__sub_802274B8(void *);
volatile int __dl__7TObjectFPv(void *);
s32 is_ending_or_split_screen__14TBoss6PlotFalzFv(void *);
s32 destroy_static_instance__14TBoss6PlotFalzFv(void *);
s32 queue_instance_destruction__14TBoss6PlotFalzFv(void *);
s32 TBoss6PlotFalz__sub_802AC4D8();
s32 TBoss6PlotFalz__sub_802AC678();
extern RecoveredGlobal_802AC904_lbl_804705E8 lbl_804705E8;
extern RecoveredGlobal_802AC904___vt__14TBoss6PlotFalz __vt__14TBoss6PlotFalz;
extern f32 TBoss6PlotFalz__data_805D3E54;
extern s32 TBoss6PlotFalz__data_805D66EC;
extern const f32 TBoss6PlotFalz__data_805DE0BC;
u8 *__dt__14TBoss6PlotFalzFv(u8 *arg0, s16 arg1);
Boss_802AC7E4 *get_enemy_entity(u16);
void TBoss6PlotFalz__sub_802AB2B8(u8 *arg0, s32 arg1);
s32 get_phase__8TObjFishFPv(void* p);
void fn_802ACD40();
extern s32 TBoss6PlotFalz__data_805D66EC;
void handle_6xA3_olga_flow_boss_actions(Msg_802AC7E4 *m);
u8 *VecCopy__FP3VecPC3Vec(void *, void *);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 TLobby__sub_8002AFD4(void *, void *, int);
M2C_UNK TBoss4DarkFalz__sub_8004B4F0(void *, void *);
M2C_UNK TObjPlayer__sub_800F7478(void *, int, int, int);
M2C_UNK initialize__9TObjEnemyFPv();
M2C_UNK TObjPlayer__sub_80154B60(void *);
M2C_UNK TBoss6PlotFalz__sub_802AAC98(void *);
M2C_UNK ensure_field384__14TBoss6PlotFalzFPv(void *);
M2C_UNK update_active_flag__14TBoss6PlotFalzFv();
s32 fn_8035966C();
extern s32 lbl_805D3E50;
extern s32 TBoss6PlotFalz__data_805D66F0;
extern s32 TBoss6PlotFalz__data_805D66F4;
extern const f32 TBoss6PlotFalz__data_805DE098;
}

extern "C" {

void TBoss6PlotFalz__vt61(void);
s32 create__14TBoss6PlotFalzFi(s32 arg0);
void free_all__14TBoss6PlotFalzFv(void);
int get_fish_count__8TObjFishFv(void);
s32 get_phase__8TObjFishFPv(void* p);
void render__14TBoss6PlotFalzFv(void);
s32 TBoss6PlotFalz__ct(s32, s32, s32);
int TItemEffOrgaFlowShot__sub_80357204(void);
int TLobby__sub_8001FE7C(void*, void*);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
int free_data__10TBoss6RockFv(void);
int free_global_instance__14TBoss4DarkFalzFv(void);
int free_resources__10TBoss6TubeFv(void);

void render__14TBoss6PlotFalzFv(void) {  }

void run_task__14TBoss6PlotFalzFv(u8 *arg0) {
    if (query_teammate_state__9TObjEneDDFPv() == 0) {
        set_visible_flag__14TBoss6PlotFalzFPv((void *) (arg0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 0) {
            TBoss6PlotFalz__sub_802AB1C8((void *) (arg0));
        }
        TBoss6PlotFalz__sub_802AB14C((void *) (arg0));
    }
}

void TBoss6PlotFalz__vt61(void) {  }

    extern int lbl_805D66E8;

typedef struct RecoveredFields_802AC904_arg0 RecoveredFields_802AC904_arg0;
typedef struct RecoveredGlobal_802AC904___vt__14TBoss6PlotFalz RecoveredGlobal_802AC904___vt__14TBoss6PlotFalz;
typedef struct RecoveredGlobal_802AC904_lbl_804705E8 RecoveredGlobal_802AC904_lbl_804705E8;

void handle_6xA3_olga_flow_boss_actions(Msg_802AC7E4 *m) {
    Boss_802AC7E4 *b;
    s8 ph;
    s8 mode;
    fn_802ACD40();
    b = get_enemy_entity(m->id);
    if (b != NULL && b == (Boss_802AC7E4 *)TBoss6PlotFalz__data_805D66EC) {
        ph = m->phase;
        if (ph >= 0 && ph < 9 && ph != get_phase__8TObjFishFPv(b)) {
            TBoss6PlotFalz__sub_802AB2B8((u8 *)b, ph);
        }
        mode = m->mode;
        if (mode >= 0) {
            b->mode = mode;
        }
    }
}

u8 *__dt__14TBoss6PlotFalzFv(u8 *arg0, s16 arg1) {
  s32 *new_var;
  s32 temp_r0;
  if (arg0 != 0)
  {
    u32 temp_r3;
    ((RecoveredFields_802AC904_arg0 *) arg0)->field_18 = &__vt__14TBoss6PlotFalz.value;
    temp_r0 = ((RecoveredFields_802AC904_arg0 *) arg0)->field_378;
    new_var = &((RecoveredFields_802AC904_arg0 *) arg0)->field_378;
    if (temp_r0 < 9)
    {
      if (temp_r0 < 7)
      {
        if (1)
        {
          if (((!temp_r0) && (!temp_r0)) && (!temp_r0))
          {
          }
        }
      }
      else
      {
        send_entity_set_flags__6TLobbyFPv((void *) arg0);
      }
    }
    if (is_ending_or_split_screen__14TBoss6PlotFalzFv((void *) arg0) == 0)
    {
      TLobby__sub_8022743C();
      if (((s32) (*new_var)) == 7)
      {
        TObjBgmColCtrl__sub_802274B8((void *) (&lbl_804705E8.value));
      }
    }
    temp_r3 = ((RecoveredFields_802AC904_arg0 *) arg0)->field_380;
    if (temp_r3 != 0U)
    {
      queue_destruction__7TObjectFv((int) temp_r3);
      ((RecoveredFields_802AC904_arg0 *) arg0)->field_380 = 0U;
    }
    TBoss6PlotFalz__sub_802AC678();
    TBoss6PlotFalz__sub_802AC4D8();
    TCameraCtrl__sub_80069DA8();
    queue_instance_destruction__14TBoss6PlotFalzFv((void *) arg0);
    destroy_static_instance__14TBoss6PlotFalzFv((void *) arg0);
    TBoss6PlotFalz__data_805D66EC = 0;
    TBoss6PlotFalz__data_805D3E54 = TBoss6PlotFalz__data_805DE0BC;
    __dt__9TObjEnemyFv((void *) arg0, (int) 0);
    if (arg1 > 0)
    {
      __dl__7TObjectFPv((void *) arg0);
    }
  }
  return arg0;
}

#define arg0 ((u8 *)self)
#pragma push
#pragma opt_common_subs off
s32 TBoss6PlotFalz__ct(s32 self, s32 arg1, s32 arg2) {
    Loc_802AC9EC sp8;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r6;

    initialize__9TObjEnemyFPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TBoss6PlotFalz.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E50;
    TBoss6PlotFalz__sub_802AAC98((void *) (arg0));
    TBoss6PlotFalz__data_805D66EC = self;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    TBoss4DarkFalz__sub_8004B4F0((void *) (arg0 + 0x388), (void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x38A) = 0;
    if (TLobby__sub_8002AFD4((void *) (arg0), (void *) (&sp8), (int) (1)) != 0) {
        sp8.a = 0;
        sp8.c = 0;
        TLobby__sub_8002AFD4((void *) (arg0), (void *) (&sp8), (int) (0));
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, VecCopy__FP3VecPC3Vec(arg0 + 0x50, VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38)));
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) TBoss6PlotFalz__data_805DE098;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TBoss6PlotFalz__data_805DE098;
    M2C_FIELD(arg0, f32 *, 0x308) = (f32) TBoss6PlotFalz__data_805DE098;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    temp_r30 = register_boss__6TLobbyFPv((int) (0x2C));
    temp_r29 = dispatch_shared_handler_b__6TLobbyFPv((int) (0x2C));
    temp_r6 = register_object__6TLobbyFPv((int) (0x2C));
    TObjPlayer__sub_800F7478((void *) (arg0), (int) (temp_r30), (int) (temp_r29), (int) (temp_r6));
    TObjPlayer__sub_80154B60((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    set_visible_flag__14TBoss6PlotFalzFPv((void *) (arg0));
    update_active_flag__14TBoss6PlotFalzFv();
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x380) = fn_8035966C();
    M2C_FIELD(arg0, s32 *, 0x384) = 0;
    ensure_field384__14TBoss6PlotFalzFPv((void *) (arg0));
    TBoss6PlotFalz__data_805D66F0 = 0;
    TBoss6PlotFalz__data_805D66F4 = 0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    TBoss6PlotFalz__data_805D3E54 = TBoss6PlotFalz__data_805DE0BC;
    M2C_FIELD(arg0, s8 *, 0x37C) = 0;
    M2C_FIELD(arg0, s32 *, 0x378) = -1;
    TBoss6PlotFalz__sub_802AB2B8(arg0, 0);
    return self;
}
#pragma pop
#undef arg0

void free_all__14TBoss6PlotFalzFv(void) { free_global_instance__14TBoss4DarkFalzFv(); free_resources__10TBoss6TubeFv(); free_data__10TBoss6RockFv(); TItemEffOrgaFlowShot__sub_80357204(); TLobby__sub_8001FE7C((void*)(lbl_805D66E8), (void*)1); lbl_805D66E8 = 0; }

extern s32 tl_04;

void TBoss6PlotFalz__sub_802ACBE4(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804DE200.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D66E8) = (unsigned char *) ((void *) var_r0);
    if ((u32) var_r0 != 0U) {
        TLobby__sub_8036DDE8();
        TItemEffOrgaFlowShot__sub_80357210();
        TBoss6Rock__sub_80354B18();
        TBoss6Tube__sub_802B1760();
        fn_802E52AC();
    }
}

s32 create__14TBoss6PlotFalzFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3E0);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6PlotFalz__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

s32 get_phase__8TObjFishFPv(void* p) { return *(s32*)((char*)p + 0x378); }

    extern int lbl_805D66E8;
int get_fish_count__8TObjFishFv(void) {  return lbl_805D66E8; }

}
