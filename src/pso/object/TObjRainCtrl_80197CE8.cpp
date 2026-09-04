#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__12TObjRainCtrlFv(void);
M2C_UNK TObjRainCtrl__ct(void *, s32);
void *__nw__7TObjectFUl(M2C_UNK);
s32 is_not_split_screen__13TRaderMapCoreFv();

extern s32 tl_particle;

void create__12TObjRainCtrlFv(void) {
    void *temp_r3;

    if (is_not_split_screen__13TRaderMapCoreFv() == 0) {
        temp_r3 = __nw__7TObjectFUl(0x20);
        if (temp_r3 != 0) {
            TObjRainCtrl__ct(temp_r3, tl_particle);
        }
    }
}

}
