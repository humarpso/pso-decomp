#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 is_map_visible__11TWindowCtrlFv();
s32 __ct__16TObjBagWarnWin4PFv(int, void *);
s32 __nw__7TObjectFUl(int);
s32 fn_8006EBC4(s32 arg0);
}

extern "C" {

s32 fn_8006EBC4(s32 arg0) {
    s32 temp_r3;
    s32 var_r0;
    if (is_map_visible__11TWindowCtrlFv() == 0) {
        temp_r3 = __nw__7TObjectFUl((int) (0xA4));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = __ct__16TObjBagWarnWin4PFv((int) (temp_r3), (void *) (arg0));
        }
        return var_r0;
    }
    return 0;
}

}
