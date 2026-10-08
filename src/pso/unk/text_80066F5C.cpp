#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK apply_single_screen_state__6TSceneFv();
M2C_UNK render_projected_shadow_receiver(void *, void *);
M2C_UNK rotate_matrix_by_node_angles(void *, int);
int push_matrix(void);
int pop_matrix(void);
M2C_UNK scale_current_matrix(void *);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_model(int);
void draw_shadowed_node_tree__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void render_impl__19TObjBoss5FloorStoneFPvPv(void* p, void* a1);
int draw_if_all_ready__10TObjPlayerFv(void*);
int push_matrix(void);
int pop_matrix(void);
int set_global_param__8TObjFishFi(void*);

void draw_shadowed_node_tree__10TObjPlayerFPv(u8 *arg0) {
    if (arg0 != NULL) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 8));
        rotate_matrix_by_node_angles((void *) (arg0 + 0x14), (int) (1));
        scale_current_matrix((void *) (arg0 + 0x20));
        if (!(M2C_FIELD(arg0, s32 *, 0) & 8) && ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U)) {
            render_projected_shadow_receiver((void *) (arg0 + 8), (void *) (arg0 + 0x14));
            draw_ginja_model((int) (M2C_FIELD(arg0, u32 *, 4)));
            apply_single_screen_state__6TSceneFv();
        }
        draw_shadowed_node_tree__10TObjPlayerFPv(M2C_FIELD(arg0, u8 **, 0x2C));
        pop_matrix();
        draw_shadowed_node_tree__10TObjPlayerFPv(M2C_FIELD(arg0, u8 **, 0x30));
    }
}

void render_impl__19TObjBoss5FloorStoneFPvPv(void* p, void* a1) { draw_if_all_ready__10TObjPlayerFv(p); set_global_param__8TObjFishFi(p); push_matrix(); draw_shadowed_node_tree__10TObjPlayerFPv((u8 *)(a1)); pop_matrix(); }

}
