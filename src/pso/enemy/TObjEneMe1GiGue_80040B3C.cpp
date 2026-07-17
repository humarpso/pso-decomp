#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_if_active__15TObjEneMe1GiGueFPv(void *arg0);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi();

void update_if_active__15TObjEneMe1GiGueFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 1)) {
        set_state__15TObjEneMe1GiGueFPvi();
    }
}

}
