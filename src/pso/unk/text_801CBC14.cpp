#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjPlayer__sub_80312D4C(void *, s32);
extern u8 *lbl_805D5D68;
void TObjPlayer__sub_801CBC90(s32 arg0);
u8 * TObjPlayer__sub_80312CCC(void *, int);
extern u8 *lbl_805D5D68;
u8 *TObjPlayer__sub_801CBCC4(s32 arg0);
}

extern "C" {

void TObjPlayer__sub_801CBC90(s32 arg0) {
    if ((void *) lbl_805D5D68 != NULL) {
        TObjPlayer__sub_80312D4C(lbl_805D5D68, arg0);
    }
}
u8 *TObjPlayer__sub_801CBCC4(s32 arg0) {
    if ((void *) lbl_805D5D68 != NULL) {
        return TObjPlayer__sub_80312CCC(lbl_805D5D68, arg0);
    }
    return NULL;
}

}
