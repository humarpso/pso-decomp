#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * TObjFish__sub_8001EDB0(void *, int);
extern u8 *lbl_805D69E0;
u8 *fn_802FF028(s32 arg0);
u8 * get_bml_model(void *, int);
extern u8 *lbl_805D69E0;
u8 *fn_802FF064(s32 arg0);
}

extern "C" {

u8 *fn_802FF028(s32 arg0) {
    if ((void *) lbl_805D69E0 != NULL) {
        return TObjFish__sub_8001EDB0(lbl_805D69E0, arg0);
    }
    return NULL;
}
u8 *fn_802FF064(s32 arg0) {
    if ((void *) lbl_805D69E0 != NULL) {
        return get_bml_model(lbl_805D69E0, arg0);
    }
    return NULL;
}

}
