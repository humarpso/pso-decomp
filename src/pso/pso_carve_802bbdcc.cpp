#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802BBD40(void *);
M2C_UNK fn_802BBD5C(void *);
M2C_UNK fn_802BBD88();

void fn_802BBDCC(void *arg0) {
    fn_802BBD88();
    if (M2C_FIELD(arg0, s32 *, 0x474) & 1) {
        fn_802BBD5C(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x474) & 2) {
        fn_802BBD40(arg0);
    }
}

}
