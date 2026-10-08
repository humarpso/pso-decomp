#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V3_802D595C { f32 x; f32 y; f32 z; };

struct S_802D595C {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x204 - 0x1C];
    void *f204;
    void *f208;
    V3_802D595C v[5];
    s16 f248;
    s16 f24A;
};

extern "C" {
M2C_UNK spawn_item__10TObjPlayerFi(void *);
void TObjPlayer__sub_802D59E0(M2C_UNK arg0, s32 arg1);
extern u8 lbl_804E21F8[];
extern const f32 lbl_805DE798;
void init_state_445__10TObjPlayerFPv(void *);
void alloc_and_init__10TObjPlayerFiii(s32, s32, s32);
void create_and_init_effect__10TObjPlayerFiPvi(s32, void *, s32);
S_802D595C *init_mag_effect_state__10TObjPlayerFPv(S_802D595C *arg0);
}

extern "C" {

void reset_animation_state__10TObjPlayerFPv(void *arg0);
f32 TObjPlayer__sub_8017A1A4(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_802D577C(void *);

extern f32 lbl_805DE790;

void reset_animation_state__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x248) = 0;
    M2C_FIELD(arg0, s16 *, 0x24A) = 0;
    M2C_FIELD(arg0, f32 *, 0x24C) = (f32) (lbl_805DE790 + TObjPlayer__sub_8017A1A4(M2C_FIELD(arg0, s32 *, 0xF0), 0));
    M2C_FIELD(arg0, s32 *, 0x250) = 0;
    TObjPlayer__sub_802D577C(arg0);
}

S_802D595C *init_mag_effect_state__10TObjPlayerFPv(S_802D595C *arg0) {
    s32 i;
    V3_802D595C *p;
    init_state_445__10TObjPlayerFPv(arg0);
    arg0->vt = lbl_804E21F8;
    arg0->f248 = 0;
    arg0->f24A = 0;
    p = arg0->v;
    for (i = 0; i < 5; i++) {
        p->x = lbl_805DE798;
        p->y = lbl_805DE798;
        p->z = lbl_805DE798;
        p++;
    }
    arg0->f204 = (void *)alloc_and_init__10TObjPlayerFiii;
    arg0->f208 = (void *)create_and_init_effect__10TObjPlayerFiPvi;
    return arg0;
}

void TObjPlayer__sub_802D59E0(M2C_UNK arg0, s32 arg1) {
    spawn_item__10TObjPlayerFi((void *) (arg1));
}

}
