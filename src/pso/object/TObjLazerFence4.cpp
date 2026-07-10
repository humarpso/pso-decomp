#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__15TObjLazerFence4Fv(void *arg0);
M2C_UNK reset_if_door_closed__15TObjLazerFence4FPv();
M2C_UNK TObjLazerFence4__sub_801933C8();

void run_task__15TObjLazerFence4Fv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        TObjLazerFence4__sub_801933C8();
        return;
    case 1:
        reset_if_door_closed__15TObjLazerFence4FPv();
        return;
    }
}

}
