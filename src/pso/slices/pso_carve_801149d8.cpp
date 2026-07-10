#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TItemMag__sub_80113C98(void *, s32);
M2C_UNK reset_stats__11TItemMagSubFPv(void *, s32, s32);
extern s32 lbl_805D54B0;

void fn_801149D8(u8 *arg0, s32 arg1) {
    TItemMag__sub_80113C98(arg0, 0x18);
    reset_stats__11TItemMagSubFPv(arg0, M2C_FIELD(arg0, s32 *, 0x68), arg1);
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (lbl_805D54B0 + (arg1 * 0x64));
}

}
