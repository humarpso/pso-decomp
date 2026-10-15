#include "types.h"

extern "C" {

void swap_item_data__23TAdSinglePlyChrSelectGCFPvPv(s32 *arg0, s32 *arg1);
s32 copy_item_data__23TAdSinglePlyChrSelectGCFPv(void *, void *);
s32 TAdSinglePlyChrSelectGC__sub_802115C0(void *);

void swap_item_data__23TAdSinglePlyChrSelectGCFPvPv(s32 *arg0, s32 *arg1) {
    struct { u8 _pad[0x20]; } sp8;

    TAdSinglePlyChrSelectGC__sub_802115C0(&sp8);
    copy_item_data__23TAdSinglePlyChrSelectGCFPv(&sp8, arg0);
    copy_item_data__23TAdSinglePlyChrSelectGCFPv(arg0, arg1);
    copy_item_data__23TAdSinglePlyChrSelectGCFPv(arg1, &sp8);
}

}
