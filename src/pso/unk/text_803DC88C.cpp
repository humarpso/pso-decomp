#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803DCBD8_lbl_8058D380 {
    M2C_UNK value;
    u8 remaining[0xEC];
};

extern "C" {
extern RecoveredGlobal_803DCBD8_lbl_8058D380 lbl_8058D380;
extern u8 *lbl_805D774C;
void TObjPlayer__sub_803DCBD8(s32 arg0);
}

extern "C" {

extern s32 lbl_805D7710;

void set_npc_enemy_param(s32 arg0) {
    lbl_805D7710 = arg0;
}
typedef char RecoveredGlobal_803DCBD8_lbl_8058D380_size[sizeof(RecoveredGlobal_803DCBD8_lbl_8058D380) == 0xF0 ? 1 : -1];
void TObjPlayer__sub_803DCBD8(s32 arg0) {
    lbl_805D774C = (u8 *)&lbl_8058D380.value + (arg0 * 0x28);
}

}
