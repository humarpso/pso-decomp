#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8043395C_lbl_805D2200 {
    M2C_UNK value;
    u8 remaining[0x3FC];
};

extern "C" {
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
void TLobby__sub_8043395C(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_8043395C_lbl_805D2200_size[sizeof(RecoveredGlobal_8043395C_lbl_805D2200) == 0x400 ? 1 : -1];
void TLobby__sub_8043395C(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)&lbl_805D2200.value + (arg0 << 8);
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x20) == 0) {
        *M2C_FIELD(temp_r3, s8 **, 0x14) = M2C_FIELD(temp_r3, u8 *, 5) & 0x3A;
    }
}

}
