#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOMineTrap__sub_801702C8(void);
s32 TObjPlayer__sub_80019248(u32 a0 = 0);
int TOMineTrap__sub_80170340(void);
int TOMineTrap__sub_80170348(void);
void TOMineTrap__sub_80170350(void);
void TOMineTrap__sub_80170354(void);

s32 TOMineTrap__sub_801702C8(void) { return 0; }

}
