#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void remove_entry__17TWindowGetComCardFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8007B26C(s32);
M2C_UNK TLobby__sub_803DE7BC(s32, s32, u32);

void remove_entry__17TWindowGetComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    if (arg0 < (s32) (arg2 - 1)) {
        temp_r3 = arg1 + (arg0 * 0x90);
        TLobby__sub_803DE7BC(temp_r3, temp_r3 + 0x90, (u32) (((arg2 - arg0) - 1) * 0x90) >> 2U);
    }
    arg1 += (arg2 - 1) * 0x90;
    fn_8007B26C(arg1);
}

}
