#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase8017CB60_8017CB60_more_8017cca4_0 { char pad[0x18]; };
struct VObj8017CB60_8017CB60_more_8017cca4_0 : VBase8017CB60_8017CB60_more_8017cca4_0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

#include <stddef.h>
struct RecoveredFields_8017CCA4_arg0 {
    u8 unknown_0[0xC4];
    f32 field_C4;
    f32 field_C8;
    u8 unknown_CC[0x18];
    u8 * field_E4;
    u8 * field_E8;
};

extern "C" {
void TObjAreaWarp__sub_8019CAB0(void *);
extern const f32 lbl_805DBAC0;
extern const f32 lbl_805DBAC4;
extern const f32 lbl_805DBAC8;
void run_task__19TObjGoalWarpAncientFv(u8 *arg0);
}

extern "C" {

void *__dt__19TObjGoalWarpAncientFv(void *arg0, s16 arg1);
void render__19TObjGoalWarpAncientFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern const f32 lbl_805DBAB8;
extern const f32 lbl_805DBABC;

void render__19TObjGoalWarpAncientFv(u8 *arg0) {
    if (((VObj8017CB60_8017CB60_more_8017cca4_0 *) arg0)->m8(lbl_805DBAB8, lbl_805DBABC) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xD8));
        TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xCC), M2C_FIELD(arg0, s32 *, 0xE4), M2C_FIELD(arg0, f32 *, 0xC4));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xE0));
        TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xE8), M2C_FIELD(arg0, f32 *, 0xC8));
        end_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xDC));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0xD0));
        TObjPlayer__sub_803D9B78();
    }
}

extern M2C_UNK __vt__19TObjGoalWarpAncient[];

typedef char RecoveredFields_8017CCA4_arg0_C4_offset[offsetof(RecoveredFields_8017CCA4_arg0, field_C4) == 0xC4 ? 1 : -1];
typedef char RecoveredFields_8017CCA4_arg0_C8_offset[offsetof(RecoveredFields_8017CCA4_arg0, field_C8) == 0xC8 ? 1 : -1];
typedef char RecoveredFields_8017CCA4_arg0_E4_offset[offsetof(RecoveredFields_8017CCA4_arg0, field_E4) == 0xE4 ? 1 : -1];
typedef char RecoveredFields_8017CCA4_arg0_E8_offset[offsetof(RecoveredFields_8017CCA4_arg0, field_E8) == 0xE8 ? 1 : -1];
void run_task__19TObjGoalWarpAncientFv(u8 *arg0) {
    ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C4 = (f32) (((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C4 + lbl_805DBAC0);
    if ((f32) (M2C_FIELD(((RecoveredFields_8017CCA4_arg0 *)arg0)->field_E4, u32 *, 4) - 1) < ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C4) {
        ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C4 = (f32) lbl_805DBAC4;
    }
    ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C8 = (f32) (((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C8 + lbl_805DBAC8);
    if ((f32) (M2C_FIELD(((RecoveredFields_8017CCA4_arg0 *)arg0)->field_E8, u32 *, 4) - 1) < ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C8) {
        ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C8 = (f32) lbl_805DBAC4;
    }
    TObjAreaWarp__sub_8019CAB0(arg0);
}

void *__dt__19TObjGoalWarpAncientFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjGoalWarpAncient;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma pop

#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase_8017CED8_more_8017cca4_1 { char pad[0x18]; };
struct VObj_8017CED8_more_8017cca4_1 : VObjBase_8017CED8_more_8017cca4_1 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
void TObjPlayer__sub_8019D250(void *);
extern const f32 lbl_805DBAC0;
extern const f32 lbl_805DBAC4;
void run_task__18TObjMapWarpAncientFv(u8 *arg0);
}

extern "C" {

void *TObjMapWarpAncient__create(void *arg0);
void render__18TObjMapWarpAncientFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
void *TObjMapWarpAncient__ct(void *, void *, void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *tl_05;

void *TObjMapWarpAncient__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x11C);
    if (o != NULL) {
        o = TObjMapWarpAncient__ct(o, tl_05, arg0);
    }
    return o;
}

extern const f32 lbl_805DBAB8;
extern const f32 lbl_805DBABC;

void render__18TObjMapWarpAncientFv(u8 *arg0) {
    if (((VObj_8017CED8_more_8017cca4_1*)arg0)->m8(lbl_805DBAB8, lbl_805DBABC) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        begin_effect_render__13TParticleCtrlFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x88) >= 0) {
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x10C));
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x100), M2C_FIELD(arg0, s32 *, 0x118), M2C_FIELD(arg0, f32 *, 0xFC));
        }
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x110));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x104));
        end_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x114));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x108));
        TObjPlayer__sub_803D9B78();
    }
}
void run_task__18TObjMapWarpAncientFv(u8 *arg0) {
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x88)))) >= 0)
  {
    *((f32 *) (((s8 *) arg0) + 0xFC)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xFC))) + lbl_805DBAC0);
    if (((f32) (((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0x118)))) + 4))) - 1) & 0xFFFFFFFFu)) < (*((f32 *) (((s8 *) arg0) + 0xFC))))
    {
      *((f32 *) (((s8 *) arg0) + 0xFC)) = (f32) lbl_805DBAC4;
    }
    TObjPlayer__sub_8019D250(arg0);
  }
}

}

#pragma pop
