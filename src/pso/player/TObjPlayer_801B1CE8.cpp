#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_field_state_if_active__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 fn_80055694(s32);
s32 fn_801AFF0C();
M2C_UNK fn_8022675C(s32, s32, M2C_UNK, M2C_UNK);

void send_field_state_if_active__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (fn_801AFF0C() != 0) {
        fn_8022675C(arg1, fn_80055694(arg0), 0, 0);
    }
}

}
