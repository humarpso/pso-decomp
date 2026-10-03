#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct Bank_801D7BF4 { s32 pad; s32 a[4]; s32 b[4]; } Bank_801D7BF4;

extern "C" {
u8 get_type__11TMainCursorFPv(void *);
s32 is_pb_palette_bank_empty(Bank_801D7BF4 *arg0, s32 arg1);
}

extern "C" {

s32 is_pb_palette_bank_empty(Bank_801D7BF4 *arg0, s32 arg1) {
    s32 i;
    s32 *p;
    if (arg1 == 0) {
        p = arg0->a;
    } else {
        p = arg0->b;
    }
    for (i = 0; i < 4; i++, p++) {
        if (get_type__11TMainCursorFPv(p) != 0) {
            return 0;
        }
    }
    return 1;
}

}
