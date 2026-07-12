#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801CBD00(void);
s32 TObjPlayer__sub_80312E0C(void*);

extern u32 lbl_805D5D68;

s32 TObjPlayer__sub_801CBD00(void) {
    if ((u32) lbl_805D5D68 != 0U) {
        return TObjPlayer__sub_80312E0C((void*)lbl_805D5D68);
    }
    return 0xFFFF;
}

}
