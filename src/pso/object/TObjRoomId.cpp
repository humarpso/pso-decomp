#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjRoomId__sub_801A1D94(void *arg0);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, M2C_UNK);

void TObjRoomId__sub_801A1D94(void *arg0) {
    set_state_flags__10TObjPlayerFPvUi(arg0, 0x02000000);
}

}
