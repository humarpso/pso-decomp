#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_6x87_shrink__10TObjPlayerFPvf(u8 *arg0, f32 farg0);
M2C_UNK TObjPlayer__sub_8001BED8(void *, int);

void handle_6x87_shrink__10TObjPlayerFPvf(u8 *arg0, f32 farg0) {
    TObjPlayer__sub_8001BED8(arg0 + 4, 1);
    M2C_FIELD(arg0, f32 *, 8) = farg0;
}

}
