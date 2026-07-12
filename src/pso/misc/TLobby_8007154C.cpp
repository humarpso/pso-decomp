#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_remaining_char_slots__6TLobbyFv(void);
u8 *get_char_index__23TAdSinglePlyChrSelectGCFUi(M2C_UNK);

s32 calc_remaining_char_slots__6TLobbyFv(void) {
    s32 var_r3;

    var_r3 = 0x1E - *get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF);
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    return var_r3;
}

}
