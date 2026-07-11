#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemLoad__sub_801103F4(s16);
s32 TObjPlayer__sub_8001972C();
void TItemEquipBase__sub_8010B620(void);

int TItemEquipBase__sub_8010B58C(void* a0 = 0, void* a1 = 0) { return 0; }

}
