#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_80124A34(void *arg0) {
    s32 temp_r0;
    void *temp_r4;
    void *temp_r4_2;

    M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1FC) + 0x1999);
    temp_r4 = M2C_FIELD(arg0, void **, 0x188);
    if (temp_r4 != NULL) {
        temp_r4_2 = M2C_FIELD(temp_r4, void **, 0x2C);
        M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) & 0xFFFFFFFD);
        M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x1FC);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x204);
    switch (temp_r0) {
    case 1:
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 0xE38);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) >= 0) {
            M2C_FIELD(arg0, s32 *, 0x200) = 0;
            M2C_FIELD(arg0, s32 *, 0x204) = 0;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) - 0xE38);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) <= -0x31C7) {
            M2C_FIELD(arg0, s32 *, 0x200) = -0x31C7;
            M2C_FIELD(arg0, s32 *, 0x204) = 3;
            return;
        }
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x204) = 1;
        return;
    }
}

}
