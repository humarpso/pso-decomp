#include "pso/TBoss6SwordWave.h"

TBoss6SwordWave::~TBoss6SwordWave() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80356C80 {
    s32 sp8;
    s32 spC;
};

struct RecoveredGlobal_80356B18___vt__15TBoss6SwordWave { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80356B18___vt__15TBoss6SwordWave_size[sizeof(RecoveredGlobal_80356B18___vt__15TBoss6SwordWave) == 0x18 ? 1 : -1];

struct W_80356D10 { s32 w[1]; };

struct Vec_803564F4 { f32 x, y, z; };

struct Wave_803564F4 { u8 pad0[0x1C]; s32 owner; Vec_803564F4 pos; u8 x2C[4]; u8 x30[0x24]; f32 radius; };

extern "C" {
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *TBoss6SwordWave__sub_80356C10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
u8 TBoss6SwordWave__sub_80356C80(s32 arg0, u8 arg1);
void TBoss6SwordWave__sub_80356DDC(s32 arg0, u8 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 *dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 __ct__7TObjectFP7TObject(void *, void *);
void TBoss6SwordWave__sub_80356D64(void *, void *, void *);
void fn_80356E30(void *);
extern RecoveredGlobal_80356B18___vt__15TBoss6SwordWave __vt__15TBoss6SwordWave;
extern s32 lbl_805D43A8;
extern const f32 lbl_805DFFE8;
extern const f32 lbl_805DFFF0;
u8 *__ct__15TBoss6SwordWaveFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 query_teammate_state__9TObjEneDDFPv();
M2C_UNK TBoss6SwordWave__sub_8035663C(void *);
M2C_UNK TBoss6SwordWave__sub_803567D0(void *);
extern const f32 lbl_805E0010;
extern const f32 lbl_805E0014;
void run_task__15TBoss6SwordWaveFv(u8 *arg0);
void TBoss6SwordWave__sub_80356CDC(s32 arg0, u8 v, void *a, void *b);
void TBoss6SwordWave__sub_80356CDC(s32 arg0, u8 v, void *a, void *b);
void TBoss6SwordWave__sub_80356D10(W_80356D10 *arg0, u8 arg1);
void TOSwitchAttack__sub_80087278(void *, int, int);
void TObjEneDellBiter__sub_80087350(void *, int);
s32 get_rotation_timer__11TBoss6Type2FPv(int);
u8 TBoss6SwordWave__sub_80356C80(s32 arg0, u8 arg1);
u8 TBoss6SwordWave__sub_80356D08(u32 arg1, u32 arg2);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
f32 TObjPlayer__sub_803E1A58(void *, void *);
extern u8 lbl_80479388[];
extern const f32 lbl_805DFFF0;
extern const f32 lbl_805DFFF8;
extern const f32 lbl_805DFFFC;
extern const f32 lbl_805E0000;
extern const f32 lbl_805E0004;
extern const f32 lbl_805E0008;
s32 TBoss6SwordWave__sub_803564F4(void *arg0);
}

extern "C" {

u8 TBoss6SwordWave__sub_80356D08(u32 arg1, u32 arg2);
void render__15TBoss6SwordWaveFv(void);

#pragma push
#pragma fp_contract on
s32 TBoss6SwordWave__sub_803564F4(void *arg0) {
    Wave_803564F4 *o = (Wave_803564F4 *)arg0;
    f32 d;
    f32 f;
    s32 step;
    s32 ang;
    d = lbl_805DFFF8 * o->radius;
    if (d <= lbl_805E0004) {
        f = lbl_805DFFF0;
    } else {
        f = lbl_805E0000 / d;
    }
    step = (s32)(lbl_805DFFFC * f);
    for (ang = 0; ang < 0x10000; ang += step) {
        s32 seg = ((s32 (*)(void *, s32))TBoss6SwordWave__sub_80356D08)(o->x30, ang);
        if (((s32 (*)(void *, s32))TBoss6SwordWave__sub_80356C80)(o->x30, seg) != 0) {
            Vec_803564F4 v = o->pos;
            v.x += o->radius * TBoss8Dragon__sub_803D64C0(ang);
            v.z += o->radius * TBoss8Dragon__sub_803D64DC(ang);
            if (!(TObjPlayer__sub_803E1A58(&v, lbl_80479388) > lbl_805E0008)) {
                TOSwitchAttack__sub_80087278(&v, 0x212, 0x40);
                if (get_rotation_timer__11TBoss6Type2FPv(o->owner) == 0) {
                    TObjEneDellBiter__sub_80087350(&v, 0x213);
                } else {
                    TOSwitchAttack__sub_80087278(&v, 0x229, 0x2000);
                }
            }
        }
    }
}
#pragma pop

void render__15TBoss6SwordWaveFv(void) {  }

#pragma push
#pragma opt_common_subs off
void run_task__15TBoss6SwordWaveFv(u8 *arg0) {
    f32 temp_f1;
    if (query_teammate_state__9TObjEneDDFPv() == 0) {
        TBoss6SwordWave__sub_803567D0((void *) (arg0));
        TBoss6SwordWave__sub_8035663C((void *) (arg0));
        if (M2C_FIELD(arg0, f32 *, 0x58) < lbl_805E0010) {
            TBoss6SwordWave__sub_803564F4((void *)((void *) (arg0)));
        }
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) (M2C_FIELD(arg0, f32 *, 0x58) + lbl_805E0010);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x58);
        if (temp_f1 > lbl_805E0014) {
            M2C_FIELD(arg0, f32 *, 0x58) = (f32) (temp_f1 - lbl_805E0014);
        }
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg0, f32 *, 0x54);
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (M2C_FIELD(arg0, f32 *, 0x54) + lbl_805E0010);
        if (M2C_FIELD(arg0, f32 *, 0x54) > M2C_FIELD(arg0, f32 *, 0x2C)) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
}
#pragma pop

u8 *__ct__15TBoss6SwordWaveFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__15TBoss6SwordWave.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D43A8;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (void *) (arg2));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DFFE8;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    TBoss6SwordWave__sub_80356D64((void *) (arg0 + 0x30), (void *) (arg3), (void *) (arg4));
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805DFFE8;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DFFE8;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805DFFE8;
    temp_f2 = *dispatch_shared_handler_a__6TLobbyFPv(0x2C);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) temp_f2;
    if (lbl_805DFFE8 == temp_f2) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x14;
    }
    temp_f1 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x2F), f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x60) = temp_f1;
    if (lbl_805DFFE8 == temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_805DFFF0;
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
u8 *TBoss6SwordWave__sub_80356C10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x64));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__15TBoss6SwordWaveFv((u8 *)(temp_r3), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3), farg0));
    }
    return var_r0;
}
#pragma pop

u8 TBoss6SwordWave__sub_80356C80(s32 arg0, u8 arg1) {
    typedef char sp8_offset[(offsetof(Stack_80356C80, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80356C80, spC) == 0x4) ? 1 : -1];
    Stack_80356C80 stack;
    TBoss6SwordWave__sub_80356CDC((s32)(arg0), arg1, (void *)(&stack.spC), (void *)(&stack.sp8));
    return (u8) (((1 << stack.sp8) & M2C_FIELD(arg0, M2C_UNK *, (stack.spC * 4))) != 0);
}

void TBoss6SwordWave__sub_80356CDC(s32 arg0, u8 v, void *a, void *b) {
    s32 x = v;
    *(s32 *)a = x / 32;
    *(s32 *)b = x % 32;
}

u8 TBoss6SwordWave__sub_80356D08(u32 arg1, u32 arg2) {
    return (u8) (arg2 >> 8U);
}

void TBoss6SwordWave__sub_80356D10(W_80356D10 *arg0, u8 arg1) {
    s32 idx;
    s32 bit;
    TBoss6SwordWave__sub_80356CDC((s32)arg0, arg1, &idx, &bit);
    arg0->w[idx] &= ~(1 << bit);
}

void TBoss6SwordWave__sub_80356D64(void *arg0, void *arg1, void *arg2) {
    s32 a = ((s32 (*)(void *, void *))TBoss6SwordWave__sub_80356D08)(arg0, arg1);
    s32 b = ((s32 (*)(void *, void *))TBoss6SwordWave__sub_80356D08)(arg0, arg2);
    if (a > b) {
        b += 0x100;
    }
    fn_80356E30(arg0);
    while (a <= b) {
        ((void (*)(void *, s32))TBoss6SwordWave__sub_80356DDC)(arg0, a);
        a++;
    }
}

void TBoss6SwordWave__sub_80356DDC(s32 arg0, u8 arg1) {
  s32 spC;
  s32 sp8;
  s32 temp_r5;
  s8 *new_var;
  TBoss6SwordWave__sub_80356CDC((s32)(arg0), arg1, (void *)(&spC), (void *)(&sp8));
  temp_r5 = spC * 4;
  new_var = ((s8 *) arg0) + temp_r5;
  *((M2C_UNK *) (((s8 *) arg0) + temp_r5)) = (*((M2C_UNK *) new_var)) | (1 << sp8);
}

}
