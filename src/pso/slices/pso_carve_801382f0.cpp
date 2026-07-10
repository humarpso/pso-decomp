#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_8013990C(M2C_UNK);
M2C_UNK send_game_list__9TProtocolFv(s32);
M2C_UNK TWindow__close(void*);
extern s32 lbl_805D5580;
extern s32 lbl_805D5594;
extern void *lbl_805D55E0;
extern void *lbl_805D55E4;

void request_game_list__6TLobbyFv(void) {
    TLobby__sub_8013990C(4);
    if ((void *) lbl_805D55E0 != 0) {
        TWindow__close(lbl_805D55E0);
        lbl_805D55E0 = 0;
    }
    if ((void *) lbl_805D55E4 != 0) {
        TWindow__close(lbl_805D55E4);
        lbl_805D55E4 = 0;
    }
    send_game_list__9TProtocolFv(lbl_805D5580);
    lbl_805D5594 = 6;
}

}
