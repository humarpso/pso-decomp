#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8023F7DC(M2C_UNK *, s32);
M2C_UNK fn_803C90E4(M2C_UNK);
extern M2C_UNK lbl_80514F64[];

void fn_80227C44(s32 arg0) {
    switch (arg0) {
    case 0:
        fn_803C90E4(1);
        break;
    case 1:
        fn_803C90E4(0);
        break;
    case 2:
        fn_803C90E4(0);
        break;
    }
    fn_8023F7DC(lbl_80514F64, arg0);
}

}
