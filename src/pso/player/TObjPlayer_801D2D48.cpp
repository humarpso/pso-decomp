#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_801D2D48(void* p);
int TObjPlayer__sub_801D2D6C(void* p);
void TObjPlayer__sub_801D2DA4(void* p, s32 v);
s32 TObjPlayer__sub_801D2DAC(void* p);
int fn_8001BED8(void*, int);
int fn_8012ADD4(void*);
s32 fn_801D3424(void *, s32);

int TObjPlayer__sub_801D2D48(void* p) { return fn_8012ADD4((char*)p + 0x30); }
int TObjPlayer__sub_801D2D6C(void* p) { return fn_8001BED8((char*)p + 0xc, 1); }

}
