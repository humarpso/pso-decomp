#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80247534();
s32 fn_8024792C(void *);
void TWindowSubShortCut__sub_80246FF0(void* p);
int fn_80247D2C(void*);

int fn_8024701C(void) { return 0; }
int fn_80247080(void) { return 0; }
int fn_80247128(void) { return 0; }
int fn_802471AC(void) { return 0; }

}
