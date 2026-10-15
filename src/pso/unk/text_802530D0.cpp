#include "types.h"
#include "pso/misc/TWindowHelpItem.h"

extern "C" {
s32 find_item_by_id(s32);
u32 test_item_flags__10TObjPlayerFUl(s32, s32);
u16 get_id__13TItemProArmorFv(s32);
}

extern "C" {

s32 TWindowHelpItem::is_item_already_equipped() {
    s32 temp_r3;
    s32 field;
    u32 diff;
    field = *(s32 *)((s8 *)this + 0xA4);
    if (field == -1) {
        return 0;
    }
    temp_r3 = find_item_by_id(field);
    if (temp_r3 == 0) {
        return 0;
    }
    if (test_item_flags__10TObjPlayerFUl(temp_r3, 8) == 0U) {
        return 0;
    }
    diff = (u32) get_id__13TItemProArmorFv(temp_r3) - (u32) (s32) *(s16 *)((s8 *)this + 0x20);
    return (s32) ((u32) __cntlzw(diff) >> 5);
}

}
