#include "types.h"
#include "pso/misc/TWindowHelpItem.h"
#include "pso/item/TItemProArmor.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u8 *find_item_by_id(s32 id);
s32 TWindowHelpItem::is_item_already_equipped() {
    s32 item;
    s32 field;
    u32 diff;
    field = *(s32 *)&this->m_a4;
    if (field == -1) {
        return 0;
    }
    item = (s32)find_item_by_id(field);
    if (item == 0) {
        return 0;
    }
    if (((TObjPlayer *)item)->test_item_flags(8) == 0U) {
        return 0;
    }
    diff = (u32) ((TItemProArmor *)item)->get_id() - (u32) (s32) this->m_20;
    return (s32) ((u32) __cntlzw(diff) >> 5);
}

}
