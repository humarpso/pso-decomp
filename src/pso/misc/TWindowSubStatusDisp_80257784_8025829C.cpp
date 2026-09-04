#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_stat_line_if_positive__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
M2C_UNK update_stat_line__20TWindowSubStatusDispFPvi(void *);

void update_stat_line_if_positive__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    if (arg1 > 0) {
        update_stat_line__20TWindowSubStatusDispFPvi(arg0);
    }
}

}
