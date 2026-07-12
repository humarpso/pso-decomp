#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_target_id__10TObjPlayerFPvi(void *arg0, s32 arg1);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
s32 obj_testFlags30(void *, M2C_UNK);

void set_target_id__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 2);
        M2C_FIELD(arg0, s32 *, 0x3A8) = arg1;
    }
}

}
