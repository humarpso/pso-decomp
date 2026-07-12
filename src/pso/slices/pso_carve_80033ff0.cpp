#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss2DeRolLe__sub_800362E8(void *);
void *get_enemy_entity(int);
void init_from_param__13TBoss2DeRolLeFPvPv(void *, void *);

void handle_6x13_de_rol_le_boss_actions(void *arg0) {
    void *x;
    TBoss2DeRolLe__sub_800362E8(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        init_from_param__13TBoss2DeRolLeFPvPv(x, arg0);
    }
}

}
