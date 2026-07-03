#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss4Type2__sub_80141FA8(s32);
void TObjEneMorfos__vt59(void);

int TObjEneMorfos__sub_80334884(void) { return 0; }
int TObjEneMorfos__sub_803348F0(void) { return 0; }

}
