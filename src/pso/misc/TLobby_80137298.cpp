#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_state__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__sub_801383E4(M2C_UNK);
M2C_UNK reset_state__6TLobbyFv(M2C_UNK);
s32 fn_80146740();
M2C_UNK fn_801DB474(s32);
M2C_UNK fn_80200B28();
M2C_UNK fn_80200C00();

extern s32 lbl_805D5580;

void handle_state__6TLobbyFi(s32 arg0) {
    s32 temp_r3;

    if (arg0 != 0) {
        fn_80200C00();
        temp_r3 = fn_80146740();
        switch (temp_r3) {
        case 0:
            fn_801DB474(lbl_805D5580);
            return;
        case 1:
            TLobby__sub_801383E4(0x13);
            return;
        case 2:
            TLobby__sub_801383E4(0x14);
            return;
        }
    } else {
        reset_state__6TLobbyFv(0x20);
        fn_80200B28();
        fn_80200C00();
    }
}

}
