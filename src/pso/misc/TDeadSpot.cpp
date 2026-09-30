#include "pso/TDeadSpot.h"

TDeadSpot::~TDeadSpot() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800D7E10_800D7D74 { char pad[0x18]; };
struct VObj_800D7E10_800D7D74 : Base_800D7E10_800D7D74 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

struct Stack_800D7E94
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

struct RecoveredGlobal_800D7F60_lbl_804949F4 {
    M2C_UNK value;
    u8 remaining[0x18];
};

#include <stddef.h>
struct Stack_800D7CF4 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct E_800D7FD4 { u8 pad[0x14]; u32 col; };

struct Obj_800D7FD4 { u8 pad0[0x1C]; E_800D7FD4 e[4]; u8 pad7c[0xC0 - 0x7C]; f32 c0; f32 c4; f32 c8; };

struct V3_800D80E4 { f32 x; f32 y; f32 z; };

struct E_800D80E4 { V3_800D80E4 v; u8 pad[8]; u32 col; };

struct Obj_800D80E4 { u8 pad0[0x18]; void *vt; E_800D80E4 e[4]; V3_800D80E4 base; V3_800D80E4 dir[4]; u8 padb8[8]; f32 sc; u8 padc4[4]; f32 c8; };

extern "C" {
s32 calc_random_scaled__10TObjPlayerFv();
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805DA380;
void TDeadSpot__sub_800D7E94(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804949F4[];
u8 *TDeadSpot__sub_800D7F60(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, f32 farg0);
s32 calc_random_scaled__10TObjPlayerFv();
s32 adjust_to_ground__15TObjBoss2TunnelFiPv(void *, void *);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805DA380;
void TDeadSpot__sub_800D7CF4(u8 *arg0);
u32 __cvt_fp2unsigned(f32);
extern const f32 TDeadSpot__data_805DA388;
extern const f32 TDeadSpot__data_805DA38C;
extern const f32 lbl_805DA390;
extern const f32 lbl_805DA394;
extern const f32 lbl_805DA398;
void TDeadSpot__sub_800D7FD4(Obj_800D7FD4 *arg0);
void __ct__9TDeadSpotFv(void *);
extern M2C_UNK lbl_80494A10[];
extern const f32 TDeadSpot__data_805DA38C;
Obj_800D80E4 *TDeadSpot__sub_800D80E4(Obj_800D80E4 *arg0);
}

extern "C" {

void *TDeadSpot__sub_800D7D74(void *arg0, s16 arg1);
void *TDeadSpot__sub_800D7F08(void *arg0, s16 arg1);
void *TDeadSpot__sub_800D808C(void *arg0, s16 arg1);
void *init__9TDeadSpotFPv(void *arg0, u8 * _w1, u8 * _w2, s32 _w3, f32 _w4);
void render__9TDeadSpotFv(u8 *arg0);
void update_lifetime__9TDeadSpotFPv(void *arg0);
f32 TObjPlayer__sub_80141CF8(void *, s32);
M2C_UNK TParticleCtrl__sub_803DA7A8(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void __dt__9TDeadSpotFv(void *, int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(u32);
M2C_UNK fn_801418C4(M2C_UNK);
M2C_UNK fn_80141A30();
M2C_UNK fn_803E29B0(void *, M2C_UNK, M2C_UNK);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern M2C_UNK lbl_804949D8[];

#pragma push
#pragma opt_common_subs off
void TDeadSpot__sub_800D7CF4(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_800D7CF4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800D7CF4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800D7CF4, sp10) == 0x8) ? 1 : -1];
    Stack_800D7CF4 stack;
    f32 temp_f1;
    s32 temp_r3;
    temp_r3 = calc_random_scaled__10TObjPlayerFv();
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x28) * TBoss8Dragon__sub_803D64C0((int) (temp_r3));
    stack.spC = lbl_805DA380;
    stack.sp8 = temp_f1;
    stack.sp10 = M2C_FIELD(arg0, f32 *, 0x28) * TBoss8Dragon__sub_803D64DC((int) (temp_r3));
    TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (void *) (arg0 + 0x1C));
    adjust_to_ground__15TObjBoss2TunnelFiPv((void *) (&stack.sp8), (void *) (&stack.sp8));
    copy_pos__11TNowLoadingFPvPv((int) (M2C_FIELD(arg0, s32 *, 0x34)), (void *) (&stack.sp8));
}
#pragma pop

void *TDeadSpot__sub_800D7D74(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804949D8;
        TDeadSpot__sub_800D7F08((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804949D8[];

void *init__9TDeadSpotFPv(void *arg0, u8 * _w1, u8 * _w2, s32 _w3, f32 _w4) {
    TDeadSpot__sub_800D7F60((u8 *)(arg0), (u8 *)(_w1), (u8 *)(_w2), (s32)(_w3), _w4);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804949D8;
    M2C_FIELD(arg0, u32 *, 0x30) = 8;
    return arg0;
}

void update_lifetime__9TDeadSpotFPv(void *arg0) {
    u32 tmp34 = M2C_FIELD(arg0, u32 *, 0x34);
    if ((tmp34 == 0U) || (all_parents_unqueued_for_destruction__7TObjectFv(tmp34) == 0)) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) >= (s32) M2C_FIELD(arg0, s32 *, 0x30)) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        ((VObj_800D7E10_800D7D74 *)arg0)->m4();
    }
}

extern M2C_UNK lbl_804949F4[];

typedef struct Stack_800D7E94 Stack_800D7E94;
void TDeadSpot__sub_800D7E94(u8 *arg0) {
  Stack_800D7E94 stack;
  f32 temp_f1;
  s32 temp_r3;
  temp_r3 = calc_random_scaled__10TObjPlayerFv();
  temp_f1 = (*((f32 *) (((s8 *) arg0) + 0x28))) * TBoss8Dragon__sub_803D64C0((int) (temp_r3 & 0xFFFFFFFFu));
  stack.spC = lbl_805DA380;
  stack.sp8 = temp_f1;
  stack.sp10 = (*((f32 *) (((s8 *) arg0) + 0x28))) * TBoss8Dragon__sub_803D64DC((int) temp_r3);
  TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (void *) (arg0 + 0x1C));
  copy_pos__11TNowLoadingFPvPv((int) (*((s32 *) (((s8 *) arg0) + 0x34))), (void *) (&stack.sp8));
}

void *TDeadSpot__sub_800D7F08(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804949F4;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80494A10[];

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_800D7F60_lbl_804949F4_size[sizeof(RecoveredGlobal_800D7F60_lbl_804949F4) == 0x1C ? 1 : -1];
u8 *TDeadSpot__sub_800D7F60(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, f32 farg0) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800D7F60_lbl_804949F4 *)&lbl_804949F4).value;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 2;
    M2C_FIELD(arg0, s32 *, 0x34) = arg3;
    return arg0;
}
#pragma pop

void TDeadSpot__sub_800D7FD4(Obj_800D7FD4 *arg0) {
    E_800D7FD4 *p;
    s32 i;
    u32 c;
    if (arg0->c4 <= arg0->c0) {
        arg0->c4 = arg0->c4 + TDeadSpot__data_805DA388;
        if (arg0->c4 <= TDeadSpot__data_805DA38C) {
            return;
        }
    }
    if (arg0->c8 < lbl_805DA390) {
        arg0->c8 = arg0->c8 + lbl_805DA394;
        if (arg0->c8 > lbl_805DA390) {
            arg0->c8 = lbl_805DA390;
        }
        p = arg0->e;
        c = __cvt_fp2unsigned(lbl_805DA398 * arg0->c8) << 24 | 0xFF0000 | 0xFFFF;
        for (i = 0; i < 4; i++) {
            p->col = c;
            p++;
        }
    }
}

void *TDeadSpot__sub_800D808C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80494A10;
        __dt__9TDeadSpotFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D4DF0;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 TDeadSpot__data_805DA38C;
extern const f32 lbl_805DA39C;

#pragma push
#pragma fp_contract on
Obj_800D80E4 *TDeadSpot__sub_800D80E4(Obj_800D80E4 *arg0) {
    E_800D80E4 *p;
    s32 i;
    f32 bx, by, bz, s;
    __ct__9TDeadSpotFv(arg0);
    arg0->vt = ((u8 *)&lbl_80494A10);
    p = arg0->e;
    arg0->c8 = TDeadSpot__data_805DA38C;
    s = arg0->sc;
    bx = arg0->base.x;
    by = arg0->base.y;
    bz = arg0->base.z;
    for (i = 0; i < 4; i++) {
        p->v.x = arg0->dir[i].x * s + bx;
        p->v.y = arg0->dir[i].y * s + by;
        p->v.z = arg0->dir[i].z * s + bz;
        p->col = 0xFFFFFF;
        p++;
    }
    return arg0;
}
#pragma pop

void render__9TDeadSpotFv(u8 *arg0) {
    if ((get_state_flag__9TMainTaskFv() != 1) && (M2C_FIELD(arg0, f32 *, 0xC4) > TDeadSpot__data_805DA38C) && (TObjPlayer__sub_80141CF8(arg0 + 0x7C, lbl_805D4DF0 + 0x178) < lbl_805DA39C)) {
        lbl_805D5660 = some_id_805c6f74;
        reset_transform_state__10TObjPlayerFv();
        fn_801418C4(0x8F);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xB8));
        TParticleCtrl__sub_803DA7A8(M2C_FIELD(arg0, s32 *, 0xBC));
        fn_803E29B0(arg0 + 0x1C, 4, 1);
        fn_80141A30();
        some_id_805c6f74 = lbl_805D5660;
    }
}

}
