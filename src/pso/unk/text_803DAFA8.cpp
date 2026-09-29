#include "types.h"
struct Obj_803DB20C { u8 pad[0x1c]; void *p; };

struct Tex_803DB15C { u32 fmt; u32 pad4; u32 pad8; u32 w; u32 h; u32 sz; u32 flags; };

struct Buf_803DB1B4 { u8 pad[0x14]; u32 size; u32 pad18; void *mem; };

extern "C" {
extern void *lbl_805D7754;
void OSFreeToHeap(void *heap, void *p);
s32 fn_803DB20C(Obj_803DB20C *o);
void GXInitTlutObj(void *, void *, s32, s32, s32);
void GXLoadTlut(void *, s32);
void fn_803DB05C(s32 arg0, s32 arg1, u16 arg2, void *arg3);
s32 GXGetTexBufferSize(u16, u16, u32, u8, u8);
void fn_803DB15C(Tex_803DB15C *arg0);
extern void *lbl_805D7754;
void *OSAllocFromHeap(void *, u32);
s32 fn_803DB1B4(Buf_803DB1B4 *arg0);
}

extern "C" {

void fn_803DB05C(s32 arg0, s32 arg1, u16 arg2, void *arg3) {
    u32 sp8[3];
    GXInitTlutObj(sp8, arg3, arg1, arg2, arg1);
    GXLoadTlut(sp8, arg0);
}

void fn_803DB15C(Tex_803DB15C *arg0) {
    u8 mip;
    if (arg0->flags & 0x80000000) {
        mip = 1;
    } else {
        mip = 0;
    }
    GXGetTexBufferSize(arg0->w, arg0->h, arg0->fmt, mip, 100);
}

s32 fn_803DB1B4(Buf_803DB1B4 *arg0) {
    s32 ret = 0;
    void *p = OSAllocFromHeap(lbl_805D7754, arg0->size);
    if (p == 0) {
        ret = 3;
    } else {
        arg0->mem = p;
    }
    return ret;
}

#pragma push
#pragma scheduling off
#pragma peephole off
s32 fn_803DB20C(Obj_803DB20C *o) {
    OSFreeToHeap(lbl_805D7754, o->p);
    return 0;
}
#pragma pop

}
