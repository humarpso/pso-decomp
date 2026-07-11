#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_count_below_limit__15TObjBoss1CraterFv(void);

extern s32 lbl_805D4B58;

s32 is_count_below_limit__15TObjBoss1CraterFv(void) {
    return lbl_805D4B58 < 0x14;
}

}
