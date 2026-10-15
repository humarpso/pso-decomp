#include "types.h"

extern "C" {
s32 find_item_by_id(s32);
u32 test_item_flags__10TObjPlayerFPvUi(s32, s32);
u16 get_id__13TItemProArmorFPv(s32);
s32 is_item_already_equipped__15TWindowHelpItemFPv(void *arg0);
}

extern "C" {

s32 is_item_already_equipped__15TWindowHelpItemFPv(void *arg0) {
    s32 temp_r3;
    s32 field;
    u32 diff;
    field = *(s32 *)((s8 *)arg0 + 0xA4);
    if (field == -1) {
        return 0;
    }
    temp_r3 = find_item_by_id(field);
    if (temp_r3 == 0) {
        return 0;
    }
    if (test_item_flags__10TObjPlayerFPvUi(temp_r3, 8) == 0U) {
        return 0;
    }
    diff = (u32) get_id__13TItemProArmorFPv(temp_r3) - (u32) (s32) *(s16 *)((s8 *)arg0 + 0x20);
    return (s32) ((u32) __cntlzw(diff) >> 5);
}

}
