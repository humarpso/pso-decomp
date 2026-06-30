#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
u16 TCameraCtrl__sub_8006A5DC();
void *TCameraCtrl__sub_8006C1F0();
M2C_UNK fn_801A73B0(f32);
extern f32 lbl_805DC0D4;

void fn_801A7A78(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xFC);
    switch (temp_r0) {
    case 0:
        fn_801A73B0(lbl_805DC0D4);
        return;
    case 1:
        if ((M2C_FIELD(TCameraCtrl__sub_8006C1F0(), u16 *, 2) & 1) || (TCameraCtrl__sub_8006A5DC() != 5)) {
            queue_destruction__7TObjectFv(arg0);
        }
        return;
    }
}

}
