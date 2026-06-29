#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8000F8FC();
s32 fn_80019690();
M2C_UNK TBoss6Thanks__sub_8035CB64();
s32 fn_8035D2EC();
extern s32 lbl_805D5550;

s32 fn_8035D290(void) {
    if (((s32) lbl_805D5550 == 0) || ((fn_8000F8FC() == 0xE) && (fn_80019690() == 0)) || (fn_8035D2EC() == 0)) {
        return 0;
    }
    TBoss6Thanks__sub_8035CB64();
    return 1;
}

}
