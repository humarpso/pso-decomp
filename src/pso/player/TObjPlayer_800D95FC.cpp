#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_800D95FC(void *arg0);

extern f32 lbl_805DA3DC;

s32 TObjPlayer__sub_800D95FC(void *arg0) {
    f32 temp_f1;
    s32 var_r0;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0);
    var_r0 = 0;
    if (temp_f1 < lbl_805DA3DC) {
        M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x10));
    } else {
        M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_805DA3DC;
        var_r0 = 1;
    }
    return var_r0;
}

}
