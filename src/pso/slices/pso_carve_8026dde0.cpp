#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80258BF8(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowSubStatusDisp__sub_80223B88(void * a0 = 0);
void fn_8026DE28(void* p, s32 v);

int fn_8026DDE0(void) { return 0; }
void fn_8026DE28(void* p, s32 v) { *(s32*)((char*)p + 0x88) = v; }
void fn_8026DE30(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x72) < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        fn_80258BF8(TWindowSubStatusDisp__sub_80223B88(arg0), arg1, arg2, arg3);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}

}
