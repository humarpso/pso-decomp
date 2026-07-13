#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TOHealGeneralFv(void *arg0);

s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TOHangerMachine01__sub_80169168(void *);
M2C_UNK fn_8016916C(void *);
M2C_UNK fn_80169230(void *);
M2C_UNK TObjPlayer__sub_80169334(void *);

void run_task__13TOHealGeneralFv(void *arg0) {
    s32 temp_r0;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOHangerMachine01__sub_80169168(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        TObjPlayer__sub_80169334(arg0);
        return;
    case 1:
        fn_80169230(arg0);
        return;
    case 2:
        fn_8016916C(arg0);
        return;
    }
}

}
