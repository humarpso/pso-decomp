#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803C5930(void);
M2C_UNK TLobby__sub_803C4630();
M2C_UNK TLobby__sub_803C4660();
M2C_UNK TLobby__sub_803C5850();
M2C_UNK TLobby__sub_803C9090();
M2C_UNK TLobby__sub_803CC0F4();
M2C_UNK TLobby__sub_803CC134();
M2C_UNK TLobby__sub_803D1C24();
M2C_UNK TLobby__sub_803D259C();
M2C_UNK TLobby__sub_803D2E04();
M2C_UNK TLobby__sub_803D2E94();
M2C_UNK TLobby__sub_803D3194();
M2C_UNK TLobby__sub_803D3678(int, void *);
M2C_UNK fn_803C0AD8();

extern s32 lbl_805D7538;
extern s32 lbl_805D753C;

void TLobby__sub_803C5930(void) {
    s32 temp_r0;

    temp_r0 = lbl_805D7538 - 1;
    lbl_805D7538 = temp_r0;
    if (temp_r0 == 0) {
        TLobby__sub_803CC0F4();
        TLobby__sub_803CC134();
        TLobby__sub_803C9090();
        TLobby__sub_803D1C24();
        TLobby__sub_803C4660();
        TLobby__sub_803D3678((int) (2), (void *) (1));
        TLobby__sub_803D3678((int) (2), (void *) (3));
        TLobby__sub_803D3678((int) (4), (void *) (lbl_805D753C));
        TLobby__sub_803D3194();
        TLobby__sub_803C4630();
        TLobby__sub_803C4660();
        fn_803C0AD8();
        TLobby__sub_803C5850();
        TLobby__sub_803D259C();
        TLobby__sub_803D2E04();
        TLobby__sub_803D2E94();
        TLobby__sub_803C4630();
    }
}

}
