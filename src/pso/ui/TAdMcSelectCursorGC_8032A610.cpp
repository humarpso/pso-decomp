#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 get_instance__19TAdMcSelectCursorGCFi(s32 arg0);
u32 TAdMcSelectCursorGC__ct(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

extern u32 lbl_805D6C94;

u32 get_instance__19TAdMcSelectCursorGCFi(s32 arg0) {
    u32 var_r0;

    if ((u32) lbl_805D6C94 == 0U) {
        var_r0 = __nw__7TObjectFUl(0x140);
        if (var_r0 != 0U) {
            var_r0 = TAdMcSelectCursorGC__ct(var_r0, arg0);
        }
        lbl_805D6C94 = var_r0;
    }
    return lbl_805D6C94;
}

}
