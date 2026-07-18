#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_player_entry__6TLobbyFPvPv(u8 *arg0, u8 *arg1);
s32 get_com_card_list__6TLobbyFPv();
M2C_UNK TLobby__sub_802422EC(void *, void *, int);
void *TLobby__sub_80242458(void *, void *);
void *TLobby__sub_802424D8(void *);
M2C_UNK get_id__6TLobbyFPv(void *);
s32 get_sub_disp_ptr__20TWindowSubStatusDispFPv(void *);
M2C_UNK __as__21TPlyMeetUserExtensionFRC21TPlyMeetUserExtension(void *, void *);
u32 find_card_by_id__17TWindowSubComCardFUi();
M2C_UNK strncpy(void *, void *, int);

extern s32 lbl_805D63D8;

void init_player_entry__6TLobbyFPvPv(u8 *arg0, u8 *arg1) {
    s32 temp_r5;
    void *p;

    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    temp_r5 = lbl_805D63D8;
    lbl_805D63D8 = temp_r5 + 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_r5;
    TLobby__sub_802422EC((void *) (arg0 + 0x4C), (void *) (arg1 + 0x10), (int) (temp_r5));
    __as__21TPlyMeetUserExtensionFRC21TPlyMeetUserExtension((void *) (arg0 + 0x58), (void *) (arg1 + 0x60));
    get_id__6TLobbyFPv((void *) (arg0));
    if (find_card_by_id__17TWindowSubComCardFUi() == 0U) {
        strncpy((void *) (arg0 + 8), (void *) (get_sub_disp_ptr__20TWindowSubStatusDispFPv((void *) (arg0))), (int) (0x10));
    } else {
        strncpy((void *) (arg0 + 8), (void *) (get_com_card_list__6TLobbyFPv()), (int) (0x10));
    }
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
    p = TLobby__sub_802424D8((void *) (arg1 + 0x1C));
    p = TLobby__sub_80242458(p, (void *) (arg0 + 0x19));
    p = TLobby__sub_80242458(p, (void *) (arg0 + 0x2A));
    p = TLobby__sub_80242458(p, (void *) (arg0 + 0x2A));
    TLobby__sub_80242458(p, (void *) (arg0 + 0x3B));
}

}
