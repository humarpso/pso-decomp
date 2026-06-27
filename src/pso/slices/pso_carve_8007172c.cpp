#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubComCard__sub_80202990(M2C_UNK);

s16 TObjOnlineEnding__sub_8007172C(void) {
    if (TWindowSubComCard__sub_80202990(0xFFFF) == NULL) {
        return 0x3E7;
    }
    return M2C_FIELD(TWindowSubComCard__sub_80202990(0xFFFF), s16 *, 0x2228);
}

}
