#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800FCC78_lbl_8049CA54 {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
u8 * __ct__14TFontSmallHelpFUlUllUl(void *, s32, s32, s32, s32);
extern RecoveredGlobal_800FCC78_lbl_8049CA54 lbl_8049CA54;
u8 *fn_800FCC78(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_800FCC78_lbl_8049CA54_size[sizeof(RecoveredGlobal_800FCC78_lbl_8049CA54) == 0x1C ? 1 : -1];
u8 *fn_800FCC78(u8 *arg0, s32 arg1) {
    __ct__14TFontSmallHelpFUlUllUl(arg0, arg1, -1, -1, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_8049CA54.value;
    M2C_FIELD(arg0, s32 *, 0x60) = 5;
    return arg0;
}

}
