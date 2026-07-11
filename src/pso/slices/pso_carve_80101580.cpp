#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 obj_getField1c();
M2C_UNK fn_80103114(s32, s32);
s32 TLobby__sub_80103AD4();
M2C_UNK TObjPlayer__sub_80154764(s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154B28(s32);

void fn_80101580(s32 arg0, s32 arg1) {
    if ((u16) obj_getField1c() == 0xFFFF) {
        fn_80103114(arg0, TLobby__sub_80103AD4());
        TObjPlayer__sub_80154B28(arg0);
        if (arg1 != 0) {
            TObjPlayer__sub_80154764(arg0, 0, 1);
        }
    }
}

}
