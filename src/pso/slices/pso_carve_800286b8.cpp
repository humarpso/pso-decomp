#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_8002AF4C(void *);
void *get_enemy_entity(int);
void fn_80028660(void *, void *);

void handle_6x11_dragon_boss_actions(void *arg0) {
    void *x;
    fn_8002AF4C(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        fn_80028660(x, arg0);
    }
}

}
