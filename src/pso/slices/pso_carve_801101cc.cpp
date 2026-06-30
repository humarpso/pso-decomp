#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001ED9C(s32, M2C_UNK);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
extern s32 lbl_805D5480;

void fn_801101CC(s32 *arg0, s32 *arg1, s32 *arg2) {
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL)) {
        *arg0 = TObjFish__sub_8001EDC4(lbl_805D5480, 1);
        *arg1 = TObjFish__sub_8001EDB0(lbl_805D5480, 0);
        *arg2 = fn_8001ED9C(lbl_805D5480, 0);
    }
}

}
