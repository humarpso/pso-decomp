#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80132150(M2C_UNK *);
s32 fn_801A5998(s32);
extern M2C_UNK TKeyBoardControl__data_80506270[];

s32 fn_801A5900(s32 arg0) {
    if (fn_80132150(TKeyBoardControl__data_80506270) != 0) {
        return fn_801A5998(arg0);
    }
    return 0;
}

}
