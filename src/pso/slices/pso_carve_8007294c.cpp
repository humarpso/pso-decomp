#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80072910();
M2C_UNK TLobby__send_and_handle_60(s32);

void fn_8007294C(s32 arg0) {
    fn_80072910();
    TLobby__send_and_handle_60(arg0);
}

}
