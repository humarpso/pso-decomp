#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803F1548_lbl_805A2720 {
    M2C_UNK value;
    u8 remaining[0x19C];
};

extern "C" {
extern RecoveredGlobal_803F1548_lbl_805A2720 lbl_805A2720;
u8 TKeyBoardControl__sub_803F1548(s32 arg0);
}

extern "C" {

void TKeyBoardControl__sub_803F0E8C(void);

void TKeyBoardControl__sub_803F0E8C(void) {

}
typedef char RecoveredGlobal_803F1548_lbl_805A2720_size[sizeof(RecoveredGlobal_803F1548_lbl_805A2720) == 0x1A0 ? 1 : -1];
u8 TKeyBoardControl__sub_803F1548(s32 arg0) {
    return M2C_FIELD(((u8 *)&lbl_805A2720.value + (arg0 * 0x68)), u8 *, 1);
}

}
