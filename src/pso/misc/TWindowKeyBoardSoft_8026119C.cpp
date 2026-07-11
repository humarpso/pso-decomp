#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_focus_flags__19TWindowKeyBoardSoftFPv(void *arg0);

extern s32 lbl_805D5544;

void update_focus_flags__19TWindowKeyBoardSoftFPv(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_2;

    if ((s32) lbl_805D5544 != 0) {
        if ((s32) lbl_805D5544 < 0) {
            return;
        }
        return;
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x64) == 0) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x6C);
        M2C_FIELD(temp_r4, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r4, s32 *, 0xB4) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0x6C);
        M2C_FIELD(temp_r3, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r3, s32 *, 0xB4) & 0xFFFFFFBF);
        return;
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x6C);
    M2C_FIELD(temp_r4_2, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0xB4) & 0xFFFFFFFE);
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x6C);
    M2C_FIELD(temp_r3_2, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0xB4) | 0x40);
}

}
