#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_and_notify__6TLobbyFPv(void *arg0);

void set_flag_and_notify__6TLobbyFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x400);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x41C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x420));
    }
}

}
