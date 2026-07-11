#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjDoorKey__sub_8019017C(void);
void fn_8001FE7C(void*, int);
M2C_UNK fn_801E483C(s32);

extern u32 lbl_805D5BF8;
extern s32 lbl_805D5BFC;
extern s32 lbl_805D5C04;

void TObjDoorKey__sub_8019017C(void) {
    if ((u32) lbl_805D5BF8 != 0U) {
        fn_8001FE7C((void*)lbl_805D5BF8, 1);
        lbl_805D5BF8 = 0U;
    }
    fn_801E483C(lbl_805D5BFC);
    lbl_805D5BFC = 0;
    lbl_805D5C04 = 0;
}

}
