#include "types.h"
extern "C" {
u32 get_usable_action_flags__5TItemFPvUiUi(void *, s32, s32);
void *find_item_by_id(u32);
u8 *get_player_by_client_id(s16);
u32 run_and_get_result__10TObjPlayerFPvi(void *, u32 *);
void TLobby__sub_80266E34(void *);
void add_list_entry__20TWindowSubStatusDispFPvi(void *, s32);
void add_list_entry__23TShopJudgmentItemWindowFPvii(void *, void *, u32);
void fn_802789E0(u8 *arg0);
}

extern "C" {

void fn_802789E0(u8 *arg0) {
    u32 ids[32];
    u8 *pl;
    u32 n;
    void *item;
    u32 i;
    pl = get_player_by_client_id(*(s16 *)(arg0 + 0x20));
    if (pl != NULL) {
        n = run_and_get_result__10TObjPlayerFPvi(*(void **)(pl + 0xD00), ids);
        for (i = 0; i < n; i++) {
            item = find_item_by_id(ids[i]);
            if (item != NULL && get_usable_action_flags__5TItemFPvUiUi(item, 2, 0) != 0 && get_usable_action_flags__5TItemFPvUiUi(item, 1, 0) == 0) {
                add_list_entry__23TShopJudgmentItemWindowFPvii(arg0, item, ids[i]);
            }
        }
        if (*(s16 *)(arg0 + 0x72) <= 0) {
            add_list_entry__20TWindowSubStatusDispFPvi(arg0, -1);
        }
        TLobby__sub_80266E34(arg0);
    }
}

}
