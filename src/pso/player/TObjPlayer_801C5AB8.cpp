#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801C5AB8(void *arg0);
void TObjPlayer__sub_801C5B18(void* a0);
M2C_UNK TObjPlayer__sub_801B130C(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 fn_801C6F2C(void *);

void TObjPlayer__sub_801C5AB8(void *arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0));
    if ((temp_r3 != 0) && (fn_801C6F2C(arg0) == 0)) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        TObjPlayer__sub_801B130C(temp_r3);
        M2C_FIELD(arg0, s16 *, 2) = 4;
    }
}

    extern const float lbl_805DC320;
void TObjPlayer__sub_801C5B18(void* a0) { *(float*)((char*)a0 + 0x1c) = lbl_805DC320; }

}
