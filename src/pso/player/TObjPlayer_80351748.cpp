#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_target_field_1c__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_803519CC();

s32 get_target_field_1c__10TObjPlayerFPv(void *arg0) {
    if ((void *) M2C_FIELD(arg0, void **, 0xC) == NULL) {
        return 0;
    }
    if (TObjPlayer__sub_803519CC() != 0) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x1C);
    }
    return 0;
}

}
