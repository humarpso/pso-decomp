#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803516F8_lbl_804F0E4C { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_803516F8_lbl_804F0E4C_size[sizeof(RecoveredGlobal_803516F8_lbl_804F0E4C) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_803516F8_lbl_804F0E4C lbl_804F0E4C;
extern s32 lbl_805D6EB8;
void fn_803516F8(void);
}

extern "C" {

void fn_803516F8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804F0E4C.value, 0, 0, 0));
    }
    lbl_805D6EB8 = var_r0;
}

}
