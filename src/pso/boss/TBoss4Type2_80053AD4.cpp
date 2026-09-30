#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_80053CEC { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[4]; s32 f3a8; u8 pad3ac[4]; s32 f3b0; s32 f3b4; };

struct S_80053B48 { u8 pad0[0x3a0]; s32 f3a0; };

extern "C" {
void TBoss4DarkFalz__sub_8004B16C(void *, s32);
void TBoss4Type2__sub_80053C8C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void TBoss4DarkFalz__sub_8004B16C(void *, s32);
void TBoss4Type2__sub_80053CEC(Obj_80053CEC *self, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
extern const f32 lbl_805D8B64;
extern const f32 lbl_805D8B68;
extern const f32 lbl_805D8B6C;
void TBoss4Type2__sub_80053B48(S_80053B48 *o, s32 *a, s32 *b);
}

extern "C" {

void TBoss4Type2__sub_80053B48(S_80053B48 *o, s32 *a, s32 *b) {
    f32 s;
    s32 v;
    v = o->f3a0 + (s32)(lbl_805D8B64 * calc_boss4_scale__10TObjPlayerFi(o));
    v += 1;
    if (v >= 4) {
        v -= 4;
    }
    *a = v;
    s = calc_boss4_scale__10TObjPlayerFi(o);
    if (s <= lbl_805D8B68) {
        *b = 0;
    } else if (s <= lbl_805D8B6C) {
        *b = 1;
    } else {
        *b = 2;
    }
}

void TBoss4Type2__sub_80053C8C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x38C));
    if (temp_r3 != NULL) {
        TBoss4DarkFalz__sub_8004B16C(temp_r3, ((((((((((((M2C_FIELD(arg0, s32 *, 0x3A0) * 0x10) & 0x30 & ~0xF) | (arg1 & 0xF)) & ~0xC0) | ((arg2 << 6) & 0xC0)) & ~0x300) | ((M2C_FIELD(arg0, s32 *, 0x3A8) << 8) & 0x300)) & ~0xC00) | ((arg3 << 0xA) & 0xC00)) & ~0xF000) | ((M2C_FIELD(arg0, s32 *, 0x3B0) << 0xC) & 0xF000)) & ~0xF0000) | ((M2C_FIELD(arg0, s32 *, 0x3B4) << 0x10) & 0xF0000));
    }
}
void TBoss4Type2__sub_80053CEC(Obj_80053CEC *self, s32 arg1) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0xF) | ((self->f3a0 & 3) << 4) | ((self->f3a0 & 3) << 6) | ((self->f3a8 & 3) << 8) | ((self->f3a8 & 3) << 10) | ((self->f3b0 & 0xF) << 12) | ((self->f3b4 & 0xF) << 16));
    }
}

}
