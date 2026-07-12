#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cancel_action__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_800AB464();
M2C_UNK TObjPlayer__sub_800A3284(u32);

void cancel_action__10TObjPlayerFPv(void *arg0) {
    if (TObjPlayer__sub_800AB464() != 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD0) != 0U) {
            TObjPlayer__sub_800A3284(M2C_FIELD(arg0, u32 *, 0xD0));
        }
        M2C_FIELD(arg0, s16 *, 0xAE) = 2;
    }
}

}
