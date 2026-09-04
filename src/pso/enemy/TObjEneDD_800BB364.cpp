#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_squared_value__9TObjEneDDFf(f32 farg0);
M2C_UNK TObjEneDD__sub_800BB388(f32);

void set_squared_value__9TObjEneDDFf(f32 farg0) {
    TObjEneDD__sub_800BB388(farg0 * farg0);
}

}
