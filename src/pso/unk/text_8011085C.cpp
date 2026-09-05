#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8011085C(u8 *arg0, s32 arg1);
void fn_801108C8(u8 *arg0, s32 arg1);
}

extern "C" {

void fn_8011085C(u8 *arg0, s32 arg1) {
    M2C_UNK (*temp_r12)(s32);
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    if (arg1 < (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        temp_r6 = M2C_FIELD(arg0, s32 *, 0x20);
        temp_r7 = arg1 * 4;
        temp_r5 = M2C_FIELD(temp_r6, M2C_UNK *, temp_r7);
        if (temp_r5 != 0) {
            M2C_FIELD(temp_r6, M2C_UNK *, temp_r7) = temp_r5 - 1;
            if ((s32) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x20), M2C_UNK *, temp_r7) == 0) {
                temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x28);
                if (temp_r12 != NULL) {
                    temp_r12(arg1);
                }
            }
        }
    }
}
void fn_801108C8(u8 *arg0, s32 arg1) {
    M2C_UNK (*temp_r12)(s32);
    s32 temp_r31;
    s32 temp_r4;
    if (arg1 < (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        temp_r31 = arg1 * 4;
        if ((s32) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x20), M2C_UNK *, temp_r31) == 0) {
            temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x24);
            if (temp_r12 != NULL) {
                temp_r12(arg1);
            }
        }
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x20);
        M2C_FIELD(temp_r4, M2C_UNK *, temp_r31) = M2C_FIELD(temp_r4, M2C_UNK *, temp_r31) + 1;
    }
}

}
