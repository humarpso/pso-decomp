#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801D0888();
void TObjPlayer__sub_801CB7A4(void);
void TObjPlayer__sub_801CB7D4(void);
int TObjPlayer__sub_801CB7D8(void* p);
int TObjPlayer__sub_801BA2F4(void*);

int TObjPlayer__sub_801CB748(void) { return 0; }

}
