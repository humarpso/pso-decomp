#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_state__23TAdSinglePlyChrSelectGCFv(void);
s32 TWindowSubComCard__sub_8007A8F8(s32 arg0);
}

extern "C" {

s32 find_card_by_id__17TWindowSubComCardFUi(u32 arg0);
u32 get_card_id__17TWindowSubComCardFPv(s32);

s32 find_card_by_id__17TWindowSubComCardFUi(u32 arg0) {
    s32 i;
    s32 acc;

    acc = TWindowSubComCard__sub_8007A8F8((s32)(0));
    for (i = 0; i < 0xD2; i++) {
        if (arg0 == get_card_id__17TWindowSubComCardFPv(acc)) {
            return acc;
        }
        acc += 0x100;
    }
    return 0;
}
s32 TWindowSubComCard__sub_8007A8F8(s32 arg0) {
    s32 var_r31;
    s32 var_r3;
    var_r31 = arg0;
    if (var_r31 < 0) {
        var_r3 = 0;
        return 0;
    }
    if (var_r31 >= 0xD2) {
        var_r3 = 0;
        return 0;
    }
    var_r3 = get_state__23TAdSinglePlyChrSelectGCFv() + 0xC4;
    var_r3 += var_r31 << 8;
    return var_r3;
}

}
