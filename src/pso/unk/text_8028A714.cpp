#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * TObjFish__sub_8001ED9C(void *, int);
extern u8 *lbl_805D64C8;
u8 *fn_8028A714(s32 arg0);
u8 * TObjFish__sub_8001EDB0(void *, int);
extern u8 *lbl_805D64C8;
u8 *fn_8028A750(s32 arg0);
u8 * TObjFish__sub_8001EDC4(void *, int);
extern u8 *lbl_805D64C8;
u8 *fn_8028A78C(s32 arg0);
}

extern "C" {

u8 *fn_8028A714(s32 arg0) {
    if ((void *) lbl_805D64C8 != NULL) {
        return TObjFish__sub_8001ED9C(lbl_805D64C8, arg0);
    }
    return NULL;
}
u8 *fn_8028A750(s32 arg0) {
    if ((void *) lbl_805D64C8 != NULL) {
        return TObjFish__sub_8001EDB0(lbl_805D64C8, arg0);
    }
    return NULL;
}
u8 *fn_8028A78C(s32 arg0) {
    if ((void *) lbl_805D64C8 != NULL) {
        return TObjFish__sub_8001EDC4(lbl_805D64C8, arg0);
    }
    return NULL;
}

}
