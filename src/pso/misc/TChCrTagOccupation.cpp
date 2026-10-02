#include "pso/TChCrTagOccupation.h"
#include "pso/TMath.h"
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802A300C___vt__18TChCrTagOccupation {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct VBase_802A2DF4 { char pad[0x18]; };
struct Tag_802A2DF4 : VBase_802A2DF4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
    s32 f1c;
    s32 f20;
    f32 f24;
    u8 pad28[0x30 - 0x28];
    f32 f30;
    u8 pad34[0x3C - 0x34];
    f32 f3c;
    f32 f40;
};

struct Obj_802A2F78 { u8 pad[0x20]; s32 f20; };

extern "C" {
void draw_ui_sprite_shaded(s32 sprite_id, const vec2f *position, const vec2f *scale,
                           f32 depth, f32 alpha, f32 brightness);
s32 get_selected_index__15TChCrCharSelectFv();
extern vec2f lbl_80466474[];
extern vec2f lbl_8046647C[];
extern const f32 lbl_805DDED8;
extern const f32 lbl_805DDEDC;
extern const f32 lbl_805DDEE0;
extern const f32 lbl_805DDEE4;
extern const f32 lbl_805DDEE8;
extern const f32 lbl_805DDEEC;
extern const f32 lbl_805DDEF0;
extern const f32 lbl_805DDEF4;
extern const f32 lbl_805DDEF8;
extern const f32 lbl_805DDEFC;
void fn_802A2DF4(Tag_802A2DF4 *self);
u8 * __ct__8TChCrTagFv(void *, s32);
extern RecoveredGlobal_802A300C___vt__18TChCrTagOccupation __vt__18TChCrTagOccupation;
extern s32 lbl_805D3DB0;
extern const f32 lbl_805DDF00;
extern const f32 lbl_805DDF04;
extern const f32 lbl_805DDF08;
extern const f32 lbl_805DDF0C;
extern const f32 lbl_805DDF10;
extern const f32 lbl_805DDF14;
u8 *__ct__18TChCrTagOccupationFv(u8 *arg0, s32 arg1, s32 _w2);
s32 get_selected_char__15TChCrCharSelectFv(void *self);
int TChCrTagOccupation__vt4(Obj_802A2F78 *self);
}

extern "C" {

void *create__18TChCrTagOccupationFPv(void *arg0);
void create_all__18TChCrTagOccupationFv(void);
int render__18TChCrTagOccupationFv(void* p);
void *__nw__7TObjectFUl(int);

#pragma push
#pragma fp_contract on
void fn_802A2DF4(Tag_802A2DF4 *self) {
    f32 t;
    f32 s;
    f32 depth;
    s32 id = self->f20 + 0x39;
    vec2f pos = lbl_80466474[0];
    vec2f scale = lbl_8046647C[0];
    if (self->f24 > self->f3c) {
        t = (self->f24 - self->f3c) / (self->f40 - self->f3c);
    } else {
        return;
    }
    switch (get_selected_index__15TChCrCharSelectFv()) {
    case 0:
        s = lbl_805DDEDC * self->f30 + lbl_805DDED8;
        break;
    default:
        s = self->f30;
        break;
    }
    if (self->m4() != 0) {
        depth = lbl_805DDEE0;
    } else {
        depth = lbl_805DDEE8 * s + lbl_805DDEE4;
    }
    pos.x = lbl_805DDEEC * (lbl_805DDEF0 - t) + pos.x;
    pos.y = lbl_805DDEF4 * (f32)self->f20 + pos.y;
    draw_ui_sprite_shaded(id, &pos, &scale, depth, lbl_805DDEF0, lbl_805DDEFC * (s * s) + lbl_805DDEF8);
}
#pragma pop

int render__18TChCrTagOccupationFv(void* p) { return ((int (*)(void *))fn_802A2DF4)(p); }

int TChCrTagOccupation__vt4(Obj_802A2F78 *self) {
    if (get_selected_char__15TChCrCharSelectFv(self) == self->f20) return 1;
    return 0;
}

}

TChCrTagOccupation::~TChCrTagOccupation() {}

extern "C" {

extern void *tl_03;

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_802A300C___vt__18TChCrTagOccupation_size[sizeof(RecoveredGlobal_802A300C___vt__18TChCrTagOccupation) == 0x20 ? 1 : -1];

u8 *__ct__18TChCrTagOccupationFv(u8 *arg0, s32 arg1, s32 _w2) {
    __ct__8TChCrTagFv(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__18TChCrTagOccupation.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3DB0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DDF00;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DDF04;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DDF08;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DDF0C;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((lbl_805DDF14 * (f32) M2C_FIELD(arg0, s32 *, 0x20)) + lbl_805DDF10);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805DDEF0;
    return arg0;
}
#pragma pop

void *create__18TChCrTagOccupationFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = __ct__18TChCrTagOccupationFv((u8 *)(o), (s32)(tl_03), (s32)(arg0));
    }
    return o;
}

void create_all__18TChCrTagOccupationFv(void) { { int i; for (i = 0; i < 3; i++) { create__18TChCrTagOccupationFPv((void *)((void*)i)); } } }

}
