#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_800C80FC();
M2C_UNK memcpy(M2C_UNK *, s32, M2C_UNK);
extern M2C_UNK TLobby__data_80511C80[];
extern s32 lbl_805D5DAC;

void handle_6x7F_battle_scores(s32 arg0) {
    TLobby__sub_800C80FC();
    memcpy(TLobby__data_80511C80, arg0 + 4, 0x20);
    lbl_805D5DAC = 1;
}

}
