#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__19TObjLazerFenceExtraFv(void *arg0);
M2C_UNK TObjLazerFenceExtra__sub_801926D0();
M2C_UNK TObjLazerFenceExtra__sub_80192774();

void run_task__19TObjLazerFenceExtraFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    switch (temp_r0) {
    case 0:
        TObjLazerFenceExtra__sub_801926D0();
        return;
    case 1:
        TObjLazerFenceExtra__sub_80192774();
        return;
    }
}

}
