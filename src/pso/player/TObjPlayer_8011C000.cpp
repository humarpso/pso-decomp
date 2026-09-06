#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TItemDrop__sub_8010663C(u32, s32, s32, s32);
M2C_UNK TLobby__sub_801044B8(s32 *);
extern void *item_mgr;
void drop_item_from_slot__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TItemDrop__sub_80106818(u32, s32, s32);
M2C_UNK TLobby__sub_801044B8(s32 *);
extern void *item_mgr;
void drop_item__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK TItemDrop__sub_80106930(u32, s32, s32);
M2C_UNK TLobby__sub_801044B8(s32 *);
extern void *item_mgr;
void drop_meseta_from_slot__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 TObjPlayer__sub_8011C914(s32);
s32 get_unit_attribute_index__10TObjPlayerFUc(u8 arg0);
extern void *item_pmt_tbl;
s32 TObjPlayer__sub_8011C940(s32 arg0, s32 arg1);
s32 TItemData__sub_8010EEDC(s32);
extern s32 lbl_805D2B10;
s32 get_item_by_slot_flag__10TObjPlayerFUc(u8 arg0);
s32 TItemDrop__sub_801065F8(int, void *, void *);
f32 TObjPlayer__sub_8011C2C4(void *);
s32 __cvt_fp2unsigned(f32);
extern void *item_mgr;
void TObjPlayer__sub_8011C328(u32 arg0, s32 arg1);
}

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

void TObjPlayer__sub_8011C328(u32 arg0, s32 arg1) {
    if ((u32) (*(u32 *)&item_mgr) != 0U) {
        TItemDrop__sub_801065F8((int) ((*(u32 *)&item_mgr)), (void *) (arg0), (void *) (arg1));
        return;
    }
    __cvt_fp2unsigned((f32) arg0 * TObjPlayer__sub_8011C2C4((void *) (arg1)));
}

void drop_item_from_slot__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;
    s32 temp_r5;
    sp8 = arg1;
    if ((u32) (*(u32 *)&item_mgr) != 0U) {
        TLobby__sub_801044B8(&sp8);
        temp_r5 = sp8 - 1;
        sp8 = temp_r5;
        TItemDrop__sub_8010663C((*(u32 *)&item_mgr), arg0, temp_r5, arg2);
    }
}
void drop_item__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r4;
    sp8 = arg0;
    if ((u32) (*(u32 *)&item_mgr) != 0U) {
        TLobby__sub_801044B8(&sp8);
        temp_r4 = sp8 - 1;
        sp8 = temp_r4;
        TItemDrop__sub_80106818((*(u32 *)&item_mgr), temp_r4, arg1);
    }
}
void drop_meseta_from_slot__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r4;
    sp8 = arg0;
    if ((u32) (*(u32 *)&item_mgr) != 0U) {
        TLobby__sub_801044B8(&sp8);
        temp_r4 = sp8 - 1;
        sp8 = temp_r4;
        TItemDrop__sub_80106930((*(u32 *)&item_mgr), temp_r4, arg1);
    }
}
s32 get_unit_attribute_index__10TObjPlayerFUc(u8 arg0) {
    if ((arg0 & 0x3F) && !(arg0 & 0x80)) {
        return TObjPlayer__sub_8011C914(arg0 + 0x1CB);
    }
    return 0;
}
s32 TObjPlayer__sub_8011C940(s32 arg0, s32 arg1) {
    if ((arg0 >= 0) && (arg0 < 8)) {
        return M2C_FIELD(M2C_FIELD((*(u8 * *)&item_pmt_tbl), s32 *, 0x28), M2C_UNK *, (arg0 * 4)) + (arg1 * 8);
    }
    return 0;
}
s32 get_item_by_slot_flag__10TObjPlayerFUc(u8 arg0) {
    if (arg0 & 0x3F) {
        if (arg0 & 0x80) {
            return TItemData__sub_8010EEDC(0x1F4);
        }
        if ((arg0 != 0) && (arg0 < 0x29U)) {
            return TItemData__sub_8010EEDC(arg0 + 0x1CB);
        }
        goto block_6;
    }
block_6:
    return lbl_805D2B10;
}

}
