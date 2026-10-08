#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
M2C_UNK minimap_render_dot(void *, int, int, int);
void TObjEneDD__vt97(u8 *arg0);
M2C_UNK draw_blob_shadow(int);
M2C_UNK direction_to_rotation_xz(void *, void *, void *);
M2C_UNK rotate_matrix_y(int, void *);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK scale_current_matrix(void *);
M2C_UNK post_translate_matrix(void *);
extern const f32 TObjEneDD__data_805D9E8C;
extern const f32 lbl_805D9E90;
void draw_oriented_shadow__9TObjEneDDFiiiUi(s32 arg0, s32 arg1, s32 arg2, u32 arg3);
int bind_enemy_combat_stats(void*);
void reload_stats_keep_hp_tp__9TObjEneDDFPv(Obj_800B9E84 *self);
}

extern "C" {

void clear_global_flag_400__9TObjEneDDFv(void);
int get_camera_ctrl__9TObjEneDDFPv(void* p);
int initialize_enemy_state__9TObjEneDDFPv(void* p);
void reset_hp__9TObjEneDDFPv(void* p);
int update_camera_sequence__9TObjEneDDFPv(void* p);
int update_player_state__9TObjEneDDFPv(void* p);
int update_primary_light__9TObjEneDDFPv(void* p);
int update_secondary_light__9TObjEneDDFPv(void* p);
int transform_to_view__11TCameraCtrlFii(void*);
int apply_split_screen_view_matrix__11TCameraCtrlFv(void*);
int TLobby__sub_800C6C10(void*);
int restore_scene_lighting(void*);
int select_actor_lighting(void*);
int bind_enemy_combat_stats(void*);
s32 get_main_phase();
int is_any_teammate_in_state__10TObjPlayerFv(void*);
int query_teammate_state__9TObjEneDDFPv(void* p);
int render_with_position_override__10TObjPlayerFPvPvi(void*);
int set_param__12TObjEneLappyFPvi(void*);
int update_lobby_state__9TObjEneDDFPv(void* p);

    extern int some_id_805c6f74;

void TObjEneDD__vt97(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x40800)) {
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    }
}

void clear_global_flag_400__9TObjEneDDFv(void) { some_id_805c6f74 = (some_id_805c6f74 & 0xfffffbff); }

int update_player_state__9TObjEneDDFPv(void* p) { return render_with_position_override__10TObjPlayerFPvPvi(p); }

void draw_oriented_shadow__9TObjEneDDFiiiUi(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
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

int update_primary_light__9TObjEneDDFPv(void* p) { return restore_scene_lighting(p); }
int update_secondary_light__9TObjEneDDFPv(void* p) { return select_actor_lighting(p); }

void reload_stats_keep_hp_tp__9TObjEneDDFPv(Obj_800B9E84 *self) {
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

void reset_hp__9TObjEneDDFPv(void* p) { bind_enemy_combat_stats(p); *(short*)((char*)p + 0x33e) = *(short*)((char*)p + 0x32c); }
int get_camera_ctrl__9TObjEneDDFPv(void* p) { return transform_to_view__11TCameraCtrlFii(p); }
int update_camera_sequence__9TObjEneDDFPv(void* p) { return apply_split_screen_view_matrix__11TCameraCtrlFv(p); }
int initialize_enemy_state__9TObjEneDDFPv(void* p) { return set_param__12TObjEneLappyFPvi(p); }

}
