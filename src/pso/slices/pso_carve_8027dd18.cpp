#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8027E3B4(s32 a0 = 0, s32 a1 = 0);
s32 fn_8026CBB8(s32 a0 = 0);
void TWindowSubShortCut__vt2(void);

void fn_8027DD18(void *arg0) {
    s32 tmp = fn_8026CBB8(0x72);
    fn_8027E3B4(tmp, M2C_FIELD(arg0, s32 *, 0x24));
}
void TWindowSubShortCut__vt2(void) {  }

}
