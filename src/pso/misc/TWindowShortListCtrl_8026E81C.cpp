#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_technique_usable__20TWindowShortListCtrlFPv(u8 *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 is_technique_ready__8TTecCtrlFv();

s32 is_technique_usable__20TWindowShortListCtrlFPv(u8 *arg0) {
    u32 temp_r3;
    u8 *temp_r31;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    if (temp_r3 == 0U) {
        return 0;
    }
    temp_r31 = (unsigned char *) (temp_r3 + 0x85C);
    if (temp_r31 == NULL) {
        return 0;
    }
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        return 1;
    }
    return ((u32) M2C_FIELD(temp_r31, u32 *, 0x34) >> 4U) & 1;
}

}
