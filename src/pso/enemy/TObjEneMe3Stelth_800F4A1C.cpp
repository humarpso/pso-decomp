#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 check_target_in_range__16TObjEneMe3StelthFPv(void *arg0);
void TObjEneMe3Stelth__sub_800F4A8C(void);
s32 TObjEneMe3Stelth__sub_800F4CC8(void *, s32, f32);

extern f32 TObjEneMe3Stelth__data_805DA844;
extern f32 lbl_805DA898;
extern f32 lbl_805DA89C;

u8 check_target_in_range__16TObjEneMe3StelthFPv(void *arg0) {
    f32 temp_f1;
    s32 var_r31;

    var_r31 = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 0x10000)) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3AC);
        if ((temp_f1 > lbl_805DA898) && (temp_f1 < lbl_805DA89C) && (TObjEneMe3Stelth__sub_800F4CC8(arg0, M2C_FIELD(arg0, s32 *, 0x60), temp_f1 - TObjEneMe3Stelth__data_805DA844) == 0)) {
            var_r31 = 1;
        }
    }
    return (u8)var_r31;
}

void TObjEneMe3Stelth__sub_800F4A8C(void) {  }

}
