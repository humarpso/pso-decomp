#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_state__23TAdSinglePlyChrSelectGCFv(void);
s32 TWindowSubComCard__sub_8007BC04(s32 arg0);
}

extern "C" {

void TLobby__sub_8007BBEC(void);
void TLobby__sub_8007BBF8(void);
void send_status_packet__6TLobbyFv(void);
M2C_UNK TLobby__sub_8007BC5C(M2C_UNK *);
M2C_UNK send_c6_packet__6TLobbyFPvPv(s32, M2C_UNK *);

    extern short lbl_805D5C48;
void TLobby__sub_8007BBEC(void) { lbl_805D5C48 = 0; }

    extern short lbl_805D5C48;
void TLobby__sub_8007BBF8(void) { lbl_805D5C48 = 0; }

extern s32 TLobby__data_805D5580;

s32 TWindowSubComCard__sub_8007BC04(s32 arg0) {
    s32 temp_r3;
    s32 var_r31;
    s32 var_r3;
    var_r31 = arg0;
    if (var_r31 < 0) {
        var_r3 = 0;
        return 0;
    }
    if (var_r31 >= 0x1C) {
        var_r3 = 0;
        return 0;
    }
    temp_r3 = get_state__23TAdSinglePlyChrSelectGCFv();
    var_r3 = temp_r3 + 0x10000;
    var_r3 = temp_r3 + 0xD2C4;
    var_r3 += var_r31 * 0x90;
    return var_r3;
}

void send_status_packet__6TLobbyFv(void) {
    char sp8[0x84];

    TLobby__sub_8007BC5C((M2C_UNK *) sp8);
    send_c6_packet__6TLobbyFPvPv(TLobby__data_805D5580, (M2C_UNK *) sp8);
}

}
