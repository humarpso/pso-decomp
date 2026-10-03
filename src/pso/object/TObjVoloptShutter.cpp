#include "pso/TObjVoloptShutter.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8004A86C___vt__17TObjVoloptShutter {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Obj_8004A7CC { u8 pad[0x20]; s32 state; };

extern "C" {
extern const f32 lbl_805D88F0;
extern const f32 lbl_805D88F8;
extern const f32 lbl_805D88FC;
extern const f32 lbl_805D8900;
void TObjVoloptShutter__sub_8004A6B4(u8 *arg0);
extern const f32 lbl_805D88F0;
extern const f32 TObjVoloptShutter__data_805D88F4;
extern const f32 lbl_805D88F8;
void TObjVoloptShutter__sub_8004A634(u8 *arg0);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8004A86C___vt__17TObjVoloptShutter __vt__17TObjVoloptShutter;
extern s32 lbl_805D2768;
extern u8 *tl_04;
extern const f32 TObjVoloptShutter__data_805D88F4;
extern const f32 lbl_805D8904;
u8 *__ct__17TObjVoloptShutterFv(u8 *arg0, s32 arg1);
void TObjVoloptShutter__sub_8004A634(u8 *arg0);
void TObjVoloptShutter__sub_8004A6B4(u8 *arg0);
void run_task__17TObjVoloptShutterFv(Obj_8004A7CC *self);
}

extern "C" {

void render__17TObjVoloptShutterFv(void *arg0);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK TObjPlayer__sub_803E4684(s32);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();

extern s32 lbl_805D4D48;
extern s32 lbl_805D4D4C;
extern s32 lbl_805D4D50;
extern s32 some_id_805c6f74;
extern const f32 TObjVoloptShutter__data_805D88F4;

#pragma push
#pragma opt_common_subs off
void TObjVoloptShutter__sub_8004A634(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r0 != 1) {
        if (temp_r0 < 1) {
            if (temp_r0 >= 0) {
                M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) - lbl_805D88F0);
                if (M2C_FIELD(arg0, f32 *, 0x2C) >= (*(const f32 *)&TObjVoloptShutter__data_805D88F4)) {
                    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (*(const f32 *)&TObjVoloptShutter__data_805D88F4);
                    M2C_FIELD(arg0, s32 *, 0x24) = 1;
                }
            }
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) - lbl_805D88F8);
        if (M2C_FIELD(arg0, f32 *, 0x28) >= (*(const f32 *)&TObjVoloptShutter__data_805D88F4)) {
            M2C_FIELD(arg0, f32 *, 0x28) = (f32) (*(const f32 *)&TObjVoloptShutter__data_805D88F4);
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TObjVoloptShutter__sub_8004A6B4(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r0 != 1) {
        if (temp_r0 < 1) {
            if (temp_r0 >= 0) {
                M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + lbl_805D88F8);
                if (M2C_FIELD(arg0, f32 *, 0x28) <= lbl_805D88FC) {
                    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805D88FC;
                    M2C_FIELD(arg0, s32 *, 0x24) = 1;
                }
            }
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + lbl_805D88F0);
        if (M2C_FIELD(arg0, f32 *, 0x2C) <= lbl_805D8900) {
            M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805D8900;
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
    }
}
#pragma pop

void render__17TObjVoloptShutterFv(void *arg0) {
    toggle_particle_effect__10TObjPlayerFv();
    set_global_param__8TObjFishFi(lbl_805D4D50);
    push_matrix();
    some_id_805c6f74 &= 0xFFFFFBFF;
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x30));
    push_matrix();
    translate_matrix(0, TObjVoloptShutter__data_805D88F4, TObjVoloptShutter__data_805D88F4, M2C_FIELD(arg0, f32 *, 0x2C));
    TObjPlayer__sub_803E4684(lbl_805D4D4C);
    translate_matrix(0, TObjVoloptShutter__data_805D88F4, M2C_FIELD(arg0, f32 *, 0x28), TObjVoloptShutter__data_805D88F4);
    TObjPlayer__sub_803E4684(lbl_805D4D48);
    pop_matrix();
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
}
typedef char RecoveredGlobal_8004A86C___vt__17TObjVoloptShutter_size[sizeof(RecoveredGlobal_8004A86C___vt__17TObjVoloptShutter) == 0x18 ? 1 : -1];

void run_task__17TObjVoloptShutterFv(Obj_8004A7CC *self) {
    switch (self->state) {
    case 0:
        break;
    case 1:
        TObjVoloptShutter__sub_8004A634((u8 *)self);
        break;
    case 2:
        TObjVoloptShutter__sub_8004A6B4((u8 *)self);
        break;
    }
}

TObjVoloptShutter::~TObjVoloptShutter() {}
u8 *__ct__17TObjVoloptShutterFv(u8 *arg0, s32 arg1) {
    __ct__7TObjectFP7TObject(arg0, tl_04);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TObjVoloptShutter.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2768;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (lbl_805D8904 * (f32) (-0x5A - (arg1 * 0x3C)));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) TObjVoloptShutter__data_805D88F4;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) TObjVoloptShutter__data_805D88F4;
    return arg0;
}

}
