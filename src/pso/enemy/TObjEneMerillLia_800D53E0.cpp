#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMerillLia__sub_800D53E0(void *arg0);

M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void TObjEneMerillLia__sub_800D53E0(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 4) {
        if (temp_r0 < 4) {
            if (temp_r0 < 3) {
                if (temp_r0 >= 0) {
                    goto block_end;
                }
                goto block_7;
            } else {
                goto block_7;
            }
        } else if ((temp_r0 >= 0xE) || (temp_r0 < 0xB)) {
block_7:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
                M2C_FIELD(arg0, s16 *, 0x326) = 0;
            } else {
                M2C_FIELD(arg0, s16 *, 0x326) = 1;
            }
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            obj_setFlags30(arg0, 0x04040000);
            set_indexed_flags(arg0, 0, 0x0A000000);
        }
    }
block_end:
    ;
}

}
