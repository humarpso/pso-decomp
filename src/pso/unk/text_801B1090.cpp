#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct pkt_801B1674 {
    u8 hdr[2];
    u16 player_id;
};

extern "C" {
void fn_801B1050(u8 *arg0);
s32 disable_stealth_suit_effect__15TFontSmallLobbyFi(s32 arg0, void *arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
void TFontSmallLobby__sub_801C01BC(void *);
M2C_UNK TFontSmallLobby__sub_801C04C8(M2C_UNK *);
s32 validate_6x7B_disable_stealth_suit_effect(void *);
s32 disable_stealth_suit_effect__15TFontSmallLobbyFi(s32 arg0, void * _w1);
void handle_6x7B_disable_stealth_suit_effect(void *arg0);
}

extern "C" {

M2C_UNK TFontSmallLobby__sub_801C0228();

void handle_6x7B_disable_stealth_suit_effect(void *arg0) {
    struct pkt_801B1674 pkt;
    TFontSmallLobby__sub_801C04C8((M2C_UNK *)(&pkt));
    disable_stealth_suit_effect__15TFontSmallLobbyFi((s32)((s32)((s32) &pkt)), (void *)((void *)(arg0)));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x7B_disable_stealth_suit_effect(&pkt) != 0) {
        u8 *p = (u8 *) TPlayerBattleCtrl4P__sub_801BA74C(pkt.player_id);
        if (p != NULL) {
            fn_801B1050(p);
        }
    }
}

s32 disable_stealth_suit_effect__15TFontSmallLobbyFi(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

}
