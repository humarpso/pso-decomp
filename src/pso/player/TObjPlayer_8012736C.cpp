#include "types.h"

extern "C" {

void notify_container_change__10TObjPlayerFPv(void *arg0);
s32 get_player_list__10TObjPlayerFv();
s32 rotate_matrix_y(s32, s32);

void notify_container_change__10TObjPlayerFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x210) == get_player_list__10TObjPlayerFv()) {
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x214));
    }
}

}
