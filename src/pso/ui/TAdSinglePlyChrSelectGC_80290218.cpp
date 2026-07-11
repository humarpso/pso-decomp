#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_80290218(void *arg0);
M2C_UNK fn_8007EBB4(s32);

void TAdSinglePlyChrSelectGC__sub_80290218(void *arg0) {
    fn_8007EBB4(M2C_FIELD(arg0, s32 *, 0xFC));
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
}

}
