#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field_value__17TWindowOptionCtrlFis(s32 arg0, s16 arg1);
void *get_global_state__23TAdSinglePlyChrSelectGCFv();

void set_field_value__17TWindowOptionCtrlFis(s32 arg0, s16 arg1) {
    M2C_FIELD(get_global_state__23TAdSinglePlyChrSelectGCFv(), s16 *, 0xC) = arg1;
}

}
