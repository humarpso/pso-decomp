#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
M2C_UNK TItem__sub_80101514(void *);
int TItem__sub_80101B20(void*);
s32 TLobby__sub_80103AD4();
void calc_display_grade__9TItemDataFPv(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(s32, M2C_UNK, M2C_UNK);
void copy_to_item_data__5TItemFPvPv(void *, void *);
int disallow_rendering__7TObjectFv(void*);
void get_item_price_if_valid__24TShopEquipmentSellWindowFUi(void *);
u16 obj_getField1c();
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

void claim_ownership__5TItemFii(s32 arg0, s32 arg1) {
    if ((u16) obj_getField1c() == 0xFFFF) {
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
        TItem__sub_80101514(arg0);
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

}
