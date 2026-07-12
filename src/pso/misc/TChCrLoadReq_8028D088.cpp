#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TChCrLoadReq__sub_8028D088(void *arg0);
M2C_UNK fn_8028CC28(void *);
M2C_UNK fn_8028CD18(void *);
s32 fn_8028CF1C(void *);
s32 fn_8028CF6C();

void TChCrLoadReq__sub_8028D088(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) > 0x1512) {
        if (fn_8028CF6C() == 0) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0x1512;
            goto block_3;
        }
    } else {
block_3:
        if (fn_8028CF1C(arg0) != 0) {
            fn_8028CD18(arg0);
            fn_8028CC28(arg0);
            M2C_FIELD(arg0, s32 *, 0x60) = 1;
        }
    }
}

}
