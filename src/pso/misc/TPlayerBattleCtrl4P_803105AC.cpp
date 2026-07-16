#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_ctrl_to_default__19TPlayerBattleCtrl4PFv(void);
M2C_UNK init_ctrl_default__19TPlayerBattleCtrl4PFPv(void *);

extern void *TPlayerBattleCtrl4P__data_805D6AA8;

void reset_ctrl_to_default__19TPlayerBattleCtrl4PFv(void) {
    void *temp_r3;
    temp_r3 = TPlayerBattleCtrl4P__data_805D6AA8;
    if (temp_r3 != NULL) {
        init_ctrl_default__19TPlayerBattleCtrl4PFPv(temp_r3);
    }
}

}
