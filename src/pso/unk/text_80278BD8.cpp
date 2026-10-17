#include "types.h"
#include "pso/unk/text_80278BD8.h"
#include "pso/item/TItem.h"
#include "pso/misc/TShopJudgmentItemWindow.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/player/TObjPlayer.h"

struct Wn_80278DA4 { u8 pad0[0x20]; s16 f20; u8 pad22[0x50]; s16 f72; };

extern "C" {
u8 *find_item_by_id(s32 id);
void *get_player_by_client_id(s32 i);
void calc_list_content_extent(void *);
void populate_judgment_item_list(Wn_80278DA4 *arg0);
u8 get_field_ec__5TItemFv();

void add_armor_equip_candidates(u8 *arg0, u16 kind, u16 sub) {
    s32 ids[30];
    u8 *item;
    u32 n;
    u32 i;
    u8 *pl;
    pl = (u8 *)get_player_by_client_id(*(s16 *)(arg0 + 0x20));
    if (pl != NULL) {
        n = ((TObjPlayer *)(*(s32 *)(pl + 0xD00)))->run_and_get_result((int)ids);
        for (i = 0; i < n; i++) {
            item = find_item_by_id(ids[i]);
            if (item != NULL && kind == ((u8 (*)(void *))get_field_ec__5TItemFv)(item) && sub == ((TItem *)item)->get_field_ed() &&
                ((TItem *)item)->get_usable_action_flags(8, 0) != 0) {
                ((TShopJudgmentItemWindow *)arg0)->add_list_entry((s32)item, (s32)(ids[i]));
            }
        }
        if (*(s16 *)(arg0 + 0x72) <= 0) {
            ((TWindowSubStatusDisp *)arg0)->add_list_entry(-1);
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
    pl = (u8 *)get_player_by_client_id(*(s16 *)((s8 *)arg0 + 0x20));
    if (pl != NULL) {
        n = ((TObjPlayer *)(*(s32 *)((s8 *)pl + 0xD00)))->run_and_get_result((int)ids);
        for (i = 0; i < n; i++) {
            item = find_item_by_id(ids[i]);
            if ((item != 0) && (arg1 == get_field_ec__5TItemFv()) && (((TItem *)item)->get_usable_action_flags(8, 0) != 0U)) {
                ((TShopJudgmentItemWindow *)arg0)->add_list_entry((s32)item, (s32)(ids[i]));
            }
        }
        if (*(s16 *)((s8 *)arg0 + 0x72) <= 0) {
            ((TWindowSubStatusDisp *)arg0)->add_list_entry(-1);
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
    p = (u8 *)get_player_by_client_id(arg0->f20);
    if (p != NULL) {
        count = ((TObjPlayer *)(*(s32 *)(p + 0xD00)))->run_and_get_result((int)list);
        for (i = 0; i < count; i++) {
            id = find_item_by_id(list[i]);
            if (id != NULL) {
                ((TShopJudgmentItemWindow *)arg0)->add_list_entry((s32)id, (s32)(list[i]));
            }
        }
        if (arg0->f72 <= 0) {
            ((TWindowSubStatusDisp *)arg0)->add_list_entry(-1);
        }
        calc_list_content_extent(arg0);
    }
}

}
