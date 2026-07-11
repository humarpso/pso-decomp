#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_800362A4(void *);
void *get_enemy_entity(int);
void TBoss2DeRolLe__sub_80033F34(void *, void *);

void handle_6x14_de_rol_le_boss_actions_with_target(void *arg0) {
    void *x;
    fn_800362A4(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        TBoss2DeRolLe__sub_80033F34(x, arg0);
    }
}

}
