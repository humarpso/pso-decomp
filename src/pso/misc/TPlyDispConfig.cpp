#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_80071EA8 { s32 x0; s32 a[4]; s32 b[4]; };

extern "C" {
void __destroy_arr(void *, void *, u32, u32);
void free_if_valid__14TPlyDispConfigFis(void *, s16);
M2C_UNK __dl__FPv(s32);
s32 destroy_arrays__14TPlyDispConfigFii(s32 self, s32 del);
}

extern "C" {

s32 __dt__14TPlyDispConfigFv(s32 arg0, s16 arg1);
M2C_UNK __dl__FPv(s32);

s32 __dt__14TPlyDispConfigFv(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        destroy_arrays__14TPlyDispConfigFii((s32)(arg0 + 0x24), (s32)(-1));
        destroy_arrays__14TPlyDispConfigFii((s32)(arg0), (s32)(-1));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
s32 destroy_arrays__14TPlyDispConfigFii(s32 self, s32 del) {
    if (self != 0) {
        __destroy_arr(((O_80071EA8 *)self)->b, (void *)free_if_valid__14TPlyDispConfigFis, 4, 4);
        __destroy_arr(((O_80071EA8 *)self)->a, (void *)free_if_valid__14TPlyDispConfigFis, 4, 4);
        if ((s16)del > 0) {
            __dl__FPv(self);
        }
    }
    return self;
}

}
