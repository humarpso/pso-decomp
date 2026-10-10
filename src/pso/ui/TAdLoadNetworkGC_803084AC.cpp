#include "types.h"
struct V_803084AC { f32 x, y, z; };

struct Net_803084AC { u8 pad0[0x20]; void *obj[5]; V_803084AC pos; };

struct Net_80308518 { u8 pad0[0x18]; void *vt; u8 pad1[4]; void *obj[5]; };

struct Ray_803085A0 { V_803084AC a; V_803084AC b; };

extern "C" {
void copy_vec3__11TBoss4Type2FPvPv(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
extern V_803084AC lbl_804E72F0[];
void run_task__16TAdLoadNetworkGCFv(Net_803084AC *o);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
void __dl__7TObjectFPv(void *);
extern u8 __vt__16TAdLoadNetworkGC[];
Net_80308518 *__dt__16TAdLoadNetworkGCFv(Net_80308518 *self, s16 flag);
void VecCopy__FP3VecPC3Vec(void *, void *);
void *fn_80086FE0(void *, void *, s32, s32);
void *__ct__7TObjectFP7TObject(void *, void *);
extern const s32 lbl_80475478[];
extern V_803084AC lbl_804E72F0[];
extern u8 __vt__16TAdLoadNetworkGC[];
extern Ray_803085A0 lbl_804FF5E8;
extern s32 TAdLoadNetworkGC__class_name;
extern const f32 lbl_805DF0C0;
Net_803084AC *TAdLoadNetworkGC__ct(Net_803084AC *self, void *parent, V_803084AC *pos);
}

extern "C" {

void run_task__16TAdLoadNetworkGCFv(Net_803084AC *o) {
    u32 i;
    for (i = 0; i < 5; i++) {
        copy_pos__11TNowLoadingFPvPv(o->obj[i], &o->pos);
        copy_vec3__11TBoss4Type2FPvPv(o->obj[i], &lbl_804E72F0[i]);
    }
}
Net_80308518 *__dt__16TAdLoadNetworkGCFv(Net_80308518 *self, s16 flag) {
    u32 i;
    if (self != NULL) {
        self->vt = __vt__16TAdLoadNetworkGC;
        for (i = 0; i < 5; i++) {
            queue_destruction__7TObjectFv(self->obj[i]);
            self->obj[i] = 0;
        }
        __dt__7TObjectFv(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}
#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
Net_803084AC *TAdLoadNetworkGC__ct(Net_803084AC *self, void *parent, V_803084AC *pos) {
    u32 i;
    __ct__7TObjectFP7TObject(self, parent);
    *(void **)((u8 *)self + 0x18) = __vt__16TAdLoadNetworkGC;
    *(s32 *)self = TAdLoadNetworkGC__class_name;
    VecCopy__FP3VecPC3Vec(&self->pos, pos);
    self->pos.x = lbl_805DF0C0 * lbl_804FF5E8.b.x + lbl_804FF5E8.a.x;
    self->pos.y = lbl_805DF0C0 * lbl_804FF5E8.b.y + lbl_804FF5E8.a.y;
    self->pos.z = lbl_805DF0C0 * lbl_804FF5E8.b.z + lbl_804FF5E8.a.z;
    for (i = 0; i < 5; i++) {
        self->obj[i] = 0;
        self->obj[i] = fn_80086FE0(&self->pos, &lbl_804E72F0[i], lbl_80475478[i], 1);
    }
    return self;
}
#pragma pop

}
