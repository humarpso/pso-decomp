#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBE20(void);
void TLobby__sub_803CBE40(u8 *arg0);
void TLobby__sub_803CBE64(u8 *arg0);
void flush_input__16TKeyBoardControlFv(void);
void fn_803CBE00(void);
M2C_UNK TLobby__sub_803CBEC8(int);
M2C_UNK TLobby__sub_803D32B4();
M2C_UNK apply_field__6TLobbyFv(int);
M2C_UNK fn_8037BC54();
M2C_UNK run_step_60c8__6TLobbyFv();

void flush_input__16TKeyBoardControlFv(void) {
    TLobby__sub_803D32B4();
}

void fn_803CBE00(void) {
    fn_8037BC54();
}

void TLobby__sub_803CBE20(void) {
    run_step_60c8__6TLobbyFv();
}

void TLobby__sub_803CBE40(u8 *arg0) {
    apply_field__6TLobbyFv((int) (M2C_FIELD(arg0, s32 *, 0xC)));
}

void TLobby__sub_803CBE64(u8 *arg0) {
    TLobby__sub_803CBEC8((int) (M2C_FIELD(arg0, s32 *, 0xC)));
}

}
