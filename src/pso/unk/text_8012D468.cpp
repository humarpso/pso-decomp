#include "pso/item/TItemData.h"
#include "types.h"

#include <stddef.h>
#include "pso/player/TObjPlayer.h"
extern "C" {
u16 TObjPlayer__sub_80100474(void *);
s32 replace_item_with_new_code(void *, void *);
}

extern "C" {

void TObjPlayer::replace_item_if_value_exceeds() {
    s32 arg0 = (s32)this;
    TItemData item_data;
    if (TObjPlayer__sub_80100474((void *) (arg0)) >= 0x59D8U) {
        item_data.data1.data_u8[0] = 0;
        item_data.data1.data_u8[1] = 0x32;
        item_data.data1.data_u8[2] = 0;
        replace_item_with_new_code((void *) (&item_data.data1.data_u8[0]), (void *) (arg0));
    }
}

}
