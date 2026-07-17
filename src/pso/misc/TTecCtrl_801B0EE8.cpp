#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_technique_ready__8TTecCtrlFv(void);
s32 get_player_count__10TObjPlayerFv();
s8 TObjPlayer__sub_801BE388();

u8 is_technique_ready__8TTecCtrlFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((get_player_count__10TObjPlayerFv() == 1) && (TObjPlayer__sub_801BE388() == 1)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

}
