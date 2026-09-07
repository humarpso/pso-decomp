#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80292574_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_80291F9C_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_802925C4_lbl_80540968 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80292200_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_80292604_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

extern "C" {
M2C_UNK TLobby__sub_8006F910(void *, void *, int);
extern s8 lbl_8048C9D8[];
void TLobby__sub_800714B0(u8 *arg0, s32 arg1);
}

extern "C" {

s32 add_entry__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_8006F910(void *, void *, int);
s32 is_flag_set__6TLobbyFv();

extern s8 lbl_8048C9D8[];

s32 add_entry__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_r30;

    if ((is_flag_set__6TLobbyFv() == 0) || ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) < 0) || ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) >= 0x10)) {
        return 0;
    }
    temp_r30 = (unsigned char *) (lbl_8048C9D8 + (M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) * 0x1C) + 0x5C);
    TLobby__sub_8006F910((void *) (temp_r30), (void *) (arg0), (int) (0xC));
    TLobby__sub_8006F910((void *) (temp_r30 + 0xC), (void *) (arg1), (int) (0xC));
    M2C_FIELD(temp_r30, s32 *, 0x18) = arg2;
    M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) = (s32) (M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) + 1);
    return 1;
}
typedef char RecoveredGlobal_80291F9C_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80291F9C_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
typedef char RecoveredGlobal_80292200_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292200_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
typedef char RecoveredGlobal_80292574_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292574_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
void TLobby__sub_800714B0(u8 *arg0, s32 arg1) {
    TLobby__sub_8006F910((void *)((u8 *)&(*(RecoveredGlobal_80292574_lbl_804DB1F0 *)&lbl_8048C9D8).value + 0x50), (void *)(arg0), (int)(0xC));
    M2C_FIELD(&(*(RecoveredGlobal_80292574_lbl_804DB1F0 *)&lbl_8048C9D8).value, s32 *, 0x18) = (s32) (arg1 | 0xFF000000);
}
typedef char RecoveredGlobal_802925C4_lbl_80540968_size[sizeof(RecoveredGlobal_802925C4_lbl_80540968) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80292604_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292604_lbl_804DB1F0) == 0x6B0 ? 1 : -1];

}
