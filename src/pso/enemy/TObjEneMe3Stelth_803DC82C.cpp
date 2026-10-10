#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_ginja_draw_list_mask(s32 arg0);

extern s32 ginja_draw_list_mask;

void set_ginja_draw_list_mask(s32 arg0) {
    ginja_draw_list_mask = arg0;
}

}
