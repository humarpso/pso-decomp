#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803F1548_lbl_805A2720 {
    M2C_UNK value;
    u8 remaining[0x19C];
};

struct RecoveredGlobal_803F0CF4_lbl_805A2720 {
    M2C_UNK value;
    u8 remaining[0x19C];
};

extern "C" {
extern RecoveredGlobal_803F1548_lbl_805A2720 lbl_805A2720;
u8 TKeyBoardControl__sub_803F1548(s32 arg0);
extern RecoveredGlobal_803F1548_lbl_805A2720 lbl_805A2720;
void TKeyBoardControl__sub_803F0CF4(s32 arg0, u32 arg1);
s32 SIDisablePolling(u32);
extern s32 lbl_805D793C;
void TKeyBoardControl__sub_803F15C4(s32 arg0);
extern s32 lbl_805D793C;
extern s32 lbl_805D7930;
void TKeyBoardControl__sub_803F15C4(s32 arg0);
s32 TKeyBoardControl__sub_803F0F44(void);
}

extern "C" {

void TKeyBoardControl__sub_803F0E8C(void);

typedef char RecoveredGlobal_803F0CF4_lbl_805A2720_size[sizeof(RecoveredGlobal_803F0CF4_lbl_805A2720) == 0x1A0 ? 1 : -1];
void TKeyBoardControl__sub_803F0CF4(s32 arg0, u32 arg1) {
    struct Fields_temp_r4 { s8 field_0; s8 field_1; u8 pad_2[38]; s32 field_28; s32 field_2C; };
    s32 temp_r0;
    u32 temp_r6;
    u8 *temp_r4;
    temp_r6 = arg1 >> 0x10U;
    temp_r0 = (arg1 >> 0x10U) & 0xFFF0;
    temp_r4 = (u8 *)&(*(RecoveredGlobal_803F0CF4_lbl_805A2720 *)&lbl_805A2720).value + (arg0 * 0x68);
    switch (temp_r0) {
    case 0x820:
        ((Fields_temp_r4*)temp_r4)->field_0 = 1;
        ((Fields_temp_r4*)temp_r4)->field_1 = (s8) (temp_r6 & 0xF);
        ((Fields_temp_r4*)temp_r4)->field_2C = 0;
        ((Fields_temp_r4*)temp_r4)->field_28 = 0;
        return;
    case 0x830:
        ((Fields_temp_r4*)temp_r4)->field_0 = 2;
        ((Fields_temp_r4*)temp_r4)->field_1 = (s8) (temp_r6 & 0xF);
        ((Fields_temp_r4*)temp_r4)->field_2C = 0;
        ((Fields_temp_r4*)temp_r4)->field_28 = 0;
        return;
    default:
        ((Fields_temp_r4*)temp_r4)->field_1 = 0;
        ((Fields_temp_r4*)temp_r4)->field_0 = 0;
        return;
    }
}

void TKeyBoardControl__sub_803F0E8C(void) {

}
typedef char RecoveredGlobal_803F1548_lbl_805A2720_size[sizeof(RecoveredGlobal_803F1548_lbl_805A2720) == 0x1A0 ? 1 : -1];

s32 TKeyBoardControl__sub_803F0F44(void) {
    u32 v;
    while ((v = (u32)lbl_805D793C) != 0) {
        TKeyBoardControl__sub_803F15C4(__cntlzw(v));
    }
    lbl_805D7930 = 1;
    return 1;
}

u8 TKeyBoardControl__sub_803F1548(s32 arg0) {
    return M2C_FIELD(((u8 *)&lbl_805A2720.value + (arg0 * 0x68)), u8 *, 1);
}
void TKeyBoardControl__sub_803F15C4(s32 arg0) {
    u32 temp_r31;
    temp_r31 = 0x80000000U >> arg0;
    SIDisablePolling(temp_r31);
    lbl_805D793C &= ~temp_r31;
}

}
