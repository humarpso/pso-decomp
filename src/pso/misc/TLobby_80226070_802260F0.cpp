#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_layout_positions__6TLobbyFv(void);
M2C_UNK reset_global__6TLobbyFv();
M2C_UNK close_option_window__6TLobbyFv();
s32 TLobby__sub_80226328(void);

extern s32 lbl_805D627C;
extern s32 lbl_805D6290;
extern s32 lbl_805D62A4;

void init_layout_positions__6TLobbyFv(void) {
    lbl_805D627C = -0x50;
    lbl_805D62A4 = -0x5A;
    if (TLobby__sub_80226328() == 1) {
        lbl_805D627C -= 0x32;
    }
    lbl_805D6290 = -0xA;
    close_option_window__6TLobbyFv();
    reset_global__6TLobbyFv();
}

}
