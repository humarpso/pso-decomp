#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 TLobby__sub_80101AB0(s32);
M2C_UNK TObjPlayer__sub_80102BFC(u32, M2C_UNK);
s32 is_not_split_screen__13TRaderMapCoreFv();

void fn_80220588(void *arg0, void *arg1) {
    u32 temp_r3;
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && ((temp_r3 = TLobby__sub_80101AB0(M2C_FIELD(arg1, s32 *, 0xC))) != 0U) && ((s32) M2C_FIELD(arg0, s32 *, 0x168) != 0)) {
        TObjPlayer__sub_80102BFC(temp_r3, 0x80);
    }
}

}
