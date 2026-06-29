#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8000F8FC();
s32 fn_80019690();
M2C_UNK TBoss4Thanks__sub_8035C338();
s32 fn_8035C9E8();
extern s32 lbl_805D5550;

s32 fn_8035C98C(void) {
    if (((s32) lbl_805D5550 == 0) || ((fn_8000F8FC() == 0xE) && (fn_80019690() == 0)) || (fn_8035C9E8() == 0)) {
        return 0;
    }
    TBoss4Thanks__sub_8035C338();
    return 1;
}

}
