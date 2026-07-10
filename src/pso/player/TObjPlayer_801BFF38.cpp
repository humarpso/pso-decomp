#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjPlayer__sub_801BFF38(u8 *arg0);
M2C_UNK fn_80072004(void *);

extern M2C_UNK lbl_804C3E50[];

u8 *TObjPlayer__sub_801BFF38(u8 *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = lbl_804C3E50;
    fn_80072004(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return arg0;
}

}
