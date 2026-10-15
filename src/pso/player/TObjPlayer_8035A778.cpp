#include "types.h"

extern "C" {

void apply_with_callback__10TObjPlayerFPvif(void *arg0, s32 arg1, f32 farg0);
s32 render_model_tree__12TBoss8DragonFPvPv(s32, s32, f32);
s32 set_global_state__16TObjEneRe7BeruraFi(s32 *);

extern s32 process_callback_list__10TObjPlayerFi[];
extern s32 lbl_805D6F30;
extern s32 lbl_805D6F34;
extern s32 node_matrix_array_base;
extern s32 lbl_805D6F3C;

void apply_with_callback__10TObjPlayerFPvif(void *arg0, s32 arg1, f32 farg0) {
    *(s32 *)((s8 *)arg0 + 0x20) = arg1;
    *(f32 *)((s8 *)arg0 + 0x24) = farg0;
    lbl_805D6F30 = 0;
    lbl_805D6F34 = *(s32 *)((s8 *)arg0 + 0x2C);
    node_matrix_array_base = *(s32 *)((s8 *)arg0 + 0x28);
    lbl_805D6F3C = *(s32 *)((s8 *)arg0 + 0x38);
    set_global_state__16TObjEneRe7BeruraFi(process_callback_list__10TObjPlayerFi);
    render_model_tree__12TBoss8DragonFPvPv(*(s32 *)((s8 *)arg0 + 0x1C), arg1, farg0);
    set_global_state__16TObjEneRe7BeruraFi(NULL);
}

}
