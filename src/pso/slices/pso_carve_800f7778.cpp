#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80018FE0(void *, M2C_UNK);
M2C_UNK TObjEnemy__sub_800F790C(void *);
M2C_UNK TObjEnemy__sub_8020C3E0(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
extern M2C_UNK __vt__9TObjEnemy[];

void *__dt__9TObjEnemyFv(void *arg0, s16 arg1) {
    u16 temp_r0;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TObjEnemy;
        TObjEnemy__sub_800F790C(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            temp_r0 = M2C_FIELD(arg0, u16 *, 0x1C);
            if ((temp_r0 >= 0x1000U) && (temp_r0 < 0x4000U)) {
                TObjEnemy__sub_8020C3E0(arg0, -3);
                M2C_FIELD(arg0, u32 *, 0x80) = 0U;
            }
        }
        fn_80018FE0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
