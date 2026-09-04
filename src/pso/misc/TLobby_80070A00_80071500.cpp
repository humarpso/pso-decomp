#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_remaining_char_slots__6TLobbyFv(void);
void set_selected_layout__6TLobbyFi(s32 arg0);
u8 *get_char_index__23TAdSinglePlyChrSelectGCFUi(M2C_UNK);
s32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);

extern s32 lbl_8048C9D8[];

void set_selected_layout__6TLobbyFi(s32 arg0) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = arg0;
    temp_r3 = get_layout_id__20TWindowSubStatusDispFv(-1);
    if ((var_r31 < 0) || (var_r31 >= temp_r3)) {
        var_r31 = 0;
    }
    lbl_8048C9D8[0] = var_r31;
}

s32 calc_remaining_char_slots__6TLobbyFv(void) {
    s32 var_r3;

    var_r3 = 0x1E - *get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF);
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    return var_r3;
}

}
