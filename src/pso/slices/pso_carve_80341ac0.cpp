#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowDD__sub_80341AC0(void);
void TWindowDD__sub_80341B10(void* p);
void TWindowDD__sub_80341B1C(void* p);

s32 TWindowDD__sub_80341AC0(void) { return 0; }
int TWindowDD__sub_80341AE0(void) { return 0; }
int TWindowDD__sub_80341AF8(void) { return 0; }

}
