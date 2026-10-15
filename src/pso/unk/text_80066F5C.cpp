#include "types.h"

extern "C" {
s32 apply_single_screen_state__6TSceneFv();
s32 render_projected_shadow_receiver(void *, void *);
s32 rotate_matrix_by_node_angles(void *, int);
int push_matrix(void);
int pop_matrix(void);
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 draw_ginja_model(int);
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
        if (!(*(s32 *)((s8 *)arg0 + 0) & 8) && ((u32) *(u32 *)((s8 *)arg0 + 4) != 0U)) {
            render_projected_shadow_receiver((void *) (arg0 + 8), (void *) (arg0 + 0x14));
            draw_ginja_model((int) (*(u32 *)((s8 *)arg0 + 4)));
            apply_single_screen_state__6TSceneFv();
        }
        draw_shadowed_node_tree__10TObjPlayerFPv(*(u8 **)((s8 *)arg0 + 0x2C));
        pop_matrix();
        draw_shadowed_node_tree__10TObjPlayerFPv(*(u8 **)((s8 *)arg0 + 0x30));
    }
}

void render_impl__19TObjBoss5FloorStoneFPvPv(void* p, void* a1) { draw_if_all_ready__10TObjPlayerFv(p); set_global_param__8TObjFishFi(p); push_matrix(); draw_shadowed_node_tree__10TObjPlayerFPv((u8 *)(a1)); pop_matrix(); }

}
