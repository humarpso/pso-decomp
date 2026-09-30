#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_800DA4B4 { s32 a; s32 b; s32 c; };

struct Obj_800DA4B4 { u8 pad[0x60]; s32 f60; u8 pad2[0x39c - 0x64]; Rec_800DA4B4 recs[1]; };

struct Vec_800DA4B4 { s32 x; s32 y; s32 z; };

struct S_800DA414 { s32 a; s32 b; s32 c; };

struct Obj_800DA414 { u8 pad0[0x1C]; u16 f1c; u8 pad1e[0x60 - 0x1E]; s32 h; u8 pad64[0x39C - 0x64]; u8 sub[2][0xC]; u8 pad3b4[4]; u16 ids[2]; };

extern "C" {
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjPlayer__sub_800DB8D4(u8 *arg0);
void *fn_80086D50(void *pos, void *dir, s32 id);
void TObjPlayer__sub_800DA4B4(Obj_800DA4B4 *self, s32 i);
void TObjPlayer__sub_800DCD04(void *, void *, int, void *, s32, int);
u32 TPhotonMylla__sub_80154CB4(int);
u32 __nw__7TObjectFUl(u32);
void TObjPlayer__sub_800DA414(Obj_800DA414 *arg0, s32 arg1);
}

extern "C" {

void set_flag_20000__10TObjPlayerFPv(void *arg0);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);

void set_flag_20000__10TObjPlayerFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000)) {
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xC);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x20000 | 1);
    }
}

void TObjPlayer__sub_800DA414(Obj_800DA414 *arg0, s32 arg1) {
    S_800DA414 s;
    s32 t;
    s32 off;
    void *o;
    if (TPhotonMylla__sub_80154CB4(arg0->ids[arg1]) != 0) {
        t = arg1 & 1;
        s.a = 0;
        off = 0x2000;
        if (t != 0) {
            off = -0x2000;
        }
        s.b = arg0->h + off;
        s.c = 0;
        o = (void *)__nw__7TObjectFUl(0x104);
        if (o != 0) {
            TObjPlayer__sub_800DCD04(o, arg0->sub[t], arg0->ids[arg1], &s, arg1 * 3, arg0->f1c);
        }
    }
}

void TObjPlayer__sub_800DA4B4(Obj_800DA4B4 *self, s32 i) {
    Vec_800DA4B4 v;
    v.x = self->f60 + 0x4000;
    v.y = 0;
    v.z = 0x4000;
    fn_80086D50(&self->recs[i], &v, 0xfd);
}

void TObjPlayer__sub_800DB8D4(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) M2C_FIELD(arg0, s32 *, 0x378);
    M2C_FIELD(arg0, s32 *, 0x378) = 5;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}

}
