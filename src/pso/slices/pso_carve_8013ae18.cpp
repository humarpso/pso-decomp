#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_8013DEF8(s32);
void *TMainCursor__sub_8013DFD4(s32);
s32 TObjPlayer__sub_801C6DAC(s32);

void fn_8013AE18(s32 arg0) {
    if ((TObjPlayer__sub_801C6DAC(arg0 + 0x1C) != 0) && ((u32) M2C_FIELD(TMainCursor__sub_8013DFD4(arg0 + 0x1C), u32 *, 0x424) != 0U)) {
        TObjPlayer__sub_8013DEF8(M2C_FIELD(TMainCursor__sub_8013DFD4(arg0 + 0x1C), s32 *, 0x424) + 0x520);
    }
}

}
