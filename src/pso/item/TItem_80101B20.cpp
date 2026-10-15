#include "types.h"
#include "pso/item/TItem.h"
struct TItem_80101B20 {
    u8 pad[0xD8];
    s32 id;
};

struct TItem_80101BE4 {
    u8 pad[0xD8];
    s32 id;
};

extern "C" {
void *memcpy(void *, const void *, u32);
extern s32 item_registry_count;
extern TItem_80101B20 **item_registry_sorted_entries;
void *memcpy(void *, const void *, u32);
extern s32 item_registry_count;
extern TItem_80101B20 **item_registry_sorted_entries;
extern s32 lbl_805D5450;
}

extern "C" {

s32 TItem::unregister_item() {
    TItem_80101B20 *item = (TItem_80101B20 *)this;
    s32 lo;
    s32 id;
    s32 mid;
    s32 hi;
    lo = 0;
    id = item->id;
    hi = item_registry_count - 1;
    TItem_80101B20 **p;
    while (lo < hi) {
        mid = (lo + hi) >> 1;
        if (item_registry_sorted_entries[mid]->id < id) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    p = &item_registry_sorted_entries[lo];
    if (*p == item) {
        memcpy(p, &item_registry_sorted_entries[lo + 1], (item_registry_count - (lo + 1)) * 4);
        item_registry_count--;
        item_registry_sorted_entries[item_registry_count] = NULL;
        return id;
    }
    return -1;
}
s32 TItem::insert_sorted_by_id() {
    TItem_80101BE4 *item = (TItem_80101BE4 *)this;
    s32 id;
    s32 lo;
    s32 mid;
    s32 hi;
    id = item->id;
    hi = item_registry_count - 1;
    TItem_80101BE4 **p;
    if (id == -1) {
        lbl_805D5450 = 1;
        return id;
    }
    if (hi > -1 && id < (*(TItem_80101BE4 ** *)&item_registry_sorted_entries)[hi]->id) {
        lo = 0;
        while (lo < hi) {
            mid = (lo + hi) >> 1;
            if ((*(TItem_80101BE4 ** *)&item_registry_sorted_entries)[mid]->id < id) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        p = &(*(TItem_80101BE4 ** *)&item_registry_sorted_entries)[lo];
        if (id == (*p)->id) {
            lbl_805D5450 = 1;
            return id;
        }
        memcpy(&(*(TItem_80101BE4 ** *)&item_registry_sorted_entries)[lo + 1], p, (item_registry_count - lo) * 4);
    } else {
        lo = item_registry_count;
    }
    (*(TItem_80101BE4 ** *)&item_registry_sorted_entries)[lo] = item;
    item_registry_count++;
    return id;
}

}
