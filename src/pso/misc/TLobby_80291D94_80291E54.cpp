#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80291EAC_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

extern "C" {
s32 TLobby__sub_80293080();
extern M2C_UNK lbl_804DB1F0[];
void TLobby__sub_80291EAC(s32 arg0);
}

extern "C" {

s32 get_normalized_mode__6TLobbyFv(void);
s32 TLobby__sub_80293080();

extern M2C_UNK lbl_804DB1F0[];

s32 get_normalized_mode__6TLobbyFv(void) {
    if (TLobby__sub_80293080() == 0) {
        return 0;
    }
    if (((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x2C) != 1) && ((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x2C) != 0)) {
        M2C_FIELD(lbl_804DB1F0, s32 *, 0x2C) = 0;
    }
    return M2C_FIELD(lbl_804DB1F0, s32 *, 0x2C);
}
typedef char RecoveredGlobal_80291EAC_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80291EAC_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
void TLobby__sub_80291EAC(s32 arg0) {
    s32 var_r31;
    var_r31 = arg0;
    if (TLobby__sub_80293080() == 0) {
        M2C_FIELD(&(*(RecoveredGlobal_80291EAC_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0x2C) = 0;
        return;
    }
    if ((var_r31 != 1) && (var_r31 != 0)) {
        var_r31 = 0;
    }
    M2C_FIELD(&(*(RecoveredGlobal_80291EAC_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0x2C) = var_r31;
}

}
