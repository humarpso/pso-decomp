#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8036A174(void *);
M2C_UNK fn_8036A1AC(u32);

void fn_8036A064(void *arg0) {
    u32 temp_r3;
    void *temp2_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x1C);
        if (temp_r3 != 0U) {
            M2C_FIELD(arg0, u32 *, 0x1C) = (u32) (temp_r3 - 1);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
                temp2_r3 = M2C_FIELD(arg0, void **, 0x20);
                if ((u32) temp2_r3 != 0U) {
                    fn_8036A174(temp2_r3);
                }
            }
        }
        fn_8036A1AC(M2C_FIELD(arg0, u32 *, 0x20));
    }
}

}
