#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80103BFC(s32, s32);
M2C_UNK fn_8011B1CC();

void handle_6x5C_destroy_floor_item(void *arg0) {
    fn_8011B1CC();
    fn_80103BFC(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 4));
}

}
