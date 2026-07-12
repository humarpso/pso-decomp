#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubComCard__sub_8007ABE4(void);
M2C_UNK TWindowSubComCard__sub_8007A8F8(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8007AB84(M2C_UNK, M2C_UNK);

void TWindowSubComCard__sub_8007ABE4(void) {
    TWindowSubComCard__sub_8007AB84(TWindowSubComCard__sub_8007A8F8(0), 0xD2);
}

}
