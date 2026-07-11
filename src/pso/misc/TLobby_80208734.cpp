#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void invoke_command__6TLobbyFi(s32 arg0);

extern u8 lbl_804C93A8[];

void invoke_command__6TLobbyFi(s32 arg0) {
    u8 *temp_r3 = lbl_804C93A8;
    temp_r3 += ((u8)arg0) * 8;

    M2C_FIELD(temp_r3, M2C_UNK (**)(void *), 4)(temp_r3);
}

}
