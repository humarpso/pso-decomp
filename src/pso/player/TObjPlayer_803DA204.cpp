#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_803DA218 { s32 a; u32 c; s32 b; };

struct Sub_803DA688 { u32 v; };

struct Rec_803DA688 { u32 a; u32 b; u32 c; Sub_803DA688 *d; u32 e; u32 f; };

struct E_803DA55C { u8 pad[0xC]; u32 *p; u8 pad2[8]; };

extern "C" {
extern s32 lbl_805D7758;
void TObjPlayer__sub_803DA6E0(u8 *arg0);
void TObjPlayer__sub_803DA218(S_803DA218 *self, s32 a, s32 b, u32 c);
extern s32 lbl_805D7764;
extern Rec_803DA688 *lbl_805D7768;
s32 TObjPlayer__sub_803DA688(u32 arg0, u32 arg1);
extern s32 lbl_805D7764;
extern Rec_803DA688 *lbl_805D7768;
s32 TObjPlayer__sub_803DA55C(u32 arg0);
}

extern "C" {

void set_render_rect__10TObjPlayerFPviiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

void set_render_rect__10TObjPlayerFPviiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
    M2C_FIELD(arg0, s32 *, 0x14) = arg4;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

#pragma push
#pragma scheduling off
#pragma peephole off
#pragma optimize_for_size off
void TObjPlayer__sub_803DA218(S_803DA218 *self, s32 a, s32 b, u32 c) {
    if (c & 0x40000000) {
        self->a = a;
        self->c = c;
        self->b = b;
    } else {
        self->a = a;
        self->c = c;
        self->b = b;
    }
}
#pragma pop

s32 TObjPlayer__sub_803DA55C(u32 arg0) {
    E_803DA55C *e;
    u32 *q;
    s32 i;
    i = 0;
    e = (*(E_803DA55C * *)&lbl_805D7768);
    for (; i < lbl_805D7764; e++, i++) {
        q = e->p;
        if (q != 0 && arg0 == *q) {
            return i;
        }
    }
    return -1;
}

s32 TObjPlayer__sub_803DA688(u32 arg0, u32 arg1) {
    Sub_803DA688 *d;
    s32 i;
    Rec_803DA688 *p = lbl_805D7768;
    for (i = 0; i < lbl_805D7764; p++, i++) {
        if (p->c == arg1) {
            d = p->d;
            if (d != 0 && d->v == arg0) return i;
        }
    }
    return -1;
}

void TObjPlayer__sub_803DA6E0(u8 *arg0) {
    u8 *temp_r4;
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xC));
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x24) <= 0) {
        M2C_FIELD(temp_r4, s32 *, 0) = -1;
        M2C_FIELD(temp_r4, s32 *, 4) = 0;
        M2C_FIELD(temp_r4, s32 *, 8) = 0;
        M2C_FIELD(temp_r4, s32 *, 0xC) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x10) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x14) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x20) = 0;
        lbl_805D7758 -= 1;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) <= 0) {
        M2C_FIELD(arg0, s32 *, 8) = -1;
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, u8 **, 0xC) = NULL;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
}

}
