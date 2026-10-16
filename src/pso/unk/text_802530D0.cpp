#include "types.h"
#include "pso/misc/TWindowHelpItem.h"
#include "pso/item/TItemProArmor.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 find_item_by_id(s32);
}

extern "C" {

s32 TWindowHelpItem::is_item_already_equipped() {
    s32 temp_r3;
    s32 field;
    u32 diff;
    field = *(s32 *)&this->m_a4;
    if (field == -1) {
        return 0;
    }
    temp_r3 = find_item_by_id(field);
    if (temp_r3 == 0) {
        return 0;
    }
    if (((TObjPlayer *)temp_r3)->test_item_flags(8) == 0U) {
        return 0;
    }
    diff = (u32) ((TItemProArmor *)temp_r3)->get_id() - (u32) (s32) this->m_20;
    return (s32) ((u32) __cntlzw(diff) >> 5);
}

}
