#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void byteswap_action_packet__11TBoss7JointFPv(void *);
void *get_enemy_entity(int);
void fn_802EC9F0(void *, void *);

void handle_6xA9_barba_ray_boss_actions(void *arg0) {
    void *x;
    byteswap_action_packet__11TBoss7JointFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        fn_802EC9F0(x, arg0);
    }
}

}
