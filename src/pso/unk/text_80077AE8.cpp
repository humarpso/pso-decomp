#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_80077AE8(s32 arg0);
u32 *fn_80077B34(u32 *dst, u32 *src);

extern u32 lbl_805D4E58;

void TAdSinglePlyChrSelectGC__sub_80077AE8(s32 src) {
    if ((u32) lbl_805D4E58 == 0U) {
        lbl_805D4E58 = ((TAdSinglePlyChrSelectGC *)0x704)->alloc();
    }
    fn_80077B34((u32 *)lbl_805D4E58, (u32 *)src);
}

}
