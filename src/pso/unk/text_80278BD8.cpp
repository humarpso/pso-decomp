#include "types.h"

struct Wn_80278DA4 { u8 pad0[0x20]; s16 f20; u8 pad22[0x50]; s16 f72; };

extern "C" {
u8 *find_item_by_id(int);
u8 *get_player_by_client_id(s16);
u32 run_and_get_result__10TObjPlayerFPvi(int, void *);
void calc_list_content_extent(void *);
void add_list_entry__20TWindowSubStatusDispFPvi(void *, int);
void add_list_entry__23TShopJudgmentItemWindowFPvii(void *, void *, int);
void populate_judgment_item_list(Wn_80278DA4 *arg0);
u32 get_usable_action_flags__5TItemFPvUiUi(void *, u32, u32);
u8 *find_item_by_id(int);
u8 get_field_ec__12TOSwitchItemFPv();
u8 *get_player_by_client_id(s16);
u32 run_and_get_result__10TObjPlayerFPvi(int, void *);
void calc_list_content_extent(void *);
void add_list_entry__20TWindowSubStatusDispFPvi(void *, int);
void add_list_entry__23TShopJudgmentItemWindowFPvii(void *, void *, int);
void build_mag_item_candidates(void *arg0, u16 arg1);
u8 get_field_ed__10TObjPlayerFPv(void *);
u32 get_usable_action_flags__5TItemFPvUiUi(void *, u32, u32);
u8 *find_item_by_id(int);
u8 get_field_ec__12TOSwitchItemFPv();
u8 *get_player_by_client_id(s16);
u32 run_and_get_result__10TObjPlayerFPvi(int, void *);
void calc_list_content_extent(void *);
void add_list_entry__20TWindowSubStatusDispFPvi(void *, int);
void add_list_entry__23TShopJudgmentItemWindowFPvii(void *, void *, int);
void add_armor_equip_candidates(u8 *arg0, u16 kind, u16 sub);
}

extern "C" {

void add_armor_equip_candidates(u8 *arg0, u16 kind, u16 sub) {
    s32 ids[30];
    u8 *item;
    u32 n;
    u32 i;
    u8 *pl;
    pl = get_player_by_client_id(*(s16 *)(arg0 + 0x20));
    if (pl != NULL) {
        n = run_and_get_result__10TObjPlayerFPvi(*(s32 *)(pl + 0xD00), ids);
        for (i = 0; i < n; i++) {
            item = find_item_by_id(ids[i]);
            if (item != NULL && kind == ((u8 (*)(void *))get_field_ec__12TOSwitchItemFPv)(item) && sub == get_field_ed__10TObjPlayerFPv(item) &&
                get_usable_action_flags__5TItemFPvUiUi(item, 8, 0) != 0) {
                add_list_entry__23TShopJudgmentItemWindowFPvii(arg0, item, ids[i]);
            }
        }
        if (*(s16 *)(arg0 + 0x72) <= 0) {
            add_list_entry__20TWindowSubStatusDispFPvi(arg0, -1);
        }
        calc_list_content_extent(arg0);
    }
}

void build_mag_item_candidates(void *arg0, u16 arg1) {
    s32 ids[30];
    u8 *item;
    u32 n;
    u32 i;
    u8 *pl;
    pl = get_player_by_client_id(*(s16 *)((s8 *)arg0 + 0x20));
    if (pl != NULL) {
        n = run_and_get_result__10TObjPlayerFPvi(*(s32 *)((s8 *)pl + 0xD00), ids);
        for (i = 0; i < n; i++) {
            item = find_item_by_id(ids[i]);
            if ((item != 0) && (arg1 == get_field_ec__12TOSwitchItemFPv()) && (get_usable_action_flags__5TItemFPvUiUi(item, 8, 0) != 0U)) {
                add_list_entry__23TShopJudgmentItemWindowFPvii(arg0, item, ids[i]);
            }
        }
        if (*(s16 *)((s8 *)arg0 + 0x72) <= 0) {
            add_list_entry__20TWindowSubStatusDispFPvi(arg0, -1);
        }
        calc_list_content_extent(arg0);
    }
}

void populate_judgment_item_list(Wn_80278DA4 *arg0) {
    s32 list[0x20];
    u8 *id;
    u32 i;
    u32 count;
    u8 *p;
    p = get_player_by_client_id(arg0->f20);
    if (p != NULL) {
        count = run_and_get_result__10TObjPlayerFPvi(*(s32 *)(p + 0xD00), list);
        for (i = 0; i < count; i++) {
            id = find_item_by_id(list[i]);
            if (id != NULL) {
                add_list_entry__23TShopJudgmentItemWindowFPvii(arg0, id, list[i]);
            }
        }
        if (arg0->f72 <= 0) {
            add_list_entry__20TWindowSubStatusDispFPvi(arg0, -1);
        }
        calc_list_content_extent(arg0);
    }
}

}
