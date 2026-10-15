#include "types.h"

extern "C" {

s32 rotate_matrix_by_node_angles(void *, int);
s32 scale_current_matrix(void *);
extern s32 attack_collider_active_count;

void fn_802E3BA8(u8 *arg0) {
    if ((*(s32 *)((s8 *)arg0 + 0xE4) & 8) && ((s32) attack_collider_active_count == 1)) {
        rotate_matrix_by_node_angles(arg0 + 0x114, 1);
        scale_current_matrix(arg0 + 0x120);
    }
}

}
