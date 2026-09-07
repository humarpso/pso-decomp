#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80235A20_lbl_804CCA78 { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
u8 * __dt__7TObjectFv(void *, s16);
void TLobby__sub_80226294(s32);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_80235A20_lbl_804CCA78 lbl_804CCA78;
u8 *fn_80235A20(u8 *arg0, s16 arg1);
}

extern "C" {

u8 *fn_80235A20(u8 *arg0, s16 arg1) {
    s32 temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804CCA78.value;
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_r3 >= 0) {
            TLobby__sub_80226294(temp_r3);
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

}
