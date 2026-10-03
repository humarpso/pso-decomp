#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_next_entry__10TObjPlayerFiPv(s32 arg0, u8 *arg1);
s32 draw_model_with_callback__10TObjPlayerFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK render_model_tree__12TBoss8DragonFPvPv(u32, s32, f32);
M2C_UNK serialize_node_flags__10TObjPlayerFPv();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(M2C_UNK *);

extern u8 *lbl_805D5684;

void clear_next_entry__10TObjPlayerFiPv(s32 arg0, u8 *arg1) {
    lbl_805D5684 = arg1;
    serialize_node_flags__10TObjPlayerFPv();
    lbl_805D5684 += 8;
    M2C_FIELD(lbl_805D5684, s32 *, 0) = 0;
}

extern M2C_UNK save_joint_matrix_callback[];
extern s32 lbl_805D567C;

s32 draw_model_with_callback__10TObjPlayerFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    if ((arg1 == 0) || ((u32) M2C_FIELD(arg0, u32 *, 0x34) == 0U)) {
        return 0;
    }
    set_global_flag__10TObjPlayerFv();
    lbl_805D567C = arg2;
    set_global_state__16TObjEneRe7BeruraFi(save_joint_matrix_callback);
    render_model_tree__12TBoss8DragonFPvPv(M2C_FIELD(arg0, u32 *, 0x34), arg1, farg0);
    set_global_state__16TObjEneRe7BeruraFi(NULL);
    clear_global_state__10TObjPlayerFv();
    return 1;
}

}
