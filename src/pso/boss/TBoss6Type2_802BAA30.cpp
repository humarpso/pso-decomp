#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_802BAA30(void *arg0);
M2C_UNK set_screen_pos__11TBoss6Type2FPv();

extern f32 lbl_805DE448;

void TBoss6Type2__sub_802BAA30(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x424) == 0) && (M2C_FIELD(arg0, f32 *, 0x500) < lbl_805DE448)) {
        M2C_FIELD(arg0, s32 *, 0x424) = 1;
        set_screen_pos__11TBoss6Type2FPv();
    }
}

}
