#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * get_bml_motion(void *, int);
extern u8 *lbl_805D6808;
u8 *get_motion__17TOTrapChainSawKeyFi(s32 arg0);
u8 * get_bml_model(void *, int);
extern u8 *lbl_805D6808;
u8 *get_model__17TOTrapChainSawKeyFi(s32 arg0);
}

extern "C" {

u8 *get_motion__17TOTrapChainSawKeyFi(s32 arg0) {
    if ((void *) lbl_805D6808 != NULL) {
        return get_bml_motion(lbl_805D6808, arg0);
    }
    return NULL;
}
u8 *get_model__17TOTrapChainSawKeyFi(s32 arg0) {
    if ((void *) lbl_805D6808 != NULL) {
        return get_bml_model(lbl_805D6808, arg0);
    }
    return NULL;
}

}
