#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80329600(void);
void TLobby__sub_80329628(void);
void TLobby__sub_80329650(void);
void TLobby__sub_80329678(void);
void TLobby__sub_803296A0(void);
M2C_UNK TObjPlayer__sub_8001BED8(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8001BEF8(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8001BF40(M2C_UNK *);

extern M2C_UNK lbl_805D6C84;

void TLobby__sub_80329600(void) {
    TObjPlayer__sub_8001BED8(&lbl_805D6C84, 2);
}

extern M2C_UNK lbl_805D6C84;

void TLobby__sub_80329628(void) {
    TObjPlayer__sub_8001BEF8(&lbl_805D6C84, 2);
}

extern M2C_UNK lbl_805D6C84;

void TLobby__sub_80329650(void) {
    TObjPlayer__sub_8001BED8(&lbl_805D6C84, 1);
}

extern M2C_UNK lbl_805D6C84;

void TLobby__sub_80329678(void) {
    TObjPlayer__sub_8001BEF8(&lbl_805D6C84, 1);
}

extern M2C_UNK lbl_805D6C84;

void TLobby__sub_803296A0(void) {
    TObjPlayer__sub_8001BF40(&lbl_805D6C84);
}

}
