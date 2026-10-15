#include "types.h"

extern "C" {

void *TWindowOptionCtrl__ct(void *arg0);
void init_selection_indices__17TWindowOptionCtrlFv(void *);
void *__ct__15TAdPlayerLoadGCFv(void *, void *, int);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern s32 __vt__17TWindowOptionCtrl[];
extern void *lbl_805D39A8;

void *TWindowOptionCtrl__ct(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowOptionCtrl;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D39A8;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(u32 *)((s8 *)arg0 + 0x30) = 0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    *(u32 *)((s8 *)arg0 + 0x38) = 0;
    *(u32 *)((s8 *)arg0 + 0x3C) = 0;
    *(u32 *)((s8 *)arg0 + 0x40) = 0;
    *(u32 *)((s8 *)arg0 + 0x44) = 0;
    *(u32 *)((s8 *)arg0 + 0x48) = 0;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = __ct__15TAdPlayerLoadGCFv(o, arg0, 2);
    }
    *(void **)((s8 *)arg0 + 0x4C) = o;
    init_selection_indices__17TWindowOptionCtrlFv(arg0);
    *(u32 *)((s8 *)arg0 + 0x24) = 4;
    *(u8 *)((s8 *)arg0 + 0x1D) = 0;
    *(u8 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}
