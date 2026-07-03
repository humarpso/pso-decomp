#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TLobby__sub_8001E870(void);
s32 get_main_phase();

extern f32 lbl_805D7EE4;
extern f32 lbl_805D7EE8;

f32 TLobby__sub_8001E870(void) {
    f32 var_f31;

    var_f31 = lbl_805D7EE4;
    if (get_main_phase() == 0xF) {
        var_f31 -= lbl_805D7EE8;
    }
    return var_f31;
}

}
