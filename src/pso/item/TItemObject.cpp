#include "types.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemObject.h"
#include "pso/item/TItemData.h"

extern "C" {

s32 is_item_stackable(s32 arg0, s32 arg1);
u8 *find_item_by_id(s32 id);

void TItemObject::copy_and_register_item_data() {
    s32 sp8[4];

    copy_to_item_data(&sp8);
    ((TItemData *)(&sp8))->get_item_use_result();
}

s32 is_item_stackable(s32 arg0, s32 arg1) {
    if (arg0 == 4) {
        return 1;
    }
    if (arg0 != 3) {
        return 0;
    }
    if ((arg1 < 9) && (arg1 != 2)) {
        return 1;
    }
    if (arg1 == 0x10) {
        return 1;
    }
    return 0;
}
}
int get_sorted_item_registry_entry(int a0);
int get_item_registry_count(void);
    extern int* item_registry_sorted_entries;
int get_sorted_item_registry_entry(int a0) {  return item_registry_sorted_entries[a0]; }

    extern int item_registry_count;
int get_item_registry_count(void) {  return item_registry_count; }

u8 *find_item_by_id(s32 id) {
    s32 lo;
    s32 mid;
    s32 hi;
    u8 *item;

    lo = 0;
    hi = item_registry_count - 1;
    while (lo < hi) {
        mid = (lo + hi) >> 1;
        if (*(s32 *)((s8 *)((u8 *) item_registry_sorted_entries[mid]) + 0xD8) < id) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    item = (u8 *) item_registry_sorted_entries[lo];
    if (item != NULL && *(s32 *)((s8 *)item + 0xD8) == id) {
        return item;
    }
    return NULL;
}
