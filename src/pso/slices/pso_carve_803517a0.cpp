#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_803519CC();
extern f32 lbl_805DFEC8;

f32 fn_803517A0(void *arg0) {
    if ((void *) M2C_FIELD(arg0, void **, 0xC) == NULL) {
        return lbl_805DFEC8;
    }
    if (TObjPlayer__sub_803519CC() != 0) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), f32 *, 0x24);
    }
    return lbl_805DFEC8;
}

}
