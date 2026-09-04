#include "pso/TObjWarpString.h"

TObjWarpString::~TObjWarpString() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__14TObjWarpStringFv(void *arg0);
M2C_UNK TObjWarpString__sub_8019B6E4();
M2C_UNK TObjWarpString__sub_8019B728();
M2C_UNK TObjWarpString__sub_8019B744();
M2C_UNK TObjWarpString__sub_8019B77C();

void run_task__14TObjWarpStringFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
    switch (temp_r0) {
    case 0:
        TObjWarpString__sub_8019B77C();
        return;
    case 1:
        TObjWarpString__sub_8019B744();
        return;
    case 2:
        TObjWarpString__sub_8019B728();
        return;
    case 3:
        TObjWarpString__sub_8019B6E4();
        return;
    }
}

}
