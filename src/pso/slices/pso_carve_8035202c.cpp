#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TAdSinglePlyChrSelectGC__sub_8007EBB4(u32);
M2C_UNK fn_803DA16C(void*);
extern u32 lbl_805D6EC4;

void fn_8035202C(void) {
    if ((u32) lbl_805D6EC4 != 0U) {
        fn_803DA16C((void*)lbl_805D6EC4);
        TAdSinglePlyChrSelectGC__sub_8007EBB4(lbl_805D6EC4);
        lbl_805D6EC4 = 0U;
    }
}

}
