#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOKey__sub_8016A19C(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_80141E3C(s32, void *);
M2C_UNK TObjPlayer__sub_801BA4BC(s32, M2C_UNK, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

void TOKey__sub_8016A19C(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    if ((temp_r0 != 2) && ((temp_r0 != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1))) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg1);
        if (temp_r3 != 0) {
            TObjPlayer__sub_801BA4BC(temp_r3, 0xC, TObjPlayer__sub_80141E3C(temp_r3 + 0x38, arg0 + 0x38));
            M2C_FIELD(arg0, s32 *, 0xDC) = (s32) M2C_FIELD(arg0, s32 *, 0xD8);
            M2C_FIELD(arg0, s32 *, 0xE0) = 1;
        }
    }
}

}
