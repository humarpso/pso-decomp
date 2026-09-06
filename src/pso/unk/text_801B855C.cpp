#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/item/TItemData.h"
#include <stddef.h>

struct Stack_801B8A80 {
    M2C_UNK sp8;
    u8 pad_C[0x8];
    s32 sp14;
    u8 trailing_storage[0x4];
};

extern "C" {
s32 init__9TItemDataFv(void *);
s32 count_items_by_id__10TObjPlayerFPvi(int, void *);
s32 TObjPlayer__sub_801B8C10(u8 *arg0, s8 arg1, s8 arg2, s8 arg3);
s32 init_item_data__10TObjPlayerFPvi(void *, void *);
s32 play_effect_default__10TObjPlayerFii(void *, int);
s32 set_action_flag_2__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801BF914(void *);
s32 insert_item_node__10TObjPlayerFiiiii(int, void *, void *, void *, int);
void TObjPlayer__sub_801B8A80(u8 *arg0, s32 arg1);
}

extern "C" {

s32 TObjPlayer__sub_80011138(s32, s32);
s32 obj_getField1c(s32);
s32 init_owner__5TItemFPvUs(void *, s32);
s32 get_item_type_or_default__9TItemListFPv(void *);
s32 can_pickup_item__10TObjPlayerFPvPv();
int get_item_record__23TShopJudgmentItemWindowFPv(void* p);
int TObjPlayer__sub_801B8DE8(void*);

int fn_801B855C(void) { return 0; }
s32 try_buy_item(s32 arg0, void *arg1) {
    if (can_pickup_item__10TObjPlayerFPvPv() == 0) {
        return 1;
    }
    if (TObjPlayer__sub_80011138(arg0, M2C_FIELD(arg1, s32 *, 0x10) * get_item_type_or_default__9TItemListFPv(arg1)) != 0) {
        init_owner__5TItemFPvUs(arg1, obj_getField1c(arg0));
        return 0;
    }
    return 2;
}

void TObjPlayer__sub_801B8A80(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_801B8A80, sp8) == 0x0) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_801B8A80, sp14) == 0xC) ? 1 : -1];
    Stack_801B8A80 stack;
    if (arg1 > 0) {
        play_effect_default__10TObjPlayerFii((void *) (arg0), (int) (0x384));
        set_action_flag_2__10TObjPlayerFPv((void *) (arg0));
        init_item_data__10TObjPlayerFPvi((void *) (&stack.sp8), (void *) (arg1));
        stack.sp14 = -1;
        insert_item_node__10TObjPlayerFiiiii((int) (M2C_FIELD(arg0, s32 *, 0xD00) + 0x20), (void *) (TObjPlayer__sub_801BF914((void *) (arg0 + 0x84C))), (void *) (arg0), (void *) (&stack.sp8), (int) (-1));
    }
}

s32 TObjPlayer__sub_801B8C10(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) {
    TItemData item_data;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xD00) == 0U) {
        return 0;
    }
    init__9TItemDataFv((void *) (&item_data.data1.data_u8[0]));
    item_data.data1.data_u8[0] = arg1;
    item_data.data1.data_u8[1] = arg2;
    item_data.data1.data_u8[2] = arg3;
    return count_items_by_id__10TObjPlayerFPvi((int) (M2C_FIELD(arg0, u32 *, 0xD00)), (void *) (&item_data.data1.data_u8[0]));
}

}
