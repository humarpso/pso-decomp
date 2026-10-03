#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_move_input__10TObjPlayerFPv(u8 *arg0);
M2C_UNK scale_current_matrix(void *);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
s32 get_player_list__10TObjPlayerFv();

void handle_move_input__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x204));
        return;
    case 2:
        scale_current_matrix(arg0 + 0x1F8);
        return;
    case 3:
        rotate_matrix_x(0, -M2C_FIELD(arg0, s32 *, 0x204));
        return;
    }
}

}
