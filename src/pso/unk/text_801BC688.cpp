#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801BC688 { char pad[8]; };

struct VObj_801BC688 : Base_801BC688 { virtual void m0(); virtual void m1(int); };

extern "C" {
void TObjPlayer__sub_801BC688(void *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_801BC688(void *arg0) {
    void *temp_r3;
    temp_r3 = M2C_FIELD(arg0, void **, 0x380);
    if (temp_r3 != NULL) {
        ((VObj_801BC688 *)temp_r3)->m1(1);
    }
}
#pragma pop

}
