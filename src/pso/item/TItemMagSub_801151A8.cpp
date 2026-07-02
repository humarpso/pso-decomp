#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemMagSub__sub_801151A8(void *arg0);

s32 TItemMagSub__sub_801151A8(void *arg0) {
    s32 temp_r3;
    void **temp_r4_2;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_3;

    temp_r3_2 = M2C_FIELD(arg0, void **, 0x20);
    temp_r4_2 = M2C_FIELD(temp_r3_2, void ***, 0xF8);
    temp_r3 = M2C_FIELD(temp_r3_2, s32 *, 0x60);
    if (temp_r4_2 != NULL) {
        temp_r4_3 = *temp_r4_2;
        if (temp_r4_3 != NULL) {
            temp_r4 = M2C_FIELD(temp_r4_3, void **, 4);
            if (temp_r4 != NULL) {
                return temp_r3 + M2C_FIELD(temp_r4, s16 *, 4);
            }
        }
    }
    return temp_r3;
}

}
