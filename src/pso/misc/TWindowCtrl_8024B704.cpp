#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_all_default__11TWindowCtrlFPv(void *arg0);
M2C_UNK init_all__11TWindowCtrlFPvPv(void *, M2C_UNK);

void init_all_default__11TWindowCtrlFPv(void *arg0) {
    init_all__11TWindowCtrlFPvPv(arg0, 0);
}

}
