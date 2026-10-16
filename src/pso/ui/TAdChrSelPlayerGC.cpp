#include "types.h"
#include "pso/ui/TAdPlyStatusGC.h"

extern "C" {

void TAdChrSelPlayerGC__ct(void *arg0, s32 arg1);
s32 mem_alloc(s32);
s32 fn_802E0CB0(void *, s32);

extern s32 lbl_805D3F78;

void TAdChrSelPlayerGC__ct(void *arg0, s32 arg1) {
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3F78;
    *(s32 *)((s8 *)arg0 + 0xFC) = 0;
    *(s32 *)((s8 *)arg0 + 0x100) = 0;
    *(s32 *)((s8 *)arg0 + 0x110) = 0;
    *(s32 *)((s8 *)arg0 + 0x104) = arg1;
    *(s32 *)((s8 *)arg0 + 0x170) = 0;
    *(s32 *)((s8 *)arg0 + 0xE0) = mem_alloc(0xC00);
    TAdPlyStatusGC::get_instance((s32)arg0, (s32)arg1);
    fn_802E0CB0(arg0, *(s32 *)((s8 *)arg0 + 0x104));
}

}
