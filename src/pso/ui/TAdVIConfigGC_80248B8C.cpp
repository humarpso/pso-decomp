#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 draw_with_layer__13TAdVIConfigGCFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TAdVIConfigGC__sub_80267704(M2C_UNK);
s32 TWindowSubStatusDisp__sub_80248BE8(s32, s32, s32);

s32 draw_with_layer__13TAdVIConfigGCFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    TAdVIConfigGC__sub_80267704(0x23);
    temp_r31 = TWindowSubStatusDisp__sub_80248BE8(arg0, arg1, arg2);
    TAdVIConfigGC__sub_80267704(3);
    return temp_r31;
}

}
