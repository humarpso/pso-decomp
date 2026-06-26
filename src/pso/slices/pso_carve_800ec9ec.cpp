#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800EC9EC(s32 arg0, s16 arg1);
int __dl__FPv();
void fn_800ECA28(void *arg0, s32 arg1);
void TObjEneRe4Bit__vt104(void);
void TObjEneRe4Bit__vt103(void);

s32 fn_800EC9EC(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void fn_800ECA28(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
}
void TObjEneRe4Bit__vt104(void) {  }
void TObjEneRe4Bit__vt103(void) {  }

}
