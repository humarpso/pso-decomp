#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void update_fade_state__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void update_fade_state__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1FC);
    if (temp_r0 == 2) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x1F8);
        if (temp_r4 < 0x2AAA) {
            M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (temp_r4 + 0x888);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) >= 0x2AAA) {
                M2C_FIELD(arg0, s32 *, 0x1F8) = 0x2AAA;
                M2C_FIELD(arg0, s32 *, 0x1FC) = 3;
            }
        }
    } else if (temp_r0 == 1) {
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x1F8);
        if (temp_r4_2 > 0) {
            M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (temp_r4_2 - 0x444);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
                M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
            }
        }
    }
}

}
