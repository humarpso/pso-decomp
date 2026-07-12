#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 ret_801D26AC(void);
s32 TObjPlayer__sub_801D0BC0(void * a0 = 0, s16 a1 = 0, s32 a2 = 0);
s32 TObjPlayer__sub_801BE4A8(void * a0 = 0);
s32 TObjPlayer__sub_801BA650(void * a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_isState2_324(void * a0 = 0);
s32 apply_velocity__10TObjPlayerFPv(s32);
u32 TObjPlayer__sub_801B5EA4();
s32 TObjPlayer__sub_801D0888();
void TObjPlayer__sub_801CB424(void);
void TObjPlayer__sub_801CB52C(void);
void TObjPlayer__sub_801CB55C(void);
int TObjPlayer__sub_801CB560(void* p);
int TObjPlayer__sub_801BA2F4(void*);

int TObjPlayer__sub_801CB4D0(void) { return 0; }

}
