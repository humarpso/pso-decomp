#include "types.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/player/TObjPlayer.h"

struct Stack_800B9D94 {
    s32 sp8;
    u8 pad_C[0x4];
    s32 sp10;
};

struct Obj_800B9E84 {
    u8 pad[0x2b8]; s16 a; s16 b;
    u8 pad2[0x32c - 0x2bc]; s16 c; s16 d;
};

extern "C" {
s32 minimap_render_dot(void *, int, int, int);
void vfunc_100__9TObjEneDDFv(u8 *arg0);
s32 draw_blob_shadow(int);
s32 direction_to_rotation_xz(void *, void *, void *);
s32 rotate_matrix_y(int, void *);
s32 rotate_matrix_z(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 rotate_matrix_x(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
extern const f32 TObjEneDD__data_805D9E8C;
extern const f32 lbl_805D9E90;
int bind_enemy_combat_stats(void*);
}

extern "C" {

int transform_to_view__11TCameraCtrlFii(void*);
int apply_split_screen_view_matrix__11TCameraCtrlFv(void*);
int is_local_client_floor_leader(void*);
int restore_scene_lighting(void*);
int select_actor_lighting(void*);
int bind_enemy_combat_stats(void*);
s32 get_main_phase();
int render_with_position_override__10TObjPlayerFPUcl(void*);
int set_param__12TObjEneLappyFl(void*);

    extern int model_render_flags;

void TObjEneDD::vfunc_100() {
    u8 *arg0 = (u8 *)this;
    if (!(*(s32 *)((s8 *)arg0 + 0x30) & 0x40800)) {
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    }
}

void TObjEneDD::clear_global_flag_400() { model_render_flags = (model_render_flags & 0xfffffbff); }

int TObjEneDD::update_player_state() { return render_with_position_override__10TObjPlayerFPUcl(this); }

void TObjEneDD::draw_oriented_shadow(s32 arg1, s32 arg2, u32 arg3) {
    s32 arg0 = (s32)this;
    Stack_800B9D94 stack;
    direction_to_rotation_xz((void *) (arg1), (void *) (&stack.sp8), (void *) (&stack.sp10));
    push_matrix();
    post_translate_matrix((void *) (arg0));
    translate_matrix((int) (0), (f32) (TObjEneDD__data_805D9E8C), (f32) (lbl_805D9E90), (f32) (TObjEneDD__data_805D9E8C));
    rotate_matrix_z((int) (0), (int) (stack.sp10));
    rotate_matrix_x((int) (0), (int) (stack.sp8));
    rotate_matrix_y((int) (0), (void *) (arg2));
    if (arg3 != 0U) {
        scale_current_matrix((void *) (arg3));
    }
    rotate_matrix_x((int) (0), (int) (-0x4000));
    draw_blob_shadow((int) (0));
    pop_matrix();
}

int TObjEneDD::update_primary_light() { return restore_scene_lighting(this); }
int TObjEneDD::update_secondary_light() { return select_actor_lighting(this); }

void TObjEneDD::reload_stats_keep_hp_tp() {
    Obj_800B9E84 *self = (Obj_800B9E84 *)this;
    s16 a = self->a;
    s16 c = self->c;
    s16 b = self->b;
    s16 d = self->d;
    bind_enemy_combat_stats((void*)(self));
    self->a = a;
    self->c = c;
    self->b = b;
    self->d = d;
}

void TObjEneDD::reset_hp() { bind_enemy_combat_stats(this); *(short*)((char*)this + 0x33e) = *(short*)((char*)this + 0x32c); }
int TObjEneDD::get_camera_ctrl() { return transform_to_view__11TCameraCtrlFii(this); }
int TObjEneDD::update_camera_sequence() { return apply_split_screen_view_matrix__11TCameraCtrlFv(this); }
int TObjEneDD::initialize_enemy_state() { return set_param__12TObjEneLappyFl(this); }

}
