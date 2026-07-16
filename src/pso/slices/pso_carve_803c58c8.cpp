#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
M2C_UNK TLobby__sub_803C8610();
M2C_UNK TLobby__sub_803CC884();
M2C_UNK TLobby__sub_803CEF60();
extern s32 lbl_805D7530;

void ARAlloc(void) {
    if ((s32) lbl_805D7530 == 0) {
        init_once__6TLobbyFv();
        lbl_805D7530 = 1;
        TLobby__sub_803C8610();
        lbl_805D7530 = 2;
        TLobby__sub_803CEF60();
        lbl_805D7530 = 5;
        TLobby__sub_803C8610();
        lbl_805D7530 = 6;
        TLobby__sub_803CC884();
        lbl_805D7530 = 0;
        release_ref__6TLobbyFv();
    }
}

}
