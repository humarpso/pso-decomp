#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_8007B458(s32, s32);
u32 TWindowSubComCard__sub_80202990();
extern s32 lbl_805D4E80;

void fn_8007B4F8(s32 arg0) {
    s32 temp_r31;
    u32 temp_r3;

    lbl_805D4E80 = 0;
    temp_r3 = TWindowSubComCard__sub_80202990();
    if (temp_r3 != 0U) {
        temp_r31 = temp_r3 + 0x1510;
        if (temp_r31 != 0) {
            TLobby__sub_8007B458(temp_r31, arg0);
            lbl_805D4E80 = temp_r31;
        }
    }
}

}
