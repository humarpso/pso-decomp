#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_80077AE8(s32 arg0);
s32 fn_80077B34(u32, s32);

extern u32 lbl_805D4E58;

void TAdSinglePlyChrSelectGC__sub_80077AE8(s32 src) {
    if ((u32) lbl_805D4E58 == 0U) {
        lbl_805D4E58 = ((TAdSinglePlyChrSelectGC *)0x704)->alloc();
    }
    fn_80077B34(lbl_805D4E58, src);
}

}
