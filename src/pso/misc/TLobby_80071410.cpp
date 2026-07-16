#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 add_entry__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_8006F910(void *, void *, int);
s32 TLobby__sub_80070AB0();

extern s8 lbl_8048C9D8[];

s32 add_entry__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_r30;

    if ((TLobby__sub_80070AB0() == 0) || ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) < 0) || ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) >= 0x10)) {
        return 0;
    }
    temp_r30 = (unsigned char *) (lbl_8048C9D8 + (M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) * 0x1C) + 0x5C);
    TLobby__sub_8006F910((void *) (temp_r30), (void *) (arg0), (int) (0xC));
    TLobby__sub_8006F910((void *) (temp_r30 + 0xC), (void *) (arg1), (int) (0xC));
    M2C_FIELD(temp_r30, s32 *, 0x18) = arg2;
    M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) = (s32) (M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) + 1);
    return 1;
}

}
