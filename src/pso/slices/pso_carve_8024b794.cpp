#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8024D8A8(u32, void*);
extern u32* lbl_805D63F8;

void TWindowCtrl__sub_8024B794(s32 arg0, void *arg1) {
    u32* p = lbl_805D63F8;
    if (p != 0 && p[arg0 + 18] != 0U) {
        fn_8024D8A8(p[arg0 + 18], arg1);
    }
}

}
