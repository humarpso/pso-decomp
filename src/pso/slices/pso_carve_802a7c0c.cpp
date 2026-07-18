#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802A5C3C(s32);
s32 get_size__15TWindowSnapShotFPv(s32);
M2C_UNK memcpy(s32, s32, s32);
extern s32 lbl_805D6690;
extern s32 lbl_805D6694;
extern s32 lbl_805D6698;

s32 copy_if_space(void) {
    if (fn_802A5C3C(lbl_805D6690) >= 0x258) {
        return 0;
    }
    memcpy(lbl_805D6694, get_size__15TWindowSnapShotFPv(lbl_805D6690), lbl_805D6698);
    return 1;
}

}
