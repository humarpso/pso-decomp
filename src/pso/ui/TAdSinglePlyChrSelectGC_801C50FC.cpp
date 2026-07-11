#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 TAdSinglePlyChrSelectGC__sub_801C50FC(void);

extern u8 *lbl_805D5F64;

u16 TAdSinglePlyChrSelectGC__sub_801C50FC(void) {
    return M2C_FIELD(lbl_805D5F64, u16 *, 0x21AA);
}

}
