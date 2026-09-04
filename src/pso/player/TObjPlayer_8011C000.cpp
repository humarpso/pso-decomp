#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void drop_item__10TObjPlayerFii(s32 arg0, s32 arg1);
void drop_item_from_slot__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void drop_meseta_from_slot__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 get_item_by_slot_flag__10TObjPlayerFUc(u8 arg0);
s32 get_unit_attribute_index__10TObjPlayerFUc(u8 arg0);
s32 TItemData__sub_8010EEDC(s32);
M2C_UNK TItemDrop__sub_8010663C(u32, s32, s32, s32);
M2C_UNK TItemDrop__sub_80106818(u32, s32, s32);
M2C_UNK TItemDrop__sub_80106930(u32, s32, s32);
M2C_UNK TLobby__sub_801044B8(s32 *);
s32 TObjPlayer__sub_8011C914(s32);

extern u32 item_mgr;

void drop_item_from_slot__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;
    s32 temp_r5;

    sp8 = arg1;
    if ((u32) item_mgr != 0U) {
        TLobby__sub_801044B8(&sp8);
        temp_r5 = sp8 - 1;
        sp8 = temp_r5;
        TItemDrop__sub_8010663C(item_mgr, arg0, temp_r5, arg2);
    }
}

extern u32 item_mgr;

void drop_item__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r4;

    sp8 = arg0;
    if ((u32) item_mgr != 0U) {
        TLobby__sub_801044B8(&sp8);
        temp_r4 = sp8 - 1;
        sp8 = temp_r4;
        TItemDrop__sub_80106818(item_mgr, temp_r4, arg1);
    }
}

extern u32 item_mgr;

void drop_meseta_from_slot__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r4;

    sp8 = arg0;
    if ((u32) item_mgr != 0U) {
        TLobby__sub_801044B8(&sp8);
        temp_r4 = sp8 - 1;
        sp8 = temp_r4;
        TItemDrop__sub_80106930(item_mgr, temp_r4, arg1);
    }
}

s32 get_unit_attribute_index__10TObjPlayerFUc(u8 arg0) {
    if ((arg0 & 0x3F) && !(arg0 & 0x80)) {
        return TObjPlayer__sub_8011C914(arg0 + 0x1CB);
    }
    return 0;
}

extern s32 lbl_805D2B10;

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
