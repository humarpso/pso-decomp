#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F7678(void);
s32 TLobby__sub_803F767C(void);
void TLobby__sub_803F76F0(void);
void TLobby__sub_803F778C(void);
void TLobby__sub_803F77E0(void);
void TLobby__sub_803F7980(void);
void TLobby__sub_803F79AC(void);
void TLobby__sub_803F79B0(u8 *arg0);
void TLobby__sub_803F79BC(void);
void TLobby__sub_803F7D54(s32 arg0);
void TLobby__sub_803F7D5C(s32 arg0);
void TLobby__sub_803F808C(void);
s32 TLobby__sub_803F811C(s16 *arg0);
void TLobby__sub_803F86BC(void);

void TLobby__sub_803F7678(void) {

}

s32 TLobby__sub_803F767C(void) {
    return 0;
}

void TLobby__sub_803F76F0(void) {

}

void TLobby__sub_803F778C(void) {

}

void TLobby__sub_803F77E0(void) {

}

void TLobby__sub_803F7980(void) {

}

void TLobby__sub_803F79AC(void) {

}

void TLobby__sub_803F79B0(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 8) = 0x28;
}

void TLobby__sub_803F79BC(void) {

}

extern s32 lbl_805D7A2C;

void TLobby__sub_803F7D54(s32 arg0) {
    lbl_805D7A2C = arg0;
}

extern s32 lbl_805D7A30;

void TLobby__sub_803F7D5C(s32 arg0) {
    lbl_805D7A30 -= arg0;
}

void TLobby__sub_803F808C(void) {

}

s32 TLobby__sub_803F811C(s16 *arg0) {
    *arg0 = 0;
    return 0;
}

void TLobby__sub_803F86BC(void) {

}

}
