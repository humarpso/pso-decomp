#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802C1B9C_lbl_80471990 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_802C1B9C_lbl_804E081C {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TLanguage__sub_801E4874(s32);
extern RecoveredGlobal_802C1B9C_lbl_80471990 lbl_80471990;
extern RecoveredGlobal_802C1B9C_lbl_804E081C lbl_804E081C;
extern s32 lbl_805D67A8;
extern u8 *lbl_805D67AC;
void TObjPlayer__sub_802C1B9C(void);
}

extern "C" {

typedef char RecoveredGlobal_802C1B9C_lbl_80471990_size[sizeof(RecoveredGlobal_802C1B9C_lbl_80471990) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_802C1B9C_lbl_804E081C_size[sizeof(RecoveredGlobal_802C1B9C_lbl_804E081C) == 0x10 ? 1 : -1];
void TObjPlayer__sub_802C1B9C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804E081C.value, 0, 0, 0));
    }
    lbl_805D67A8 = var_r0;
    lbl_805D67AC = TLanguage__sub_801E4874((s32) &lbl_80471990.value);
}

}
