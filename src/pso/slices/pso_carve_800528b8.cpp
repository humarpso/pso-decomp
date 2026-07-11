#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_boss4_scale__10TObjPlayerFi();
M2C_UNK fn_80053504(void *);
M2C_UNK fn_800535A8(void *);
extern f32 lbl_805D8B08;

void fn_800528B8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (calc_boss4_scale__10TObjPlayerFi() < lbl_805D8B08) {
            fn_800535A8(arg0);
            return;
        }
        fn_80053504(arg0);
    }
}

}
