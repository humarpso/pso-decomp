#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_801B09A4 { char pad[0x18]; };

struct VObj_801B09A4 : VBase_801B09A4 {
    virtual void m0(s32);
};

struct Rec_801B09A4 { u8 bytes[0x42C]; };

extern "C" {
extern void *lbl_8050EA10[];
s32 TLobby__sub_801B0974(void);
VObj_801B09A4 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TObjPlayer__sub_801BDE60(u16, Rec_801B09A4 *);
void TLobby__sub_8024AC20(s32);
extern s32 lbl_805D5D88;
extern Rec_801B09A4 *lbl_805D5DB8;
void TLobby__sub_801B09A4(void);
}

extern "C" {

s32 check_switch_available__6TLobbyFPvi(void *arg0, s32 arg1);
void send_font_state__6TLobbyFi(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0480(M2C_UNK *);
M2C_UNK TFontSmallLobby__sub_801C0494(M2C_UNK *);
u8 fn_801D719C(M2C_UNK *);
u8 fn_801D71D0(M2C_UNK *);
u8 get_field_ec__12TOSwitchItemFPv();
u32 get_owner_if_alive__10TObjPlayerFPv();
s32 is_technique_ready__8TTecCtrlFv();
s16 obj_getField1c(s32);
s32 obj_isState2_324();
u32 start_inventory_update__10TObjPlayerFPvi(s32, s32);

void send_font_state__6TLobbyFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        TFontSmallLobby__sub_801C0480((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        TFontSmallLobby__sub_801C0494((M2C_UNK *)&sp8);
    }
}

extern M2C_UNK lbl_8050EA40[];

s32 TLobby__sub_801B0974(void) {
    void **p = lbl_8050EA10;
    s32 n = 0;
    s32 i;
    for (i = 0; i < 12; i++) {
        if (*p) {
            n++;
        }
        p++;
    }
    return n;
}

void TLobby__sub_801B09A4(void) {
    VObj_801B09A4 *players[12];
    s32 i;
    VObj_801B09A4 *p;
    lbl_805D5D88 |= 1;
    for (i = 0; i < 12; i++) {
        players[i] = NULL;
    }
    for (i = 0; i < 12; i++) {
        p = TPlayerBattleCtrl4P__sub_801BA74C(i);
        if (p != NULL) {
            players[i] = p;
            if (p != NULL) {
                p->m0(1);
            }
        }
    }
    for (i = 0; i < 12; i++) {
        if (players[i] != NULL) {
            TObjPlayer__sub_801BDE60(i, &lbl_805D5DB8[i]);
            TLobby__sub_8024AC20(i);
        }
    }
    lbl_805D5D88 &= ~1;
}

s32 check_switch_available__6TLobbyFPvi(void *arg0, s32 arg1) {
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        if (fn_801D71D0(lbl_8050EA40) == 2) {
            if (start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), arg1) == 0U) {
                return 0;
            }
            if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
                return 0;
            }
            if (get_field_ec__12TOSwitchItemFPv() == 0) {
                return 0;
            }
            goto block_8;
        }
block_8:
        if (fn_801D719C(lbl_8050EA40) == 1) {
            if (start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), arg1) == 0U) {
                return 0;
            }
            if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
                return 0;
            }
            if (get_field_ec__12TOSwitchItemFPv() == 2) {
                return 0;
            }
            goto block_15;
        }
        goto block_15;
    }
block_15:
    return 1;
}

}
