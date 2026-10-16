#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

void *__dt__17TWindowOptionCtrlFv(void *arg0, s16 arg1);
s32 TWindow__close(void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);

extern void* __vt__17TWindowOptionCtrl[];

void *__dt__17TWindowOptionCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((s8 *)arg0 + 0x18) = (void *) __vt__17TWindowOptionCtrl;
        ((TWindowOptionCtrl *)arg0)->apply_selection_change();
        if ((u32) *(u32 *)((s8 *)arg0 + 0x44) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x44));
            *(u32 *)((s8 *)arg0 + 0x44) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            ((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x40)))->close();
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x3C));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x38));
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x34));
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x30));
            *(u32 *)((s8 *)arg0 + 0x30) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x2C));
            *(u32 *)((s8 *)arg0 + 0x2C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x28) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x28));
            *(u32 *)((s8 *)arg0 + 0x28) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
