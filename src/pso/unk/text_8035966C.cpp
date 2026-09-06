#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_instance__15TWindowCtrlMainFv();
s32 __nw__7TObjectFUl(int);
s32 __ct__10TBoss4FadeFv(int, int);
extern s32 tl_clipout;
s32 fn_8035966C(void);
}

extern "C" {

s32 fn_8035966C(void) {
    s32 temp_r3;
    s32 var_r0;
    s32 var_r31;
    var_r31 = get_instance__15TWindowCtrlMainFv();
    if (var_r31 == 0) {
        var_r31 = tl_clipout;
    }
    temp_r3 = __nw__7TObjectFUl((int) (0x38));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = __ct__10TBoss4FadeFv((int) (temp_r3), (int) (var_r31));
    }
    return var_r0;
}

}
