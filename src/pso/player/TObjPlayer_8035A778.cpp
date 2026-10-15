#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 render_model_tree__12TBoss8DragonFPv(s32, s32, f32);
s32 set_global_state__16TObjEneRe7BeruraFl(s32 *);

extern s32 process_callback_list__10TObjPlayerFl[];
extern s32 player_node_matrix_cursor;
extern s32 player_node_matrix_count;
extern s32 node_matrix_array_base;
extern s32 player_apply_callback_fn;

void TObjPlayer::apply_with_callback(s32 arg1, f32 farg0) {
    *(s32 *)((s8 *)this + 0x20) = arg1;
    *(f32 *)((s8 *)this + 0x24) = farg0;
    player_node_matrix_cursor = 0;
    player_node_matrix_count = *(s32 *)((s8 *)this + 0x2C);
    node_matrix_array_base = *(s32 *)((s8 *)this + 0x28);
    player_apply_callback_fn = *(s32 *)((s8 *)this + 0x38);
    set_global_state__16TObjEneRe7BeruraFl(process_callback_list__10TObjPlayerFl);
    render_model_tree__12TBoss8DragonFPv(*(s32 *)((s8 *)this + 0x1C), arg1, farg0);
    set_global_state__16TObjEneRe7BeruraFl(NULL);
}

}
