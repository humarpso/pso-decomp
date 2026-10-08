#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 obj_testFlags30(void *, s32);
s32 draw_model_with_callback__10TObjPlayerFPviif(void *, s32, s32, f32);
s32 push_matrix(void);
s32 pop_matrix(void);
s32 set_global_param__8TObjFishFi(s32);
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK draw_model_with_callback__10TObjPlayerFPv(void *);
M2C_UNK apply_material_color_override__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801BAC48(void *);
M2C_UNK draw_head_attachments__10TObjPlayerFPv(void *);
M2C_UNK write_ids__10TObjPlayerFPv(void *);
M2C_UNK save_render_material_state(void *);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
void TObjPlayer__sub_801D877C(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801D8864(void);
void free_shared_lobby_data__10TObjPlayerFv(void);
int query_darkfalz_state__10TObjPlayerFPv(void* p);
int set_animation_default__10TObjPlayerFPv(void* p);
int set_position_from__14TBoss4DarkFalzFPvPv(void*);
int free_nodes_with_id__6TLobbyFUi(void*);
int free_shared_data__10TObjPlayerFv(void);
int set_animation__10TObjPlayerFPvs(void*);

int query_darkfalz_state__10TObjPlayerFPv(void* p) { return set_position_from__14TBoss4DarkFalzFPvPv(p); }
int set_animation_default__10TObjPlayerFPv(void* p) { return set_animation__10TObjPlayerFPvs(p); }

void TObjPlayer__sub_801D877C(u8 *arg0) {
    if ((obj_testFlags30(arg0, 0x02000000) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xCFC) == 0)) {
        select_actor_lighting((void *) (arg0));
        push_matrix();
        set_position_vec3__10TObjPlayerFPvPv((int) (0), (void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        save_render_material_state((void *) (arg0 + 0x608));
        apply_material_color_override__10TObjPlayerFi((void *) (arg0));
        set_global_param__8TObjFishFi((s32) (arg0 + 0xCF4));
        set_global_flag__10TObjPlayerFv();
        draw_model_with_callback__10TObjPlayerFPv((void *) (arg0));
        clear_global_state__10TObjPlayerFv();
        write_ids__10TObjPlayerFPv((void *) (arg0 + 0x608));
        draw_head_attachments__10TObjPlayerFPv((void *) (arg0));
        pop_matrix();
        TObjPlayer__sub_801BAC48((void *) (arg0));
        restore_scene_lighting();
        return;
    }
    push_matrix();
    set_position_vec3__10TObjPlayerFPvPv((int) (0), (void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    ((s32 (*)(void *, s32, f32, s32))draw_model_with_callback__10TObjPlayerFPviif)(arg0, M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, s32 *, 0xE0));
    pop_matrix();
}

void TObjPlayer__sub_801D8864(void) {  }

    extern int lbl_805D5E08;
void free_shared_lobby_data__10TObjPlayerFv(void) { free_nodes_with_id__6TLobbyFUi((void*)(lbl_805D5E08)); lbl_805D5E08 = 0; free_shared_data__10TObjPlayerFv(); }

}
