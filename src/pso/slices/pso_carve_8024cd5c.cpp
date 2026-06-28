#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TWindowCtrlMain__sub_8024CC8C(void);
int fn_8024CDB0(void* p);
int fn_8024CDD0(void*);

s32 fn_8024CD5C(void) {
    return M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), s32 *, 4);
}
void fn_8024CD80(s32 arg0, s32 arg1) {
    M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), s32 *, 4) = arg1;
}
int fn_8024CDB0(void* p) { return fn_8024CDD0(p); }

}
