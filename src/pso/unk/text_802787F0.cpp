#include "types.h"

struct Wn_802788A8 { u8 pad0[0x20]; s16 f20; u8 pad22[0x50]; s16 f72; };

struct Wn_802787F0 { u8 pad0[0x20]; s16 f20; u8 pad22[0x50]; s16 f72; };

struct Ent_802787F0 { u32 id; s32 count; };

extern "C" {
u32 get_usable_action_flags__5TItemFPvUiUi(void *, int, int);
u8 *find_item_by_id(int);
u8 *get_player_by_client_id(s16);
u32 run_and_get_result__10TObjPlayerFi(int, void *);
void calc_list_content_extent(void *);
void add_list_entry__20TWindowSubStatusDispFl(void *, int);
void add_list_entry__23TShopJudgmentItemWindowFll(void *, void *, int);
void build_usable_item_list(Wn_802788A8 *arg0);
u8 *find_item_by_id(int);
void calc_list_content_extent(void *);
void add_list_entry__20TWindowSubStatusDispFl(void *, int);
void push_status_disp_entry(void *, s32, s32);
void add_inventory_item__20TWindowSubStatusDispFlll(void *, u8 *, s32, u32);
void fill_trade_item_list(Wn_802787F0 *arg0, Ent_802787F0 *arg1);
}

extern "C" {

void fill_trade_item_list(Wn_802787F0 *arg0, Ent_802787F0 *arg1) {
    s32 sid;
    u32 i;
    s32 count;
    Ent_802787F0 *p;
    u8 *item;
    if (arg1 != NULL) {
        p = arg1;
        i = 0;
        do {
            count = p->count;
            u32 id = p->id;
            if (count > 0) {
                if (id == 0xFFFFFF01) {
                    push_status_disp_entry(arg0, count, id);
                } else {
                    sid = id;
                    item = find_item_by_id(sid);
                    if (item != NULL) {
                        add_inventory_item__20TWindowSubStatusDispFlll(arg0, item, count, sid);
                    }
                }
            }
            i++;
            p++;
        } while (i < 0x1F);
        if (arg0->f72 <= 0) {
            add_list_entry__20TWindowSubStatusDispFl(arg0, -1);
        }
        calc_list_content_extent(arg0);
    }
}

void build_usable_item_list(Wn_802788A8 *arg0) {
    s32 list[0x20];
    u8 *id;
    u32 i;
    u32 count;
    u8 *p;
    p = get_player_by_client_id(arg0->f20);
    if (p != NULL) {
        count = run_and_get_result__10TObjPlayerFi(*(s32 *)(p + 0xD00), list);
        for (i = 0; i < count; i++) {
            id = find_item_by_id(list[i]);
            if (id != NULL && get_usable_action_flags__5TItemFPvUiUi(id, 4, 0) != 0) {
                add_list_entry__23TShopJudgmentItemWindowFll(arg0, id, list[i]);
            }
        }
        if (arg0->f72 <= 0) {
            add_list_entry__20TWindowSubStatusDispFl(arg0, -1);
        }
        calc_list_content_extent(arg0);
    }
}

}
