#include "types.h"
#include "pso/misc/TCheckRoomSequence.h"

typedef struct Item_80222FF0 { u8 d[0x14]; } Item_80222FF0;

extern "C" {
s32 compare_version__6TLobbyFPv(Item_80222FF0 *, Item_80222FF0 *);
s32 compare_greater__6TLobbyFPv(Item_80222FF0 *, Item_80222FF0 *);
s32 TLobby__sub_8022318C(Item_80222FF0 *, Item_80222FF0 *);
s32 swap_item_data__6TLobbyFPvPv(Item_80222FF0 *, Item_80222FF0 *);
void sort_shop_items(Item_80222FF0 *items, s32 n, s32 mode);
}

extern "C" {

s32 lookup_item_def__9TItemDataFPv();

s32 TCheckRoomSequence::get_item_def(u32 arg0) {
    if (arg0 != 0U) {
        return lookup_item_def__9TItemDataFPv();
    }
    return 0;
}
void sort_shop_items(Item_80222FF0 *items, s32 n, s32 mode) {
    s32 i;
    s32 j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            switch (mode) {
            case 0:
                if (TLobby__sub_8022318C(&items[i], &items[j]) != 0) {
                    swap_item_data__6TLobbyFPvPv(&items[i], &items[j]);
                }
                break;
            case 1:
                if (compare_greater__6TLobbyFPv(&items[i], &items[j]) != 0) {
                    swap_item_data__6TLobbyFPvPv(&items[i], &items[j]);
                }
                break;
            case 2:
                if (compare_version__6TLobbyFPv(&items[i], &items[j]) != 0) {
                    swap_item_data__6TLobbyFPvPv(&items[i], &items[j]);
                }
                break;
            }
        }
    }
}

}
