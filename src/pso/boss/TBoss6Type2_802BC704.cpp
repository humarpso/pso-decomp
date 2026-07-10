#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_screen_pos__11TBoss6Type2FPv(void *arg0);

extern M2C_UNK lbl_804DF9D4[];
extern f32 lbl_805DE4B4;

void set_screen_pos__11TBoss6Type2FPv(void *arg0) {
    f32 var_f0;
    f32 var_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x424) != 0) {
        var_f1 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4E0);
        var_f0 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4E4);
    } else {
        var_f1 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4D8);
        var_f0 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4DC);
    }
    M2C_FIELD(lbl_804DF9D4, f32 *, 0x2C) = var_f1;
    M2C_FIELD(lbl_804DF9D4, f32 *, 0x3C) = var_f1;
    M2C_FIELD(lbl_804DF9D4, f32 *, 0xEC) = var_f0;
}

}
