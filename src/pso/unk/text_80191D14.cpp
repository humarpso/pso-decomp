#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80191D14_lbl_8050DCB8 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80191D5C_lbl_8050DCB8 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80191D34_lbl_8050DCB8 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

extern "C" {
extern RecoveredGlobal_80191D14_lbl_8050DCB8 lbl_8050DCB8;
void fn_80191D14(u16 arg0, s32 arg1);
extern RecoveredGlobal_80191D14_lbl_8050DCB8 lbl_8050DCB8;
void fn_80191D5C(u16 arg0);
extern RecoveredGlobal_80191D14_lbl_8050DCB8 lbl_8050DCB8;
s32 fn_80191D34(u16 arg0);
}

extern "C" {

typedef char RecoveredGlobal_80191D14_lbl_8050DCB8_size[sizeof(RecoveredGlobal_80191D14_lbl_8050DCB8) == 0x30 ? 1 : -1];
void fn_80191D14(u16 arg0, s32 arg1) {
    if (arg0 < 0xCU) {
        M2C_FIELD(&lbl_8050DCB8.value, M2C_UNK *, ((arg0 * 4) & 0x3FFFC)) = arg1;
    }
}
typedef char RecoveredGlobal_80191D5C_lbl_8050DCB8_size[sizeof(RecoveredGlobal_80191D5C_lbl_8050DCB8) == 0x30 ? 1 : -1];

typedef char RecoveredGlobal_80191D34_lbl_8050DCB8_size[sizeof(RecoveredGlobal_80191D34_lbl_8050DCB8) == 0x30 ? 1 : -1];
s32 fn_80191D34(u16 arg0) {
    if (arg0 >= 0xCU) {
        return 0;
    }
    return M2C_FIELD(&(*(RecoveredGlobal_80191D34_lbl_8050DCB8 *)&lbl_8050DCB8).value, M2C_UNK *, ((arg0 * 4) & 0x3FFFC));
}

void fn_80191D5C(u16 arg0) {
    if (arg0 < 0xCU) {
        M2C_FIELD(&(*(RecoveredGlobal_80191D5C_lbl_8050DCB8 *)&lbl_8050DCB8).value, M2C_UNK *, ((arg0 * 4) & 0x3FFFC)) = 0x12C;
    }
}

}
