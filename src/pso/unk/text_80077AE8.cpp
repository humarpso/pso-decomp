#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_80077AE8(s32 arg0);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 fn_80077B34(u32, s32);

extern u32 lbl_805D4E58;

void TAdSinglePlyChrSelectGC__sub_80077AE8(s32 arg0) {
    if ((u32) lbl_805D4E58 == 0U) {
        lbl_805D4E58 = alloc__23TAdSinglePlyChrSelectGCFPv(0x704);
    }
    fn_80077B34(lbl_805D4E58, arg0);
}

}
