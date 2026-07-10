#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__15TObjEneSlimeOneFiii(s32 arg0, s32 arg1, s32 arg2);
s32 create__15TObjEneSlimeOneFii(s32 arg0, s32 arg1);
s32 TObjControl__ct(s32, s32);
s32 TObjEneSlimeOne__ct(s32, s32, s32, s32, s32);
s32 TObjEneSlimeOne__sub_800EB4A0(s32, s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__15TObjEneSlimeOneFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3F8);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEneSlimeOne__ct(var_r31, var_r4, arg0, arg1, arg2);
    }
    return var_r31;
}

extern s32 tl_04;

s32 create__15TObjEneSlimeOneFii(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3F8);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEneSlimeOne__sub_800EB4A0(var_r31, var_r4, arg0, arg1);
    }
    return var_r31;
}

}
