#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_table_entry__18TObjLiveCameraCtrlFi(s32 arg0);

extern M2C_UNK TObjLiveCameraCtrl__data_805D6A88;

s32 get_table_entry__18TObjLiveCameraCtrlFi(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 > 1) {
        return 0;
    }
    return *(s32 *)((s8 *)&TObjLiveCameraCtrl__data_805D6A88 + (arg0 * 4));
}

}
