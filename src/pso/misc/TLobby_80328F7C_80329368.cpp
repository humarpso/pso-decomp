#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *init_vtable8__6TLobbyFPv(void *arg0);
void init_player_forward__6TLobbyFv(void);
void TLobby__sub_802A7B50(void *);
M2C_UNK init_forward__10TObjPlayerFPv(M2C_UNK *);

extern M2C_UNK lbl_804ED7D0[];

void *init_vtable8__6TLobbyFPv(void *arg0) {
    TLobby__sub_802A7B50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x8) = lbl_804ED7D0;
    return arg0;
}

extern M2C_UNK lbl_805D6C84;

void init_player_forward__6TLobbyFv(void) {
    init_forward__10TObjPlayerFPv(&lbl_805D6C84);
}

}
