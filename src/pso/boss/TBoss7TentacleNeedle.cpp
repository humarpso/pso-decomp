#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7TentacleNeedle__vt1(void *arg0);

M2C_UNK fn_802EF954();
M2C_UNK fn_802EF99C();
M2C_UNK fn_802EFB1C();
M2C_UNK fn_802EFBA4();

void TBoss7TentacleNeedle__vt1(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x38);
    switch (temp_r0) {
    case 0:
        fn_802EFBA4();
        return;
    case 1:
        fn_802EFB1C();
        return;
    case 2:
        fn_802EF99C();
        return;
    case 3:
        fn_802EF954();
        return;
    }
}

}
