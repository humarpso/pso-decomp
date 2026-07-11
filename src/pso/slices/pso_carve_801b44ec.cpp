#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK TObjPlayer__sub_801C0A00(void *);
M2C_UNK set_code_50_1__10TObjPlayerFPv(void *);

struct S801B44EC { s8 b[2]; s16 h; };
void fn_801B44EC(s32 arg0) {
    struct S801B44EC sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_50_1__10TObjPlayerFPv(&sp8);
        sp8.h = obj_getField1c(arg0);
        TObjPlayer__sub_801C0A00(&sp8);
    }
}

}
