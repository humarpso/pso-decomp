#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_main_phase();
M2C_UNK fn_8001DC24();
M2C_UNK TLobby__sub_8001E7AC();
u32 fn_800FC0D8();
extern M2C_UNK lbl_80434A90;
extern f32 lbl_805D7EE0;

f32 TLobby__sub_8001E804(void) {
    f32 var_f31;

    var_f31 = lbl_805D7EE0;
    if (get_main_phase() == 0xF) {
        TLobby__sub_8001E7AC();
        fn_8001DC24();
        var_f31 -= (f32) fn_800FC0D8();
    }
    return var_f31;
}

}
