#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4DarkFalz__sub_8004C8F0(void *arg0);
void TBoss4DarkFalz__sub_8004B20C(void*, M2C_UNK);

extern s32 lbl_805D5550;

void TBoss4DarkFalz__sub_8004C8F0(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380) - 1;
    M2C_FIELD(arg0, s32 *, 0x380) = temp_r0;
    if (temp_r0 < 0) {
        if ((s32) lbl_805D5550 == 0) {
            TBoss4DarkFalz__sub_8004B20C(arg0, 0xA);
            return;
        }
        TBoss4DarkFalz__sub_8004B20C(arg0, 0xB);
    }
}

}
