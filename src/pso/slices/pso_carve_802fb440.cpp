#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802FB170(s32, M2C_UNK *);
M2C_UNK fn_802FBE3C();
M2C_UNK fn_802FBF40(s32);
extern M2C_UNK lbl_804744DC[];

void fn_802FB440(s32 arg0) {
    fn_802FBE3C();
    fn_802FB170(arg0, lbl_804744DC);
    fn_802FBF40(arg0);
}

}
