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
void set_state_flags__10TObjPlayerFPvUi(void *, u32);
void set_indexed_flags(void *, s32, s32);
void TFontSmallLobby__sub_801B117C(u8 *arg0);
void TFontSmallLobby__sub_801B117C(u8 *arg0);
s32 TFontSmallLobby__sub_801B1224(s32 arg0, void *arg1);
u32 get_player_by_client_id(int);
void TFontSmallLobby__sub_801C01BC(void *);
M2C_UNK fn_801C0510(M2C_UNK *);
s32 validate_6x7A_enable_stealth_suit_effect(void *);
s32 TFontSmallLobby__sub_801B1224(s32 arg0, void * _w1);
void handle_6x7A_enable_stealth_suit_effect(void *arg0);
}

extern "C" {

void TLobby__sub_801B1254(s32 arg0);
void draw_small_label__15TFontSmallLobbyFi(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK TFontSmallLobby__sub_801C04C8(M2C_UNK *);
M2C_UNK TLobby__sub_801C0524(M2C_UNK *);
M2C_UNK fn_801C04DC(M2C_UNK *);
M2C_UNK fn_801C0510(M2C_UNK *);
s16 obj_getField1c(s32);
s32 obj_isState2_324();

void draw_small_label__15TFontSmallLobbyFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        TFontSmallLobby__sub_801C04C8((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        fn_801C04DC((M2C_UNK *)&sp8);
    }
}

void TFontSmallLobby__sub_801B117C(u8 *arg0) {
    set_state_flags__10TObjPlayerFPvUi(arg0, 0x800000U);
    set_indexed_flags(arg0, 0, 0x08000000);
}

void handle_6x7A_enable_stealth_suit_effect(void *arg0) {
    struct pkt_801B1674 pkt;
    fn_801C0510((M2C_UNK *)(&pkt));
    TFontSmallLobby__sub_801B1224((s32)((s32)((s32) &pkt)), (void *)((void *)(arg0)));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x7A_enable_stealth_suit_effect(&pkt) != 0) {
        u8 *p = (u8 *) get_player_by_client_id(pkt.player_id);
        if (p != NULL) {
            TFontSmallLobby__sub_801B117C(p);
        }
    }
}

s32 TFontSmallLobby__sub_801B1224(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void TLobby__sub_801B1254(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        fn_801C0510((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        TLobby__sub_801C0524((M2C_UNK *)&sp8);
    }
}

}
