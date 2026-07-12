#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_matching_id__10TObjPlayerFPvs(void *arg0, s16 arg1);
s32 TObjPlayer__sub_8012121C();

s32 is_matching_id__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if ((TObjPlayer__sub_8012121C() != 0) && (arg1 == (s16) M2C_FIELD(arg0, s16 *, 0xBC))) {
        return 1;
    }
    return 0;
}

}
