#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_matching_id__10TObjPlayerFPvs(void *arg0, s16 arg1);
s32 is_flag_b0_4__10TObjPlayerFPv();

s32 is_matching_id__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if ((is_flag_b0_4__10TObjPlayerFPv() != 0) && (arg1 == (s16) M2C_FIELD(arg0, s16 *, 0xBC))) {
        return 1;
    }
    return 0;
}

}
