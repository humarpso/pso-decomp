#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_keyboard_buffer__6TLobbyFv(void);
s32 poll_connect__6TLobbyFv(void);
void flush_pending_flag2__6TLobbyFv(void);
void set_battle_flag__6TLobbyFi(s32 arg0);
M2C_UNK send_and_handle__6TLobbyFPv();
int TLobby__sub_80145A94(void);
int TLobby__sub_803F4B68(void*);
M2C_UNK TLobby__sub_804219D0(M2C_UNK, M2C_UNK, s32);
M2C_UNK TLobby__sub_80421A50(M2C_UNK, M2C_UNK, s32);
s16 fn_80426BD8();
s8 func_801A5E54__Fv();
int xmalloc__FUl(void);

    extern int lbl_805D56C8;
    extern short lbl_805D56CE;
    extern int lbl_805D56D0;
void init_keyboard_buffer__6TLobbyFv(void) { lbl_805D56D0 = 0; lbl_805D56CE = 0; lbl_805D56C8 = 0; TLobby__sub_803F4B68((void*)0); lbl_805D56C8 = xmalloc__FUl(); TLobby__sub_80145A94(); }

s32 poll_connect__6TLobbyFv(void) {
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if (var_r31 > 0x12C) {
        return 0;
    }
    var_r31 += 1;
    send_and_handle__6TLobbyFPv();
    if (func_801A5E54__Fv() != 0) {
        return 1;
    }
    if (fn_80426BD8() == 1) {
        return 2;
    }
    goto loop_1;
}

extern s32 lbl_805D56F8;
extern s32 lbl_805D56FC;

void flush_pending_flag2__6TLobbyFv(void) {
    if (lbl_805D56F8 & 2) {
        TLobby__sub_804219D0(0, 0, lbl_805D56FC);
        lbl_805D56F8 &= 0xFFFFFFFD;
    }
}

extern s32 lbl_805D56F8;
extern s32 lbl_805D56FC;

void set_battle_flag__6TLobbyFi(s32 arg0) {
    lbl_805D56FC = arg0;
    lbl_805D56F8 |= 2;
    TLobby__sub_80421A50(0, 0, arg0);
}

}
