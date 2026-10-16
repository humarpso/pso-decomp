#include "types.h"
#include "pso/item/TItemAttackCol.h"
struct Vec_8032E400 { f32 x, y, z; };

struct Rec_8032E400 { u8 pad[0x1C]; Vec_8032E400 pos; u8 pad2[4]; };

struct Owner_8032E400 { u8 pad[0xA4]; Rec_8032E400 *recs; };

struct Ref_8032E400 { Owner_8032E400 *owner; s32 idx; };

struct Obj_8032E400 { u8 pad[0x18]; void *vt; u8 pad1[0xC]; u8 col[0xC]; s16 f34; u8 pad2[2]; Vec_8032E400 pos; u8 pad3[0xC]; s32 f50; u8 pad4[4]; s32 f58; u8 pad5[4]; s32 f60; Vec_8032E400 rpos; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s16 obj_getField1c(void *);
f32 atan2_float(f32, f32);
void __ct__7TObjectFP7TObject(void *, void *);
void sub_8032E294__13TUnk_804EDD44Fv(void *);
extern const f64 lbl_804773A8[];
extern u8 lbl_804EDD44[];
Obj_8032E400 *construct_card_effect_on_target(Obj_8032E400 *arg0, void *arg1, Ref_8032E400 *arg2, Vec_8032E400 *arg3, s32 arg4, s32 arg5);
}

extern "C" {

Obj_8032E400 *construct_card_effect_on_target(Obj_8032E400 *arg0, void *arg1, Ref_8032E400 *arg2, Vec_8032E400 *arg3, s32 arg4, s32 arg5) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    arg0->vt = lbl_804EDD44;
    arg0->f34 = obj_getField1c(arg2->owner);
    arg0->f60 = arg5;
    ((TItemAttackCol *)(arg0->col))->copy_pos(arg2);
    VecCopy__FP3VecPC3Vec(&arg0->pos, arg3);
    VecCopy__FP3VecPC3Vec(&arg0->rpos, &arg2->owner->recs[arg2->idx].pos);
    arg0->f58 = lbl_804773A8[0] * atan2_float(arg3->x, arg3->z);
    arg0->f50 = arg4;
    sub_8032E294__13TUnk_804EDD44Fv(arg0);
    return arg0;
}

}
