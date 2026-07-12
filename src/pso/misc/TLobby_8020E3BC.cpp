#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8020E3BC(void);
void TLobby__sub_8020E3C0(void);
int TLobby__sub_8020E3F0(void);
int TLobby__sub_8020E3F8(void);
s32 TLobby__sub_8037F1C8(M2C_UNK);

void TLobby__sub_8020E3BC(void) {  }

extern s32 lbl_805D612C;
extern s32 lbl_805D6130;

void TLobby__sub_8020E3C0(void) {
    lbl_805D6130 = 0x100000;
    lbl_805D612C = TLobby__sub_8037F1C8(0x100000);
}

    extern int TLobby__data_805D6114;
int TLobby__sub_8020E3F0(void) {  return TLobby__data_805D6114; }

    extern int TLobby__data_805D610C;
int TLobby__sub_8020E3F8(void) {  return TLobby__data_805D610C; }

}
