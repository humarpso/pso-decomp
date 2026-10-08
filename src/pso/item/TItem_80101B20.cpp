#include "types.h"
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
extern s32 lbl_805D53F0;
extern TItem_80101B20 **lbl_805D53F4;
s32 unregister_item__5TItemFPv(TItem_80101B20 *item);
void *memcpy(void *, const void *, u32);
extern s32 lbl_805D53F0;
extern TItem_80101B20 **lbl_805D53F4;
extern s32 lbl_805D5450;
s32 insert_sorted_by_id__5TItemFPv(TItem_80101BE4 *item);
}

extern "C" {

s32 unregister_item__5TItemFPv(TItem_80101B20 *item) {
    s32 lo;
    s32 id;
    s32 mid;
    s32 hi;
    lo = 0;
    id = item->id;
    hi = lbl_805D53F0 - 1;
    TItem_80101B20 **p;
    while (lo < hi) {
        mid = (lo + hi) >> 1;
        if (lbl_805D53F4[mid]->id < id) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    p = &lbl_805D53F4[lo];
    if (*p == item) {
        memcpy(p, &lbl_805D53F4[lo + 1], (lbl_805D53F0 - (lo + 1)) * 4);
        lbl_805D53F0--;
        lbl_805D53F4[lbl_805D53F0] = NULL;
        return id;
    }
    return -1;
}
s32 insert_sorted_by_id__5TItemFPv(TItem_80101BE4 *item) {
    s32 id;
    s32 lo;
    s32 mid;
    s32 hi;
    id = item->id;
    hi = lbl_805D53F0 - 1;
    TItem_80101BE4 **p;
    if (id == -1) {
        lbl_805D5450 = 1;
        return id;
    }
    if (hi > -1 && id < (*(TItem_80101BE4 ** *)&lbl_805D53F4)[hi]->id) {
        lo = 0;
        while (lo < hi) {
            mid = (lo + hi) >> 1;
            if ((*(TItem_80101BE4 ** *)&lbl_805D53F4)[mid]->id < id) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        p = &(*(TItem_80101BE4 ** *)&lbl_805D53F4)[lo];
        if (id == (*p)->id) {
            lbl_805D5450 = 1;
            return id;
        }
        memcpy(&(*(TItem_80101BE4 ** *)&lbl_805D53F4)[lo + 1], p, (lbl_805D53F0 - lo) * 4);
    } else {
        lo = lbl_805D53F0;
    }
    (*(TItem_80101BE4 ** *)&lbl_805D53F4)[lo] = item;
    lbl_805D53F0++;
    return id;
}

}
