#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80202990(u32 arg0);
s32 fn_801FE7D4(u32);

s32 is_split_screen();
extern s32 lbl_805D5F64;

s32 TWindowSubComCard__sub_80202990(u32 arg0) {
    if (is_split_screen() != 0) {
        if (arg0 == 0xFFFF) {
            return fn_801FE7D4(0U);
        }
        return fn_801FE7D4(arg0);
    }
    return lbl_805D5F64;
}

}
