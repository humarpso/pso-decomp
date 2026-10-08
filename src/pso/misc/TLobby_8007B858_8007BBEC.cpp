#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct L_8007BC5C { u8 pad0; u8 count; u8 pad2[2]; s32 ids[30]; };

extern "C" {
s32 get_state__23TAdSinglePlyChrSelectGCFv(void);
s32 get_card_slot__17TWindowSubComCardFi(s32 arg0);
s32 get_card_id__17TWindowSubComCardFPv(void *);
s32 is_active__17TWindowSubComCardFPv(void *);
s32 get_card_slot__17TWindowSubComCardFi(s32 arg0);
void collect_active_card_ids__6TLobbyFPv(L_8007BC5C *arg0);
}

extern "C" {

void TLobby__sub_8007BBEC(void);
void TLobby__sub_8007BBF8(void);
void send_status_packet__6TLobbyFv(void);
M2C_UNK send_c6_packet__6TLobbyFPvPv(s32, M2C_UNK *);

    extern short lbl_805D5C48;
void TLobby__sub_8007BBEC(void) { lbl_805D5C48 = 0; }

    extern short lbl_805D5C48;
void TLobby__sub_8007BBF8(void) { lbl_805D5C48 = 0; }

extern s32 TLobby__data_805D5580;

s32 get_card_slot__17TWindowSubComCardFi(s32 arg0) {
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

void collect_active_card_ids__6TLobbyFPv(L_8007BC5C *arg0) {
    u8 *card;
    s32 *p;
    s32 i;
    s32 n;
    card = (u8 *)get_card_slot__17TWindowSubComCardFi(0);
    p = arg0->ids;
    n = 0;
    i = 0;
    do {
        if (is_active__17TWindowSubComCardFPv(card) == 0) {
            break;
        }
        *p++ = get_card_id__17TWindowSubComCardFPv(card);
        i++;
        n++;
        card += 0x90;
    } while (i < 0x1c);
    arg0->count = n;
    for (i = n; i < 0x1e; i++) {
        *p++ = 0;
    }
}

void send_status_packet__6TLobbyFv(void) {
    char sp8[0x84];

    collect_active_card_ids__6TLobbyFPv((L_8007BC5C *)((M2C_UNK *) sp8));
    send_c6_packet__6TLobbyFPvPv(TLobby__data_805D5580, (M2C_UNK *) sp8);
}

}
