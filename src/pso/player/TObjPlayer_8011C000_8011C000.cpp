#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct Thing__8011c1e8_8011C000 { u8 a; u8 b; } Thing;

s32 get_item_pmt_entry__10TObjPlayerFUc(u8 arg0);
s32 get_shield_pmt_entry__10TObjPlayerFUc(u8 arg0);
void register_item_drop__10TObjPlayerFPv(void *arg0);
M2C_UNK set_drop_index__9TItemDropFPvPv(void *, void *);

extern void *item_pmt_tbl;

s32 get_item_pmt_entry__10TObjPlayerFUc(u8 arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(item_pmt_tbl, void **, 0x50);
    if ((s32) M2C_FIELD(temp_r5, s32 *, 0) > (s32) arg0) {
        return M2C_FIELD(temp_r5, s32 *, 4) + ((arg0 * 8) & 0x7F8);
    }
    return 0;
}

extern void *item_pmt_tbl;

s32 get_shield_pmt_entry__10TObjPlayerFUc(u8 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return M2C_FIELD(item_pmt_tbl, s32 *, 0x4C) + (arg0 * 0x18);
}

extern void *item_mgr;

void register_item_drop__10TObjPlayerFPv(void *arg0) {
    Thing *p = (Thing *) arg0;

    if (p != 0 && item_mgr != 0 && p->a == 1 && p->b == 1) {
        set_drop_index__9TItemDropFPvPv(item_mgr, p);
    }
}

}
