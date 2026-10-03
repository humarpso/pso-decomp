#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8019DBB4_lbl_80446470 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019DBB4_lbl_804B90FC {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * load_gvm_texture_file(s32);
extern RecoveredGlobal_8019DBB4_lbl_80446470 lbl_80446470;
extern RecoveredGlobal_8019DBB4_lbl_804B90FC lbl_804B90FC;
extern s32 lbl_805D5C78;
extern u8 *lbl_805D5C7C;
void fn_8019DBB4(void);
}

extern "C" {

typedef char RecoveredGlobal_8019DBB4_lbl_80446470_size[sizeof(RecoveredGlobal_8019DBB4_lbl_80446470) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8019DBB4_lbl_804B90FC_size[sizeof(RecoveredGlobal_8019DBB4_lbl_804B90FC) == 0x10 ? 1 : -1];
void fn_8019DBB4(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804B90FC.value, 0, 0, 0));
    }
    lbl_805D5C78 = var_r0;
    lbl_805D5C7C = load_gvm_texture_file((s32) &lbl_80446470.value);
}

}
