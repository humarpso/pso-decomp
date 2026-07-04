#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80070AB0();
M2C_UNK fn_800727A0(void *);
extern M2C_UNK lbl_8048C9D8[];

void handle_6x97_select_challenge_mode_failure_option(void *arg0) {
    s32 var_r0;

    if (fn_80070AB0() != 0) {
        fn_800727A0(arg0);
        var_r0 = M2C_FIELD(arg0, s32 *, 8);
        if ((var_r0 < 0) || (var_r0 > 1)) {
            var_r0 = 0;
        }
        M2C_FIELD(&lbl_8048C9D8, s32 *, 0x24) = var_r0;
    }
}

}
