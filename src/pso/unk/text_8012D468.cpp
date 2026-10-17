#include "pso/item/TItemData.h"
#include "pso/item/TUnk_804A5930.h"
#include "types.h"

#include <stddef.h>
#include "pso/player/TObjPlayer.h"
extern "C" {
u16 TObjPlayer__sub_80100474(void *);
void replace_item_with_new_code(void *arg0, u32 arg1);
void TUnk_804A5930::vfunc_31() {
    s32 arg0 = (s32)this;
    TItemData item_data;
    if (TObjPlayer__sub_80100474((void *) (arg0)) >= 0x59D8U) {
        item_data.data1.data_u8[0] = 0;
        item_data.data1.data_u8[1] = 0x32;
        item_data.data1.data_u8[2] = 0;
        replace_item_with_new_code((&item_data.data1.data_u8[0]), (arg0));
    }
}

}
