#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void bswap_6x12_packet__10TObjPlayerFPv(void *);
void *get_enemy_entity(int);
void TBoss1Dragon__sub_80028598(void *, void *);

void handle_6x12_dragon_boss_actions(void *arg0) {
    void *x;
    bswap_6x12_packet__10TObjPlayerFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        TBoss1Dragon__sub_80028598(x, arg0);
    }
}

}
