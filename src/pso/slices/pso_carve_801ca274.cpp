#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK fn_801D18B0(void *);
M2C_UNK fn_801D18C4(void *);

struct S801CA274 { s8 b[2]; s16 h; };
void fn_801CA274(s32 arg0) {
    struct S801CA274 sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        fn_801D18B0(&sp8);
        sp8.h = obj_getField1c(arg0);
        fn_801D18C4(&sp8);
    }
}

}
