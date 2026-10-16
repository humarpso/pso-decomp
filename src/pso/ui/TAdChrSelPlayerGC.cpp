#include "types.h"
#include "pso/ui/TUnk_804E3008.h"
#include "pso/ui/TAdPlyStatusGC.h"

extern "C" {

void sub_802E0F58__13TUnk_804E3008Fl(void *arg0, s32 arg1);
s32 mem_alloc(s32);
s32 fn_802E0CB0(void *, s32);

extern s32 lbl_805D3F78;

void TUnk_804E3008::sub_802E0F58(s32 arg1) {
    *(s32 *)((s8 *)this + 0) = (s32) lbl_805D3F78;
    *(s32 *)((s8 *)this + 0xFC) = 0;
    *(s32 *)((s8 *)this + 0x100) = 0;
    *(s32 *)((s8 *)this + 0x110) = 0;
    *(s32 *)((s8 *)this + 0x104) = arg1;
    *(s32 *)((s8 *)this + 0x170) = 0;
    *(s32 *)((s8 *)this + 0xE0) = mem_alloc(0xC00);
    TAdPlyStatusGC::get_instance((s32)this, (s32)arg1);
    fn_802E0CB0(this, *(s32 *)((s8 *)this + 0x104));
}

}
