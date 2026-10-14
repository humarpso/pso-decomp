#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_player_list__10TObjPlayerFv();
M2C_UNK scale_current_matrix(s32);
M2C_UNK post_translate_matrix(s32);

void yasminkov_2000h_node_callback(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        post_translate_matrix(arg0 + 0x20C);
        return;
    case 2:
        scale_current_matrix(arg0 + 0x1FC);
        return;
    }
}

}
