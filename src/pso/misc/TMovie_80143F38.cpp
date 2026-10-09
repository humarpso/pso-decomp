#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_stop__6TMovieFPv(void *arg0);

M2C_UNK stop_if_advanced__6TMovieFPv();
M2C_UNK check_finished__6TMovieFPv();

void update_stop__6TMovieFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
        check_finished__6TMovieFPv();
        return;
    }
    stop_if_advanced__6TMovieFPv();
}

}
