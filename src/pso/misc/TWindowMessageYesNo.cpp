#include "types.h"
#include "pso/misc/TWindowMessageYesNo.h"
#include "pso/misc/TWindowMessageYesNo.h"
#include "pso/misc/TWindowMessageYesNo.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubShortMail.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/object/TObjCityMainWarp.h"
#include "pso/ui/TAdChrSelASlotGC.h"

extern "C" {
void *__ct__19TWindowMessageYesNoFP7TObjectPvPvPv(void *, void *, void *, void *, void *);
}

extern "C" {

void *__ct__19TWindowMessageYesNoFP7TObjectPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *__dt__19TWindowMessageYesNoFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void TWindowMessageYesNo::render() {  }

void TWindowMessageYesNo::run_task() { if (is_child_visible() != 0) { ((TWindowMenu *)(*(void* *)&this->m_28))->confirm_selection(); } }

extern s32 __vt__19TWindowMessageYesNo[];

void *TWindowMessageYesNo::create(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = new TWindowMessageYesNo((TObject *)arg0, (void *)arg1, (void *)arg2, (void *)arg3);
    return o;
}

void *__dt__19TWindowMessageYesNoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowMessageYesNo;
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x2C)); *(s32 *)((s8 *)arg0 + 0x2C) = 0; }
        if (*(void **)((s8 *)arg0 + 0x28) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x28)); *(s32 *)((s8 *)arg0 + 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__19TWindowMessageYesNo[];
extern void *TWindowMessageYesNo__name;

}
TWindowMessageYesNo::TWindowMessageYesNo(TObject *arg1, void *arg2, void *arg3, void *arg4) : TObject(arg1) {
    *(void **)((s8 *)this + 0x0) = TWindowMessageYesNo__name;
    *(void **)((s8 *)this + 0x24) = arg2;
    *(u32 *)((s8 *)this + 0x28) = 0;
    *(u32 *)((s8 *)this + 0x2C) = 0;
    *(void **)((s8 *)this + 0x20) = arg3;
    *(void **)((s8 *)this + 0x1C) = arg4;
}
