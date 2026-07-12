#include "types.h"

extern "C" {

s32 get_item_def__18TCheckRoomSequenceFUi(u32 arg0);
s32 lookup_item_def__9TItemDataFPv();

s32 get_item_def__18TCheckRoomSequenceFUi(u32 arg0) {
    if (arg0 != 0U) {
        return lookup_item_def__9TItemDataFPv();
    }
    return 0;
}

}
