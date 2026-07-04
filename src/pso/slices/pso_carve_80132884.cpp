#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80132824(s32);
M2C_UNK fn_803F0C50();
M2C_UNK fn_803F1864(M2C_UNK *);
extern M2C_UNK fn_801320CC[];

void fn_80132884(s32 arg0) {
    fn_803F0C50();
    fn_80132824(arg0);
    fn_803F1864(fn_801320CC);
}

}
