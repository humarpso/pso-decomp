#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjRainCtrl__ct(void *, s32);
void *__nw__7TObjectFUl(M2C_UNK);
s32 TRaderMapCore__sub_8030A808();
extern s32 tl_particle;

void fn_80197CE8(void) {
    void *temp_r3;

    if (TRaderMapCore__sub_8030A808() == 0) {
        temp_r3 = __nw__7TObjectFUl(0x20);
        if (temp_r3 != 0) {
            TObjRainCtrl__ct(temp_r3, tl_particle);
        }
    }
}

}
