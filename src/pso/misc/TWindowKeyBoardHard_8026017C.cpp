#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TWindowKeyBoardHardFv(void *arg0);
s32 is_key_active__19TWindowKeyBoardHardFPv();
s32 draw_default_entry__9TWindowDDFi(void *);
M2C_UNK TWindowKeyBoardHard__sub_80260020(void *, s32);

void render__19TWindowKeyBoardHardFv(void *arg0) {
    s32 temp;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x68) > 0) && (is_key_active__19TWindowKeyBoardHardFPv() == 0)) {
        temp = draw_default_entry__9TWindowDDFi(arg0);
        TWindowKeyBoardHard__sub_80260020(arg0, temp);
    }
}

}
