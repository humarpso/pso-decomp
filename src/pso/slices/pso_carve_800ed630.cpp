#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Bit__vt86(void *arg0);
int VecCopy__FP3VecPC3Vec(void*, void*);
void TObjEneRe4Bit__vt59(void);
void TObjEneRe4Bit__vt26(void);

int TObjEneRe4Bit__vt60(void) { return 0; }
int TObjEneRe4Bit__vt61(void) { return 0; }

}
