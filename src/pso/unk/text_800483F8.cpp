#include "types.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80048560_lbl_80484860 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80048560_lbl_804FF1D0 {
    s32 value;
    u8 remaining[0x14];
};

struct Vec_800483F8 { f32 x, y, z; };

struct Obj_800483F8 {
    u8 pad0[0x18];
    void *vt;
    Vec_800483F8 *from;
    Vec_800483F8 *to;
    s32 f24;
    s32 f28;
    s32 f2c;
    u8 pad30[0x38 - 0x30];
    s32 f38;
    u8 pad3c[0x40 - 0x3c];
    f32 f40;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, int);
s32 draw_line_list(void *, int, int);
extern RecoveredGlobal_80048560_lbl_80484860 lbl_80484860;
extern RecoveredGlobal_80048560_lbl_804FF1D0 lbl_804FF1D0;
void fn_80048560(u8 *arg0);
void direction_to_rotation_xy(Vec_800483F8 *, s32 *, s32 *);
void __ct__7TObjectFP7TObject(void *, void *);
s32 rand(void);
f32 vector_length(Vec_800483F8 *);
void subtract_vector(Vec_800483F8 *, Vec_800483F8 *);
extern s32 direction_line_object_dispatch_table[];
extern void *tl_05;
extern const f32 lbl_805D8828;
extern const f32 lbl_805D882C;
extern const f32 lbl_805D8830;
extern const f32 lbl_805D8834;
Obj_800483F8 *fn_800483F8(Obj_800483F8 *self, Vec_800483F8 *from, Vec_800483F8 *to, s32 n, s32 m);
}

extern "C" {

typedef char RecoveredGlobal_80048560_lbl_80484860_size[sizeof(RecoveredGlobal_80048560_lbl_80484860) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_80048560_lbl_804FF1D0_size[sizeof(RecoveredGlobal_80048560_lbl_804FF1D0) == 0x18 ? 1 : -1];

#pragma fp_contract on
Obj_800483F8 *fn_800483F8(Obj_800483F8 *self, Vec_800483F8 *from, Vec_800483F8 *to, s32 n, s32 m) {
    __ct__7TObjectFP7TObject(self, tl_05);
    self->vt = direction_line_object_dispatch_table;
    self->from = from;
    self->to = to;
    self->f24 = m;
    {
        Vec_800483F8 d = *to;
        subtract_vector(&d, from);
        self->f40 = lbl_805D8828 * vector_length(&d);
        direction_to_rotation_xy(&d, &self->f28, &self->f2c);
    }
    self->f2c -= n * 0x71c + (s32)(lbl_805D882C * (lbl_805D8830 * (f32)rand()));
    self->f38 = n * (s32)(lbl_805D882C * ((lbl_805D8828 * (lbl_805D8830 * (f32)rand()) + lbl_805D8834) / (f32)m));
    return self;
}

void fn_80048560(u8 *arg0) {
    VecCopy__FP3VecPC3Vec((void *) (&lbl_804FF1D0.value), (int) (*(s32 *)((s8 *)arg0 + 0x1C)));
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)&lbl_804FF1D0.value + 0xC), (int) (*(s32 *)((s8 *)arg0 + 0x20)));
    TObjPlayer::init_xyz_limits();
    draw_line_list((void *) (&lbl_80484860.value), (int) (1), (int) (5));
    TObjPlayer::reset_transform_state();
}

}
