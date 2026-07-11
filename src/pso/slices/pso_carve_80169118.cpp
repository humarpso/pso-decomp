#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 lbl_805D53A0;

s32 fn_80169118(int arg0, u16 arg1) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return 1;
    }
    return (u32)__cntlzw((u32)(lbl_805D53A0 - (u16)arg1)) >> 5;
}

}
