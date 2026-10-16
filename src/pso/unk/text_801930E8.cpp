#include "types.h"
#include "pso/object/TObjLazerFence4.h"
#include "pso/TMainTask.h"
#include "pso/TParticleCtrl.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct LazerFence4Base_801930E8 { char pad[0x18]; };
struct LazerFence4VObj_801930E8 : LazerFence4Base_801930E8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Cnt_801933C8 { s32 pad0; s32 f4; };

struct Obj_801933C8 { u8 padA0[0xAC]; s32 fAC; f32 fB0; u8 padB4[6]; u16 fBA; u8 padBC[8]; Cnt_801933C8 *fC4; };

struct Node_80193188 { u32 flags; void *model; u8 pad8[0x24]; Node_80193188 *child; Node_80193188 *sibling; };

struct Fence_80193188 { u8 pad0[0x8C]; s32 f8C; u8 pad90[0x2C]; Node_80193188 *fBC; Node_80193188 *fC0; s32 fC4; void *fC8[12]; };

extern "C" {
s32 free_children__12TObjDoorJungFPvPv(s32, u16);
void rotate_matrix_y(int, void *);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void draw_ginja_object(void *);
s32 draw_ginja_model_with_motion(s32, s32, f32);
extern void *lazer_fence_norm_texture_list;
u8 is_current_floor_switch_set(int);
extern const f32 lbl_805DBE68;
extern const f32 lbl_805DBE6C;
void TObjLazerFence4__sub_801933C8(Obj_801933C8 *arg0);
s32 get_bml_motion(s32, s32);
Node_80193188 *get_bml_model(s32, s32);
extern s32 lazer_fence_norm_bml_resource;
}

extern "C" {

s16 TObjLazerFence4__vt8(u8 *arg0, f32 farg0, f32 farg1);
void post_translate_matrix(void *);
void draw_ginja_object(void *);
void rotate_matrix_y(int, void *);
void push_matrix(void);
void pop_matrix(void);
f32 xz_distance_squared(void *, s32);
s16 update_object_view_visibility(void *, f32, f32);
s32 set_indexed_flags(void *, s32, s32);

extern s32 camera_ctrl_instance;

s16 TObjLazerFence4__vt8(u8 *arg0, f32 farg0, f32 farg1) {
    if (TMainTask::get_state_flag() == 1) {
        return *(s16 *)((s8 *)arg0 + 0x1E);
    }
    if (xz_distance_squared(arg0 + 0x38, camera_ctrl_instance + 0x178) < (farg1 * farg1)) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 1;
        return *(s16 *)((s8 *)arg0 + 0x1E);
    }
    return update_object_view_visibility(arg0, farg0, farg1);
}

extern void *lazer_fence_norm_texture_list;

void TObjLazerFence4::init_models() {
    Fence_80193188 *arg0 = (Fence_80193188 *)this;
    Node_80193188 *node;
    s32 i;
    s32 j;
    if (arg0->f8C % 2 == 0) {
        arg0->fBC = get_bml_model(lazer_fence_norm_bml_resource, 4);
        arg0->fC0 = get_bml_model(lazer_fence_norm_bml_resource, 5);
        arg0->fC4 = get_bml_motion(lazer_fence_norm_bml_resource, 2);
    } else {
        arg0->fBC = get_bml_model(lazer_fence_norm_bml_resource, 6);
        arg0->fC0 = get_bml_model(lazer_fence_norm_bml_resource, 7);
        arg0->fC4 = get_bml_motion(lazer_fence_norm_bml_resource, 3);
    }
    for (j = 0; j < 12; j++) {
        arg0->fC8[j] = 0;
    }
    i = 0;
    node = arg0->fBC->child;
    if (node != 0) {
        while (node != 0 && i < 12) {
            arg0->fC8[i++] = node->model;
            node = node->sibling;
        }
    }
}

void TObjLazerFence4::draw() {
    TObjFish::set_global_param((s32)lazer_fence_norm_texture_list);
    push_matrix();
    post_translate_matrix((void *)((char *)this + 56));
    rotate_matrix_y(0, *(void **)((s8 *)this + 0x60));
    draw_ginja_object(*(void **)((s8 *)this + 0xC0));
    pop_matrix();
}

void TObjLazerFence4::draw_model() {
    u8 *arg0 = (u8 *)this;
  s32 *new_var;
  u16 *new_var2;
  s32 var_r31;
  s32 var_r30;
  var_r30 = 0;
  new_var2 = (u16 *) (((s8 *) arg0) + 0xB8);
  var_r31 = 0;
  do
  {
    free_children__12TObjDoorJungFPvPv(*((s32 *) ((arg0 + var_r31) + 0xC8)), *new_var2);
    var_r30 += 1;
    var_r31 += 4;
  }
  while (var_r30 < 0xC);
  TObjFish::set_global_param((s32)((void *)((*(s32 *)&lazer_fence_norm_texture_list))));
  push_matrix();
  post_translate_matrix(arg0 + 0x38);
  rotate_matrix_y((int)(0), (void *)(*((s32 *) (((s8 *) arg0) + 0x60))));
  draw_ginja_object((void *)(*((s32 *) (((s8 *) arg0) + 0xC0))));
  TParticleCtrl::begin_effect_render();
  new_var = (s32 *) (((s8 *) arg0) + 0xC4);
  draw_ginja_model_with_motion(*((s32 *) (((s8 *) arg0) + 0xBC)), *new_var, *((f32 *) (((s8 *) arg0) + 0xB0)));
  TParticleCtrl::end_effect_render();
  pop_matrix();
}

void TObjLazerFence4::reset_if_door_closed() {
    if (is_current_floor_switch_set((u16)(*(u16 *)((s8 *)this + 0xBA))) == 0) {
        set_indexed_flags(this, 0, 1);
        *(s32 *)((s8 *)this + 0xAC) = 0;
    }
}

extern const f32 lbl_805DBE70;
extern const f32 lbl_805DBE74;

void TObjLazerFence4__sub_801933C8(Obj_801933C8 *arg0) {
    arg0->fB0 = arg0->fB0 + lbl_805DBE68;
    if (arg0->fB0 > (f32)(u32)(arg0->fC4->f4 - 1)) {
        arg0->fB0 = lbl_805DBE6C;
    }
    if (is_current_floor_switch_set(arg0->fBA) == 1) {
        ((TObjPlayer *)arg0)->clear_player_status_flag(0, 1);
        arg0->fAC = 1;
    }
}

void TObjLazerFence4::render() {
    s32 temp_r0;

    if (((LazerFence4VObj_801930E8*)this)->m8(lbl_805DBE70, lbl_805DBE74) != 0) {
        temp_r0 = *(s32 *)((s8 *)this + 0xAC);
        switch (temp_r0) {
        case 0:
            draw_model();
            return;
        case 1:
            draw();
            break;
        }
    }
}

}
