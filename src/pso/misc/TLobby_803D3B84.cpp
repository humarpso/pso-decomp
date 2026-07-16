#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_handle__6TLobbyFPv(u8 *arg0);
extern M2C_UNK (*lbl_805D7678)(s32, M2C_UNK *, M2C_UNK);
M2C_UNK TLobby__sub_803D3988();
M2C_UNK TLobby__sub_803D39C0();

extern M2C_UNK lbl_8047E0C8[];
extern s32 lbl_805D767C;

void release_handle__6TLobbyFPv(u8 *arg0) {
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D7678) != NULL) {
            lbl_805D7678(lbl_805D767C, lbl_8047E0C8, 0);
        }
    } else {
        TLobby__sub_803D39C0();
        M2C_FIELD(arg0, s8 *, 1) = 0;
        TLobby__sub_803D3988();
    }
}

}
