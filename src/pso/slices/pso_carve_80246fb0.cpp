#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80247534();
s32 fn_8024792C(void *);
void free_icon__18TWindowSubShortCutFPv(void* p);
int fn_80247D2C(void*);

void fn_80246FB0(void *arg0) {
    fn_80247534();
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) & 0xFFFFFFFD);
    fn_8024792C(arg0);
}

}
