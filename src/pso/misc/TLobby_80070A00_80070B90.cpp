#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80070BE8_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

extern "C" {
s32 is_flag_set__6TLobbyFv();
extern M2C_UNK lbl_8048C9D8[];
void TLobby__sub_80070BE8(s32 arg0);
}

extern "C" {

s32 get_state__6TLobbyFv(void);
s32 is_flag_set__6TLobbyFv();

extern M2C_UNK lbl_8048C9D8[];

s32 get_state__6TLobbyFv(void) {
    if (is_flag_set__6TLobbyFv() == 0) {
        return 0;
    }
    if (((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C) != 1) && ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C) != 0)) {
        M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C) = 0;
    }
    return M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C);
}
typedef char RecoveredGlobal_80070BE8_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070BE8_lbl_8048C9D8) == 0x748 ? 1 : -1];
void TLobby__sub_80070BE8(s32 arg0) {
    s32 var_r31;
    var_r31 = arg0;
    if (is_flag_set__6TLobbyFv() == 0) {
        M2C_FIELD(&(*(RecoveredGlobal_80070BE8_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x2C) = 0;
        return;
    }
    if ((var_r31 != 1) && (var_r31 != 0)) {
        var_r31 = 0;
    }
    M2C_FIELD(&(*(RecoveredGlobal_80070BE8_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x2C) = var_r31;
}

}
