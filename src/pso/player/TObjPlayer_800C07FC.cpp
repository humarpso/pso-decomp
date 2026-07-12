#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800C07FC(void *arg0);
s32 obj_testFlags30(void *, M2C_UNK);

void TObjPlayer__sub_800C07FC(void *arg0) {
    u16 temp_r4;

    if (!(M2C_FIELD(arg0, s16 *, 0x374) & 0x42) && (obj_testFlags30(arg0, 0xA02) == 0) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 2;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x200000);
        if ((s16) M2C_FIELD(arg0, s16 *, 0x382) != (s32) (temp_r4 = M2C_FIELD(arg0, u16 *, 0x338))) {
            M2C_FIELD(arg0, s16 *, 0x382) = (s16) temp_r4;
            M2C_FIELD(arg0, s16 *, 0x384) = 0;
        } else {
            M2C_FIELD(arg0, s16 *, 0x384) = (s16) (M2C_FIELD(arg0, s16 *, 0x384) + 1);
        }
        M2C_FIELD(arg0, s32 *, 0x388) = 0;
    }
}

}
