#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_players__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__send_and_handle_60();
M2C_UNK fn_801A5544(void *, s32);
M2C_UNK TLobby__sub_801E3FA4(s32);

extern s32 TLobby__data_805D5598;
extern void *lbl_805D5E48;
extern s32 lbl_805D5E50;

void update_players__6TLobbyFi(s32 arg0) {
    void *var_r31;

    if ((s32) TLobby__data_805D5598 == 1) {
        TLobby__send_and_handle_60();
        return;
    }
    if ((void *) lbl_805D5E48 != NULL) {
        var_r31 = M2C_FIELD(lbl_805D5E48, void **, 0x14);
        while (var_r31 != NULL) {
            fn_801A5544(var_r31, arg0);
            var_r31 = M2C_FIELD(var_r31, void **, 0xC);
        }
    }
    lbl_805D5E50 = 1;
    TLobby__sub_801E3FA4(arg0);
    lbl_805D5E50 = 0;
}

}
