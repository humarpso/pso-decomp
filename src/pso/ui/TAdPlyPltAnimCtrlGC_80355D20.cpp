#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V2_80355D5C { f32 x, y; };

struct Obj_80355D5C { u8 pad0[0x3C]; f32 a, b, c, d; u8 pad4C[0x10]; f32 e, f; };

extern "C" {
void set_anim_state__19TAdPlyPltAnimCtrlGCFPvi(void *arg0, s32 arg1);
extern const V2_80355D5C lbl_80479350[];
extern const f32 lbl_805DFFD0;
void TAdPlyPltAnimCtrlGC__sub_80355D5C(Obj_80355D5C *o, V2_80355D5C *p);
}

extern "C" {

void TAdPlyPltAnimCtrlGC__sub_80355D38(void *arg0);
void set_anim_state__19TAdPlyPltAnimCtrlGCFPvi(void *arg0, s32 arg1);

void set_anim_state__19TAdPlyPltAnimCtrlGCFPvi(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x78) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x74) = arg1;
}

void TAdPlyPltAnimCtrlGC__sub_80355D38(void *arg0) {
    set_anim_state__19TAdPlyPltAnimCtrlGCFPvi((void *)(arg0), (s32)(0));
}
#pragma push
#pragma fp_contract on
void TAdPlyPltAnimCtrlGC__sub_80355D5C(Obj_80355D5C *o, V2_80355D5C *p) {
    o->a = p->x;
    o->b = p->y;
    o->c = p->x + lbl_80479350[0].x;
    o->d = p->y + lbl_80479350[0].y;
    o->e = lbl_805DFFD0 * (o->c - o->a) + o->a;
    o->f = lbl_805DFFD0 * (o->d - o->b) + o->b;
    set_anim_state__19TAdPlyPltAnimCtrlGCFPvi(o, 1);
}
#pragma pop

}
