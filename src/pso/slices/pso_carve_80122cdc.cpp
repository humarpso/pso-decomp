#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80108620(s32, s32, M2C_UNK, M2C_UNK);
u8 TItemProShield__sub_8010B734();
s32 fn_8011F63C(s32);
extern s32 tl_05;

void fn_80122CDC(s32 arg0) {
    if ((TItemProShield__sub_8010B734() < 4U) && (fn_8011F63C(arg0) == 0)) {
        fn_80108620(tl_05, arg0, 1, 2);
    }
}

}
