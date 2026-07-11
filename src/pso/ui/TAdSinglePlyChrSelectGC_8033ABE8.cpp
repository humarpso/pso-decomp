#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_8033ABE8(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FD94C(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80202BA8(M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8033B5F0(void *);

void TAdSinglePlyChrSelectGC__sub_8033ABE8(void *arg0) {
    if (TAdSinglePlyChrSelectGC__sub_801FD94C(M2C_FIELD(arg0, s32 *, 0x24)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 8;
        TAdSinglePlyChrSelectGC__sub_80202BA8(0xC);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    TAdSinglePlyChrSelectGC__sub_8033B5F0(arg0);
}

}
