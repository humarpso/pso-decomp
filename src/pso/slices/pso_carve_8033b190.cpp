#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8006EF6C(s32);
s32 fn_80269C6C(s32, s32, s32);
int fn_8033B244(void* p);
int fn_8000F9B0(void*);

int fn_8033B190(void) { return 0; }
void fn_8033B1E0(void *arg0, s32 arg1, s32 arg2) {
    fn_80269C6C(M2C_FIELD(arg0, s32 *, 0x38), fn_8006EF6C(arg1), 1);
    if (arg2 != -1) {
        fn_80269C6C(M2C_FIELD(arg0, s32 *, 0x38), fn_8006EF6C(arg2), 8);
    }
}
int fn_8033B244(void* p) { return fn_8000F9B0(p); }

}
