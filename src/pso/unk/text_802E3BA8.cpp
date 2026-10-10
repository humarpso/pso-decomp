#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK rotate_matrix_by_node_angles(void *, int);
M2C_UNK scale_current_matrix(void *);
extern s32 attack_collider_active_count;

void fn_802E3BA8(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xE4) & 8) && ((s32) attack_collider_active_count == 1)) {
        rotate_matrix_by_node_angles(arg0 + 0x114, 1);
        scale_current_matrix(arg0 + 0x120);
    }
}

}
