#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_from_data__12TCharaMakingFii(M2C_UNK arg0, M2C_UNK arg1);
M2C_UNK TCharaMaking__sub_8028DD18(M2C_UNK, M2C_UNK, f32, M2C_UNK);

extern const f32 TCharaMaking__data_805DD92C;

void setup_from_data__12TCharaMakingFii(M2C_UNK arg0, M2C_UNK arg1) {
    TCharaMaking__sub_8028DD18(arg0, arg1, TCharaMaking__data_805DD92C, 0);
}

}
