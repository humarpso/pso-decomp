#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCMMainMenu__sub_8028DA4C(void);
M2C_UNK TObjCMMainMenu__sub_8028DA0C(s32);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(M2C_UNK);

void TObjCMMainMenu__sub_8028DA4C(void) {
    TObjCMMainMenu__sub_8028DA0C(get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) + 0x370);
}

}
