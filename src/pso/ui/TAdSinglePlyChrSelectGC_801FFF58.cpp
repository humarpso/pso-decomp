#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_801FFF58(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200998();
s32 TAdSinglePlyChrSelectGC__sub_80201204(s32 *, M2C_UNK);

extern s32 *lbl_805D5F6C;

void TAdSinglePlyChrSelectGC__sub_801FFF58(void) {
    *lbl_805D5F6C = 0;
    *lbl_805D5F6C = TAdSinglePlyChrSelectGC__sub_80201204(lbl_805D5F6C, 0x11C);
    TAdSinglePlyChrSelectGC__sub_80200998();
}

}
