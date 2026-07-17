#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_alt_model_flag__10TObjPlayerFv(void);
M2C_UNK set_global_pair__10TObjPlayerFii(M2C_UNK, M2C_UNK);

extern s32 some_id_805c6f74;

void clear_alt_model_flag__10TObjPlayerFv(void) {
    some_id_805c6f74 &= 0xFFFFF7FF;
    set_global_pair__10TObjPlayerFii(0xFF00, 0);
}

}
