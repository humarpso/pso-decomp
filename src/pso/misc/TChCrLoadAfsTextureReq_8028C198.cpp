#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TChCrLoadAfsTextureReq__sub_8028C198(void *arg0);

extern s32 lbl_805D64E0;

s32 TChCrLoadAfsTextureReq__sub_8028C198(void *arg0) {
    if (((s32) lbl_805D64E0 < 0) || ((s32) lbl_805D64E0 > 3)) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x68) == 1) {
        return 0;
    }
    if ((s32) lbl_805D64E0 >= 3) {
        return 0;
    }
    lbl_805D64E0 += 1;
    M2C_FIELD(arg0, s32 *, 0x68) = 1;
    return 1;
}

}
