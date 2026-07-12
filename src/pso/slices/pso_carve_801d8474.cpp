#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801D8664(s32, s16, s16);
s32 TObjPlayer__sub_801D86D8(s32, s16);
void *TObjPlayer__sub_801D8E1C();
s32 TObjPlayer__sub_801D84A8(void* p);
int TObjPlayer__sub_801D84CC(void* p);
s32 TObjPlayer__sub_801D84F0(void* p);
int bswap_16__FPUs(void*);

int TObjPlayer__sub_801D8474(void) { return 0; }

}
