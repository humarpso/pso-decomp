#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_8010FD2C(void *);
extern M2C_UNK lbl_8049F41C[];

void *fn_8010F9A8(void *arg0) {
    fn_8010FD2C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F41C;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

}
