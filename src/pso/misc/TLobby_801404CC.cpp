#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801404CC(void);
M2C_UNK TLobby__sub_8007BA20();
M2C_UNK TLobby__sub_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK TLobby__sub_80207FFC();
M2C_UNK TLobby__sub_80227248();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK TLobby__sub_80227F7C();
M2C_UNK TParticleCtrl__sub_800867AC();
M2C_UNK fn_800F7B84();

extern M2C_UNK lbl_804A7368[];

void TLobby__sub_801404CC(void) {
    TLobby__sub_80227F7C();
    TLobby__sub_8022743C();
    TLobby__sub_80227248();
    TLobby__sub_800FD6A0(lbl_804A7368, 8);
    TParticleCtrl__sub_800867AC();
    TLobby__sub_80207FFC();
    fn_800F7B84();
    TLobby__sub_8007BA20();
}

}
