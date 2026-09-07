#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80147A74_lbl_804EF500 {
    M2C_UNK value;
    u8 remaining[0x94];
};

extern "C" {
extern RecoveredGlobal_80147A74_lbl_804EF500 lbl_804EF500;
M2C_UNK *TAdEnterPPPPassGC__sub_80147A74(void);
}

extern "C" {

s32 TLobby__sub_80147284(void);
void TLobby__sub_80147978(void);
void fn_80147A60(int a0);
void fn_80147A68(void);
M2C_UNK TLobby__sub_803FAFDC();
M2C_UNK TLobby__sub_803FB1A4(s16 *);
M2C_UNK TLobby__sub_80423064(s16, M2C_UNK);
M2C_UNK flush_pending_flag2__6TLobbyFv();
M2C_UNK teardown_boss2__6TLobbyFv();

extern s32 lbl_805D2D00;
extern s32 lbl_805D56F8;

s32 TLobby__sub_80147284(void) {
    s16 sp8;

    if ((s32) lbl_805D2D00 != -1) {
        TLobby__sub_80423064((s16) lbl_805D2D00, 0);
        sp8 = 1;
        TLobby__sub_803FB1A4(&sp8);
    }
    flush_pending_flag2__6TLobbyFv();
    if (lbl_805D56F8 & 4) {
        TLobby__sub_803FAFDC();
        lbl_805D56F8 &= 0xFFFFFFFB;
    }
    teardown_boss2__6TLobbyFv();
    lbl_805D2D00 = -1;
    return 0;
}

void TLobby__sub_80147978(void) {  }

    extern int lbl_805D56D0;
void fn_80147A60(int a0) { lbl_805D56D0 = a0; }

    extern int lbl_805D56D0;
void fn_80147A68(void) { lbl_805D56D0 = 0; }
typedef char RecoveredGlobal_80147A74_lbl_804EF500_size[sizeof(RecoveredGlobal_80147A74_lbl_804EF500) == 0x98 ? 1 : -1];
M2C_UNK *TAdEnterPPPPassGC__sub_80147A74(void) {
    return &lbl_804EF500.value;
}

}
