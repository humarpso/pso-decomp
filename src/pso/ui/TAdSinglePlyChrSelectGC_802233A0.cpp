#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_802115C0(void *);

void TAdSinglePlyChrSelectGC::swap_item_data(s32 *arg1) {
    struct { u8 _pad[0x20]; } sp8;

    TAdSinglePlyChrSelectGC__sub_802115C0(&sp8);
    ((TAdSinglePlyChrSelectGC *)(&sp8))->copy_item_data(((s32 *)this));
    ((TAdSinglePlyChrSelectGC *)((s32 *)this))->copy_item_data(arg1);
    ((TAdSinglePlyChrSelectGC *)arg1)->copy_item_data(&sp8);
}

}
