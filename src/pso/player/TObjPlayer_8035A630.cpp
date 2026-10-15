#include "types.h"

extern "C" {

void process_callback_list__10TObjPlayerFi(s32 arg0);
void draw_node_tree__10TObjPlayerFPvPv(void *arg0, void *arg1);
extern s32 (*player_apply_callback_fn)(s32);
s32 get_current_matrix(s32);
s32 concat_matrix__10TObjPlayerFUiUi(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 draw_chunk_model(s32);

extern s32 player_node_matrix_cursor;
extern s32 player_node_matrix_count;
extern s32 node_matrix_array_base;

void process_callback_list__10TObjPlayerFi(s32 arg0) {
    if ((s32) player_node_matrix_cursor < (s32) player_node_matrix_count) {
        get_current_matrix(node_matrix_array_base + (player_node_matrix_cursor * 0x30));
    }
    if (((s32 (*)(s32)) player_apply_callback_fn) != NULL) {
        player_apply_callback_fn(arg0);
    }
    player_node_matrix_cursor += 1;
}

extern s32 node_matrix_array_base;

void draw_node_tree__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    s32 (*temp_r12)(void *);
    s32 temp_r31;
    void *var_r30;

    var_r30 = arg1;
    do {
        temp_r31 = *(s32 *)((s8 *)var_r30 + 0);
        push_matrix();
        concat_matrix__10TObjPlayerFUiUi(0, node_matrix_array_base + (*(s32 *)((s8 *)arg0 + 0x30) * 0x30));
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) + 1);
        temp_r12 = *(s32 (**)(void *))((s8 *)arg0 + 0x34);
        if (temp_r12 != NULL) {
            temp_r12(var_r30);
        }
        if (!(temp_r31 & 8)) {
            draw_chunk_model(*(s32 *)((s8 *)var_r30 + 4));
        }
        pop_matrix();
        if (!(temp_r31 & 0x10)) {
            draw_node_tree__10TObjPlayerFPvPv(arg0, *(void **)((s8 *)var_r30 + 0x2C));
        }
        var_r30 = *(void **)((s8 *)var_r30 + 0x30);
    } while (var_r30 != NULL);
}

}
