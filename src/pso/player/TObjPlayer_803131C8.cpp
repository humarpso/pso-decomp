#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TObjPlayer__sub_80313138(void* a0 = 0);

void fn_80313250(void *arg0, s32 arg1);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
int fn_80313260(void* a0 = 0);
void TObjPlayer__sub_803130BC(void* p);
int TObjPlayer__sub_80313184(void* p);
int TObjPlayer__sub_803131AC(void);
int fn_803131F0(void* p);
int fn_80313218(void* p);
void fn_80313248(void* p, s16 v);
int TObjPlayer__sub_8001BED8(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);

void TObjPlayer__sub_803131C8(s32 arg0, s32 arg1) {
    TObjPlayer__sub_80313138((void*)(arg0 + (arg1 * 0x18)));
}

}
