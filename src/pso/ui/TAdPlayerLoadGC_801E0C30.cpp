#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_load_state__15TAdPlayerLoadGCFPvPv(void *arg0, void *arg1);
M2C_UNK TAdPlayerLoadGC__sub_803877F8();

void reset_load_state__15TAdPlayerLoadGCFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, s32 *, 0) = 0;
    TAdPlayerLoadGC__sub_803877F8();
}

}
