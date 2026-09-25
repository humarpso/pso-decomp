#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct RecoveredGlobal_8017F45C_lbl_804B5830 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8017F45C_lbl_804B5830_size[sizeof(RecoveredGlobal_8017F45C_lbl_804B5830) == 0x10 ? 1 : -1];

struct R_8017F52C { s32 a; u8 pad[0x14]; };

struct O_8017F52C { u8 pad[0x100]; R_8017F52C recs[8]; };

typedef s32 M2C_UNK;
struct Entry_8017F4AC { u8 vec[0xC]; f32 time; void *obj; u32 done; };

struct Self_8017F4AC { u8 pad[0xB0]; f32 t; u8 padb4[0xEC - 0xB4]; Entry_8017F4AC e[8]; };

extern "C" {
void fn_8017F5F0(u8 *arg0, u8 *arg1);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8017F45C_lbl_804B5830 lbl_804B5830;
extern s32 lbl_805D5B10;
void fn_8017F45C(void);
void fn_8017F52C(O_8017F52C *self);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void fn_8017F4AC(Self_8017F4AC *self);
}

extern "C" {

void fn_8017F45C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B5830.value, 0, 0, 0));
    }
    lbl_805D5B10 = var_r0;
}

void fn_8017F4AC(Self_8017F4AC *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (self->e[i].done == 0 && self->t >= self->e[i].time) {
            TBoss3Volopt__sub_8022675C((M2C_UNK)self->e[i].obj, self->e[i].vec, 0, 0);
            self->e[i].done = 1;
        }
    }
}

void fn_8017F52C(O_8017F52C *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        self->recs[i].a = 0;
    }
}

void fn_8017F5F0(u8 *arg0, u8 *arg1) {
    *(M2CCopy_C *)(arg0) = *(const M2CCopy_C *)(arg1);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
}

}
