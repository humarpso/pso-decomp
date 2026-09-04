#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_forward_default__10TObjPlayerFv(void);
M2C_UNK init_forward__10TObjPlayerFPv(M2C_UNK *);

extern M2C_UNK lbl_805D53EC;

void init_forward_default__10TObjPlayerFv(void) {
    init_forward__10TObjPlayerFPv(&lbl_805D53EC);
}

}
