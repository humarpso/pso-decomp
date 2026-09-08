#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK GXLoadPosMtxImm(int, int);
extern s32 lbl_805D7774;
void load_camera_view_matrix(void);
}

extern "C" {

#pragma push
#pragma scheduling off
void load_camera_view_matrix(void) {
    s32 var_r3;
    s32 var_r4;
    var_r3 = lbl_805D7774;
    var_r4 = 0;
    GXLoadPosMtxImm((int) (var_r3), (int) (0));
}
#pragma pop

}
