#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLoadCtrl__sub_800F9F00(void);

extern s32 TLoadCtrl__data_805D4A88;

s32 TLoadCtrl__sub_800F9F00(void) {
    return TLoadCtrl__data_805D4A88;
}

}
