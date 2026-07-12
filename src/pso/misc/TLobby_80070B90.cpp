#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_state__6TLobbyFv(void);
s32 TLobby__sub_80070AB0();

extern M2C_UNK lbl_8048C9D8[];

s32 get_state__6TLobbyFv(void) {
    if (TLobby__sub_80070AB0() == 0) {
        return 0;
    }
    if (((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C) != 1) && ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C) != 0)) {
        M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C) = 0;
    }
    return M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C);
}

}
