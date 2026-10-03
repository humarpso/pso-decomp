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

typedef s32 M2C_UNK;
struct Pl_801B0B88 {
    u8 pad0[0x424];
    s32 f424;
    u8 f428[0x754 - 0x428];
    u8 f754[0x7c4 - 0x754];
    u8 f7C4[4];
    u8 f7C8[0xd00 - 0x7c8];
    s32 fD00;
};

extern "C" {
extern void *lbl_8050EA10[];
s32 TLobby__sub_801B0974(void);
VObj_801B09A4 *get_player_by_client_id(s32);
void TObjPlayer__sub_801BDE60(u16, Rec_801B09A4 *);
void TLobby__sub_8024AC20(s32);
extern s32 lbl_805D5D88;
extern Rec_801B09A4 *lbl_805D5DB8;
void TLobby__sub_801B09A4(void);
s32 is_locally_controlled__10TObjPlayerFPv(Pl_801B0B88 *);
s32 get_item_field_6__10TObjPlayerFPv(Pl_801B0B88 *);
s32 get_item_info__10TObjPlayerFiiPv(s32, Pl_801B0B88 *, s32);
void set_flag_drop_weapon_on_death__10TObjPlayerFPv(Pl_801B0B88 *);
void disable_drop_weapon_on_death__10TObjPlayerFPv(Pl_801B0B88 *);
void set_state_flag_6043__10TObjPlayerFPv(Pl_801B0B88 *);
void TObjPlayer__sub_801B269C(Pl_801B0B88 *);
void check_technique_flag__10TObjPlayerFPv(Pl_801B0B88 *);
void recover_full__10TObjPlayerFPv(Pl_801B0B88 *);
void TObjPlayer__sub_801B6488(Pl_801B0B88 *, s32);
void unequip_item__10TObjPlayerFiPv(Pl_801B0B88 *, s32);
VObj_801B09A4 *get_player_by_client_id(s32);
void set_meseta__10TObjPlayerFPvi(Pl_801B0B88 *, s32);
void TObjPlayer__sub_801BEE24(Pl_801B0B88 *, s32);
void TObjPlayer__sub_801BEE2C(Pl_801B0B88 *, s32);
void fn_801C19E0(void *, s32);
void TObjPlayer__sub_801C1B10(s32);
void fn_801C5420(void *, s32);
void TObjPlayer__sub_801C5780(void *, s32, s32);
void TLobby__sub_801D4C28(s32, Pl_801B0B88 *, s32, s32);
void set_globals_and_update__6TLobbyFPvii(s32, Pl_801B0B88 *, s32);
void update_all_children__6TLobbyFPv(void *);
s32 TObjPlayer__sub_801D6D28(M2C_UNK *);
s32 fn_801D6D60(M2C_UNK *, s32);
u8 fn_801D6DB0(M2C_UNK *);
s8 TLobby__sub_801D6DDC(M2C_UNK *);
s16 clamp_player_index__6TLobbyFPv(M2C_UNK *);
u8 TLobby__sub_801D6F94(M2C_UNK *);
u8 TLobby__sub_801D6FC8(M2C_UNK *);
u8 TLobby__sub_801D6FFC(M2C_UNK *);
u8 TLobby__sub_801D7030(M2C_UNK *);
u8 TLobby__sub_801D7098(M2C_UNK *);
u8 TLobby__sub_801D70CC(M2C_UNK *);
u8 TLobby__sub_801D7100(M2C_UNK *);
u8 fn_801D7134(M2C_UNK *);
u8 fn_801D7168(M2C_UNK *);
u8 fn_801D719C(M2C_UNK *);
u8 fn_801D71D0(M2C_UNK *);
u8 fn_801D7204(M2C_UNK *);
u8 TOMineTrap__sub_801D7238(M2C_UNK *);
void update_all_units__10TObjPlayerFii(void *, u8);
void TObjPlayer__sub_801D9B38(void *, s32);
void TObjPlayer__sub_801D9B90(void *, s32);
void copy_lobby_header__10TObjPlayerFPvi(Rec_801B09A4 *, Pl_801B0B88 *);
extern M2C_UNK lbl_8050EA40[];
extern s32 lbl_805D5D6C;
extern Rec_801B09A4 *lbl_805D5DB8;
void TLobby__sub_801B0B88(void);
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
        p = get_player_by_client_id(i);
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
void TLobby__sub_801B0B88(void) {
    s32 i;
    M2C_UNK *q;
    Pl_801B0B88 *p;
    s32 j;
    s32 lv;
    q = lbl_8050EA40;
    for (i = 0; i < 0xC; i++) {
        p = (Pl_801B0B88 *)get_player_by_client_id(i);
        if (p == NULL) {
            continue;
        }
        update_all_children__6TLobbyFPv(p->f754);
        if (TOMineTrap__sub_801D7238(q) == 1) {
            set_state_flag_6043__10TObjPlayerFPv(p);
            if (is_locally_controlled__10TObjPlayerFPv(p) != 0) {
                lbl_805D5D6C = 1;
            }
        } else {
            return;
        }
        switch (fn_801D71D0(q)) {
        case 1:
        case 2:
        case 3:
            set_globals_and_update__6TLobbyFPvii(p->fD00, p, 0);
            set_globals_and_update__6TLobbyFPvii(p->fD00, p, 1);
            break;
        }
        switch (fn_801D719C(q)) {
        case 1:
            set_globals_and_update__6TLobbyFPvii(p->fD00, p, 2);
            break;
        }
        if ((j = get_item_field_6__10TObjPlayerFPv(p)) != 0 && get_item_info__10TObjPlayerFiiPv(j, p, 0) == 0) {
            unequip_item__10TObjPlayerFiPv(p, j);
        }
        switch (fn_801D7168(q)) {
        case 1:
        case 2:
            set_globals_and_update__6TLobbyFPvii(p->fD00, p, 3);
            break;
        }
        if (fn_801D7134(q) == 1) {
            for (j = 0; j < 4; j++) {
                TObjPlayer__sub_801C5780(p->f7C4, fn_801D6D60(q, j), j);
            }
        }
        switch (TLobby__sub_801D7100(q)) {
        case 2:
            fn_801C19E0(p->f754, fn_801D6DB0(q));
            break;
        }
        switch (TLobby__sub_801D70CC(q)) {
        case 1:
            TObjPlayer__sub_801BEE2C(p, 0);
            TObjPlayer__sub_801BEE24(p, 0);
            TObjPlayer__sub_801B6488(p, clamp_player_index__6TLobbyFPv(q));
            break;
        }
        lv = TLobby__sub_801D6DDC(q);
        switch (fn_801D7204(q)) {
        case 1:
            TObjPlayer__sub_801D9B90(p->f428, 0xFF);
            TObjPlayer__sub_801D9B38(p->f428, 0xFF);
            break;
        case 2:
            TObjPlayer__sub_801D9B90(p->f428, 0x1D);
            update_all_units__10TObjPlayerFii(p->f428, lv);
            break;
        }
        set_flag_drop_weapon_on_death__10TObjPlayerFPv(p);
        switch (TLobby__sub_801D7098(q)) {
        case 1:
            disable_drop_weapon_on_death__10TObjPlayerFPv(p);
            break;
        }
        if (TLobby__sub_801D7030(q) == 1 && is_locally_controlled__10TObjPlayerFPv(p) != 0) {
            TObjPlayer__sub_801C1B10(p->f424);
        }
        if (TLobby__sub_801D6FFC(q) != 0) {
            set_meseta__10TObjPlayerFPvi(p, 0);
        }
        if (TLobby__sub_801D6FC8(q) == 1) {
            fn_801C5420(p->f7C8, TObjPlayer__sub_801D6D28(q));
        }
        if (TLobby__sub_801D6F94(q) == 1) {
            TLobby__sub_801D4C28(p->fD00, p, 3, 9);
        }
        check_technique_flag__10TObjPlayerFPv(p);
        recover_full__10TObjPlayerFPv(p);
        TObjPlayer__sub_801B269C(p);
        copy_lobby_header__10TObjPlayerFPvi(&lbl_805D5DB8[i], p);
    }
}

}
