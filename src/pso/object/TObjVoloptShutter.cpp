#include "pso/TObjVoloptShutter.h"

#include "types.h"

struct RecoveredGlobal_8004A86C___vt__17TObjVoloptShutter {
    s32 value;
    u8 remaining[0x14];
};

struct Obj_8004A7CC { u8 pad[0x20]; s32 state; };

extern "C" {
extern const f32 lbl_805D88F0;
extern const f32 lbl_805D88F8;
extern const f32 lbl_805D88FC;
extern const f32 lbl_805D8900;
void update_shutter_state__17TObjVoloptShutterFPv(u8 *arg0);
extern const f32 lbl_805D88F0;
extern const f32 TObjVoloptShutter__data_805D88F4;
extern const f32 lbl_805D88F8;
void update_shutter_slide__17TObjVoloptShutterFPv(u8 *arg0);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8004A86C___vt__17TObjVoloptShutter __vt__17TObjVoloptShutter;
extern s32 lbl_805D2768;
extern u8 *tl_04;
extern const f32 TObjVoloptShutter__data_805D88F4;
extern const f32 lbl_805D8904;
u8 *__ct__17TObjVoloptShutterFv(u8 *arg0, s32 arg1);
void update_shutter_slide__17TObjVoloptShutterFPv(u8 *arg0);
void update_shutter_state__17TObjVoloptShutterFPv(u8 *arg0);
void run_task__17TObjVoloptShutterFv(Obj_8004A7CC *self);
}

extern "C" {

void render__17TObjVoloptShutterFv(void *arg0);
s32 rotate_matrix_y(s32, s32);
s32 translate_matrix(s32, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 draw_chunk_model(s32);
s32 end_effect_render__13TParticleCtrlFv();
s32 set_global_param__8TObjFishFi(s32);
s32 toggle_particle_effect__10TObjPlayerFv();

extern s32 volopt_shutter_model_a;
extern s32 volopt_shutter_model_b;
extern s32 volopt_shutter_global_param;
extern s32 model_render_flags;
extern const f32 TObjVoloptShutter__data_805D88F4;

#pragma push
#pragma opt_common_subs off
void update_shutter_slide__17TObjVoloptShutterFPv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x24);
    if (temp_r0 != 1) {
        if (temp_r0 < 1) {
            if (temp_r0 >= 0) {
                *(f32 *)((s8 *)arg0 + 0x2C) = (f32) (*(f32 *)((s8 *)arg0 + 0x2C) - lbl_805D88F0);
                if (*(f32 *)((s8 *)arg0 + 0x2C) >= (*(const f32 *)&TObjVoloptShutter__data_805D88F4)) {
                    *(f32 *)((s8 *)arg0 + 0x2C) = (f32) (*(const f32 *)&TObjVoloptShutter__data_805D88F4);
                    *(s32 *)((s8 *)arg0 + 0x24) = 1;
                }
            }
        }
    } else {
        *(f32 *)((s8 *)arg0 + 0x28) = (f32) (*(f32 *)((s8 *)arg0 + 0x28) - lbl_805D88F8);
        if (*(f32 *)((s8 *)arg0 + 0x28) >= (*(const f32 *)&TObjVoloptShutter__data_805D88F4)) {
            *(f32 *)((s8 *)arg0 + 0x28) = (f32) (*(const f32 *)&TObjVoloptShutter__data_805D88F4);
            *(s32 *)((s8 *)arg0 + 0x20) = 0;
        }
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void update_shutter_state__17TObjVoloptShutterFPv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x24);
    if (temp_r0 != 1) {
        if (temp_r0 < 1) {
            if (temp_r0 >= 0) {
                *(f32 *)((s8 *)arg0 + 0x28) = (f32) (*(f32 *)((s8 *)arg0 + 0x28) + lbl_805D88F8);
                if (*(f32 *)((s8 *)arg0 + 0x28) <= lbl_805D88FC) {
                    *(f32 *)((s8 *)arg0 + 0x28) = (f32) lbl_805D88FC;
                    *(s32 *)((s8 *)arg0 + 0x24) = 1;
                }
            }
        }
    } else {
        *(f32 *)((s8 *)arg0 + 0x2C) = (f32) (*(f32 *)((s8 *)arg0 + 0x2C) + lbl_805D88F0);
        if (*(f32 *)((s8 *)arg0 + 0x2C) <= lbl_805D8900) {
            *(f32 *)((s8 *)arg0 + 0x2C) = (f32) lbl_805D8900;
            *(s32 *)((s8 *)arg0 + 0x20) = 0;
        }
    }
}
#pragma pop

void render__17TObjVoloptShutterFv(void *arg0) {
    toggle_particle_effect__10TObjPlayerFv();
    set_global_param__8TObjFishFi(volopt_shutter_global_param);
    push_matrix();
    model_render_flags &= 0xFFFFFBFF;
    rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x30));
    push_matrix();
    translate_matrix(0, TObjVoloptShutter__data_805D88F4, TObjVoloptShutter__data_805D88F4, *(f32 *)((s8 *)arg0 + 0x2C));
    draw_chunk_model(volopt_shutter_model_b);
    translate_matrix(0, TObjVoloptShutter__data_805D88F4, *(f32 *)((s8 *)arg0 + 0x28), TObjVoloptShutter__data_805D88F4);
    draw_chunk_model(volopt_shutter_model_a);
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
        update_shutter_slide__17TObjVoloptShutterFPv((u8 *)self);
        break;
    case 2:
        update_shutter_state__17TObjVoloptShutterFPv((u8 *)self);
        break;
    }
}

TObjVoloptShutter::~TObjVoloptShutter() {}
u8 *__ct__17TObjVoloptShutterFv(u8 *arg0, s32 arg1) {
    __ct__7TObjectFP7TObject(arg0, tl_04);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__17TObjVoloptShutter.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2768;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg1;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (lbl_805D8904 * (f32) (-0x5A - (arg1 * 0x3C)));
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) TObjVoloptShutter__data_805D88F4;
    *(f32 *)((s8 *)arg0 + 0x2C) = (f32) TObjVoloptShutter__data_805D88F4;
    return arg0;
}

}
