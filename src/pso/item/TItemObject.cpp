#include "types.h"

extern "C" {

void copy_and_register_item_data__11TItemObjectFPv(void *arg0);
s32 is_item_stackable(s32 arg0, s32 arg1);
int get_sorted_item_registry_entry(int a0);
int get_item_registry_count(void);
void copy_to_item_data__5TItemFPvPv(void *, void *);
void get_item_use_result__9TItemDataFPv(void *);
u8 *find_item_by_id(s32 id);

void copy_and_register_item_data__11TItemObjectFPv(void *arg0) {
    s32 sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    get_item_use_result__9TItemDataFPv(&sp8);
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

}
