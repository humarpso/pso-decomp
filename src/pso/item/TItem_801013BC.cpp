#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Player_8010147C { u8 pad[0xF0]; u32 f_F0; };

extern "C" {
M2C_UNK TObjPlayer__sub_803D898C(void *);
M2C_UNK TObjPlayer__sub_803D99F8(void *, void *);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
extern M2C_UNK (*lbl_805D53F8)(s32);
extern M2C_UNK (*lbl_805D53FC)(void *);
extern u8 *lbl_805D5404;
void TObjPlayer__sub_801016D0(u8 *arg0);
u16 obj_getField1c(void *);
M2C_UNK set_item_count__6TLobbyFPvs(s32, s32);
M2C_UNK TLobby__sub_80103B04();
M2C_UNK set_indexed_flags(void *, int, int);
M2C_UNK TObjPlayer__sub_80154A00(void *);
void TItem__sub_80101514(s32 arg0);
void copy_to_item_data__5TItemFPvPv(void *, void *);
u32 test_item_flags__10TObjPlayerFPvUi(void *, int);
s32 has_flag_128__10TObjPlayerFPv(void *);
u32 TItemData__sub_8010D028(void *, u32, u32);
u32 get_usable_action_flags__5TItemFPvUiUi(Player_8010147C *p, u32 mask, u32 kind);
}

extern "C" {

void TItem__sub_801013E8(void *arg0);
void calc_display_grade__5TItemFPv(void *arg0);
void claim_ownership__5TItemFii(s32 arg0, s32 arg1);
void copy_item_data_and_process__5TItemFPv(void *arg0);
void destroy__5TItemFPv(void* p);
s32 register_attack__5TItemFPv(void *arg0);
void set_mode__5TItemFPvc(void *arg0, s8 arg1);
void update_item_data__5TItemFPv(void *arg0);
s32 TItemAttacker__sub_80103548(M2C_UNK);
void TItemData__sub_8010CC68(void *);
void TItemData__sub_8010DF68(void *);
M2C_UNK TItemData__sub_8010E59C(M2C_UNK *, s32);
int TItem__sub_80101B20(void*);
s32 TLobby__sub_80103AD4();
void calc_display_grade__9TItemDataFPv(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(s32, M2C_UNK, M2C_UNK);
void copy_to_item_data__5TItemFPvPv(void *, void *);
int disallow_rendering__7TObjectFv(void*);
void get_item_price_if_valid__24TShopEquipmentSellWindowFUi(void *);
int queue_destruction__7TObjectFv(void*);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(s32);
M2C_UNK set_item_count__6TLobbyFPvs(s32, s32);

void update_item_data__5TItemFPv(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv((void *)(arg0), (void *)(&sp8));
    TItemData__sub_8010CC68(&sp8);
}

void TItem__sub_801013E8(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv((void *)(arg0), (void *)(&sp8));
    TItemData__sub_8010DF68(&sp8);
}

void destroy__5TItemFPv(void* p) { TItem__sub_80101B20(p); disallow_rendering__7TObjectFv(p); queue_destruction__7TObjectFv(p); }

void copy_item_data_and_process__5TItemFPv(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv((void *)(arg0), (void *)(&sp8));
    get_item_price_if_valid__24TShopEquipmentSellWindowFUi(&sp8);
}

u32 get_usable_action_flags__5TItemFPvUiUi(Player_8010147C *p, u32 mask, u32 kind) {
    u8 item[0x14];
    u32 r;
    copy_to_item_data__5TItemFPvPv(p, item);
    if (kind == 0) {
        kind = p->f_F0;
    }
    r = TItemData__sub_8010D028(item, mask, kind);
    if (test_item_flags__10TObjPlayerFPvUi(p, 0x200) != 0) {
        r |= 2;
    }
    if (r == 0 && has_flag_128__10TObjPlayerFPv(p) != 0) {
        r |= 0x10;
        r &= ~2;
    }
    return r & mask;
}

void TItem__sub_80101514(s32 arg0) {
  if (obj_getField1c((void *)((void *) arg0)) != ((-1U) & 0xFFFF))
  {
    if ((!arg0) && (!arg0))
    {
    }
    TObjPlayer__sub_80154A00((void *) arg0);
    obj_getField1c((void *)((void *) arg0));
    TLobby__sub_80103B04();
    set_item_count__6TLobbyFPvs((s32)((void *) arg0), (s32)((int) 0xFFFF));
    set_indexed_flags((void *) arg0, (int) 0, (int) 1);
  }
}

void claim_ownership__5TItemFii(s32 arg0, s32 arg1) {
    if ((u16) obj_getField1c((void *)(arg0)) == 0xFFFF) {
        set_item_count__6TLobbyFPvs(arg0, TLobby__sub_80103AD4());
        reset_photon_effect__10TObjPlayerFPv(arg0);
        if (arg1 != 0) {
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
        }
    }
}

void set_mode__5TItemFPvc(void *arg0, s8 arg1) {
    if (arg1 == 3) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    }
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
        claim_ownership__5TItemFii((s32)(arg0), (s32)(0));
    } else {
        TItem__sub_80101514((s32)(arg0));
    }
    M2C_FIELD(arg0, s8 *, 0xEB) = arg1;
}

s32 register_attack__5TItemFPv(void *arg0) {
    M2C_UNK sp8[8];
    s32 temp_r3;

    copy_to_item_data__5TItemFPvPv((void *)(arg0), (void *)(sp8));
    temp_r3 = TItemAttacker__sub_80103548(0);
    TItemData__sub_8010E59C(sp8, temp_r3);
    return temp_r3;
}

void calc_display_grade__5TItemFPv(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv((void *)(arg0), (void *)(&sp8));
    calc_display_grade__9TItemDataFPv(&sp8);
}
void TObjPlayer__sub_801016D0(u8 *arg0) {
    s32 temp_r30;
    u8 *var_r31;
    var_r31 = arg0;
    do {
        temp_r30 = M2C_FIELD(var_r31, s32 *, 0);
        if ((u32) (temp_r30 & 7) == 7) {
            TObjPlayer__sub_803D9B2C();
            if (lbl_805D5404 != NULL) {
                TObjPlayer__sub_803D898C(lbl_805D5404);
                lbl_805D5404 += 0x30;
            }
            if (((M2C_UNK (*)(void *)) lbl_805D53FC) != NULL) {
                lbl_805D53FC(var_r31);
            }
            if (!(temp_r30 & 8) && (((M2C_UNK (*)(s32)) lbl_805D53F8) != NULL)) {
                lbl_805D53F8(M2C_FIELD(var_r31, s32 *, 4));
            }
            if (!(temp_r30 & 0x10)) {
                TObjPlayer__sub_801016D0(M2C_FIELD(var_r31, u8 **, 0x2C));
            }
            pop_matrix();
        } else {
            TObjPlayer__sub_803D9B2C();
            if (!(temp_r30 & 1)) {
                TOHangerMachine01__sub_803D9C00((void *) (var_r31 + 8));
            }
            if (!(temp_r30 & 2)) {
                TObjPlayer__sub_803D99F8((void *) (var_r31 + 0x14), (void *) (temp_r30 & 0x20));
            }
            if (!(temp_r30 & 4)) {
                TBoss7Tentacle__sub_803D9BA0((void *) (var_r31 + 0x20));
            }
            if (((M2C_UNK (*)(void *)) lbl_805D53FC) != NULL) {
                lbl_805D53FC(var_r31);
            }
            if (lbl_805D5404 != NULL) {
                TObjPlayer__sub_803D898C(lbl_805D5404);
                lbl_805D5404 += 0x30;
            }
            if (!(temp_r30 & 8) && (((M2C_UNK (*)(s32)) lbl_805D53F8) != NULL)) {
                lbl_805D53F8(M2C_FIELD(var_r31, s32 *, 4));
            }
            if (!(temp_r30 & 0x10)) {
                TObjPlayer__sub_801016D0(M2C_FIELD(var_r31, u8 **, 0x2C));
            }
            pop_matrix();
        }
        var_r31 = M2C_FIELD(var_r31, u8 **, 0x30);
    } while (var_r31 != NULL);
}

}
