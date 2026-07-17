#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void trigger_effect__12TBoss8DragonFPvi(void *arg0, s32 arg1);
M2C_UNK fn_800666C4(s32);

void trigger_effect__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    fn_800666C4(arg1 + 0x14);
}

}
