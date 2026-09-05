#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 * get_element__10TObjPlayerFPvi(void *, int);
extern u8 *lbl_805D5D68;
u8 *TObjPlayer__sub_801CBD98(s32 arg0);
}

extern "C" {

u8 *TObjPlayer__sub_801CBD98(s32 arg0) {
    if ((void *) lbl_805D5D68 != NULL) {
        return get_element__10TObjPlayerFPvi(lbl_805D5D68, arg0);
    }
    return NULL;
}

}
