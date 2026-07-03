#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 * TWindowSubStatusDisp__sub_80223B88(void * a0 = 0, s32 a1 = 0);
s32 fn_8011D098(s32 a0 = 0, s32 a1 = 0);
int fn_802627D8(void* p);
int fn_802627E4(void* p);
int fn_802627F0(void* p);
int fn_802627FC(void* p);
int fn_80262808(void* p);

int fn_8026287C(void) { return 0; }

}
