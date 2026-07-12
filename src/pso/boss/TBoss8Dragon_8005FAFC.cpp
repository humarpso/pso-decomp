#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_motion_entry__12TBoss8DragonFPv(void *arg0);
void TBoss8Dragon__sub_8005FB3C(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, s16);

void advance_motion_entry__12TBoss8DragonFPv(void *arg0) {
    s16 *ptr;
    ptr = (s16 *) (M2C_FIELD(arg0, s32 *, 0x4BC) + 0x14);
    M2C_FIELD(arg0, s32 *, 0x4BC) = (s32) ptr;
    ptr = (s16 *) M2C_FIELD(arg0, s32 *, 0x4BC);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != *ptr) {
        TObjEneDD__sub_800BBA18(arg0, *ptr);
    }
}

void TBoss8Dragon__sub_8005FB3C(void *arg0) {
    int temp_r4;
    void *temp_r5;
    void *temp_r4b;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 4) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x4BC);
        temp_r4 = (s16) M2C_FIELD(temp_r5, s16 *, 2);
        if (temp_r4 > 0) {
            M2C_FIELD(temp_r5, s16 *, 2) = (s16) (temp_r4 - 1);
            temp_r4b = M2C_FIELD(arg0, void **, 0x4BC);
            if (M2C_FIELD(temp_r4b, s16 *, 2) == 0) {
                advance_motion_entry__12TBoss8DragonFPv((void *)(arg0));
            }
        }
    }
}

}
