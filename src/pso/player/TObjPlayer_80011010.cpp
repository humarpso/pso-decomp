#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_800109B0(void *, s32);
s32 obj_getArrU16_FC(s32, s32);
s32 is_split_screen();
s32 obj_getField1c(u32);
void fn_80010EBC(void);
void fn_80010EC0(void);
void fn_80010EC4(void);
void fn_80010EC8(void);
u16 fn_80010F4C(void* p);
void TObjPlayer__sub_80011010(void);

void TObjPlayer__sub_80011010(void) {  }

}
