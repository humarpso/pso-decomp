#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_803DA218 { s32 a; u32 c; s32 b; };

struct Sub_803DA688 { u32 v; };

struct Rec_803DA688 { u32 a; u32 b; u32 c; Sub_803DA688 *d; u32 e; u32 f; };

struct E_803DA55C { u8 pad[0xC]; u32 *p; u8 pad2[8]; };

typedef s32 M2C_UNK;
struct Slot_803DA5A8 { u32 id; u8 pad[0x24]; };

struct Err_803DA5A8 { s32 a; s32 b; s32 code; };

struct Slot_803DA388 { s32 id; s32 a; s32 b; s32 c; s32 d; s32 e; s32 f; s32 g; s32 h; s32 i; };

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
extern s32 lbl_805D7764;
extern Rec_803DA688 *lbl_805D7768;
void TObjPlayer__sub_803DA244(Rec_803DA688 *arg0, s32 arg1);
extern Err_803DA5A8 lbl_8058D470[];
extern s32 lbl_805D775C;
extern Slot_803DA5A8 *lbl_805D7760;
extern s32 lbl_805D7764;
extern Rec_803DA688 *lbl_805D7768;
s32 TObjPlayer__sub_803DA5A8(Rec_803DA688 **arg0, Slot_803DA5A8 **arg1);
extern s32 lbl_805D775C;
extern Slot_803DA5A8 *lbl_805D7760;
void TObjPlayer__sub_803DA388(Slot_803DA388 *p, s32 n);
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

#pragma push
#pragma optimize_for_size off
void TObjPlayer__sub_803DA244(Rec_803DA688 *arg0, s32 arg1) {
    s32 i;
    lbl_805D7768 = arg0;
    lbl_805D7764 = arg1;
    for (i = 0; i < arg1; i++) {
        arg0->a = 0;
        arg0->b = 0;
        arg0->c = 0xFFFFFFFF;
        arg0->d = NULL;
        arg0->e = 0;
        arg0->f = 0;
        arg0++;
    }
}
#pragma pop

#pragma push
#pragma optimize_for_size off
void TObjPlayer__sub_803DA388(Slot_803DA388 *p, s32 n) {
    s32 i;
    lbl_805D7760 = (Slot_803DA5A8 *)p;
    lbl_805D775C = n;
    for (i = 0; i < n; i++) {
        p->id = -1;
        p->a = 0;
        p->b = 0;
        p->c = 0;
        p->d = 0;
        p->e = 0;
        p->f = 0;
        p->g = 0;
        p->h = 0;
        p->i = 0;
        p++;
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

s32 TObjPlayer__sub_803DA5A8(Rec_803DA688 **arg0, Slot_803DA5A8 **arg1) {
    s32 i;
    Rec_803DA688 *p;
    Slot_803DA5A8 *q;
    s32 idx;
    *arg0 = NULL;
    p = lbl_805D7768;
    for (i = 0; i < lbl_805D7764; p++, i++) {
        if (p->d == NULL) {
            *arg0 = p;
            idx = i;
            break;
        }
    }
    if (*arg0 == NULL) {
        lbl_8058D470[0].code = 7;
        return -1;
    }
    if (arg1 != NULL) {
        *arg1 = NULL;
        q = lbl_805D7760;
        for (i = 0; i < lbl_805D775C; i++, q++) {
            if (q->id == 0xFFFFFFFF) {
                *arg1 = q;
                break;
            }
        }
        if (*arg1 == NULL) {
            lbl_8058D470[0].code = 7;
            return -1;
        }
        return idx;
    }
    return idx;
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
