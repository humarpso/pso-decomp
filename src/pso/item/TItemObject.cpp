#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_and_register_item_data__11TItemObjectFPv(void *arg0);
s32 fn_80101A48(s32 arg0, s32 arg1);
int fn_80101A98(int a0);
int fn_80101AA8(void);
void copy_to_item_data__5TItemFPvPv(void *, void *);
void get_item_use_result__9TItemDataFPv(void *);
u8 *find_item_by_id(s32 id);

void copy_and_register_item_data__11TItemObjectFPv(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    get_item_use_result__9TItemDataFPv(&sp8);
}

s32 fn_80101A48(s32 arg0, s32 arg1) {
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

    extern int* lbl_805D53F4;
int fn_80101A98(int a0) {  return lbl_805D53F4[a0]; }

    extern int lbl_805D53F0;
int fn_80101AA8(void) {  return lbl_805D53F0; }

u8 *find_item_by_id(s32 id) {
    s32 lo;
    s32 mid;
    s32 hi;
    u8 *item;

    lo = 0;
    hi = lbl_805D53F0 - 1;
    while (lo < hi) {
        mid = (lo + hi) >> 1;
        if (M2C_FIELD((u8 *) lbl_805D53F4[mid], s32 *, 0xD8) < id) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    item = (u8 *) lbl_805D53F4[lo];
    if (item != NULL && M2C_FIELD(item, s32 *, 0xD8) == id) {
        return item;
    }
    return NULL;
}

}
