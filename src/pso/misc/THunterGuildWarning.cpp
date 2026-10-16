#include "types.h"
#include "pso/THunterGuildWarning.h"

extern "C" {

void *__ct__19THunterGuildWarningFP7TObjectPv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void THunterGuildWarning__sub_80211774(void *, void *);
void THunterGuildWarning__sub_802119CC(void *);

extern s32 __vt__19THunterGuildWarning[];
extern void *lbl_805D3648;
extern void * THunterGuildWarning__instance;

}
THunterGuildWarning::THunterGuildWarning(TObject *arg1, void *arg2) : TObject(arg1) {
    *(void **)((s8 *)this + 0x0) = lbl_805D3648;
    *(void **)((s8 *)this + 0x1C) = arg2;
    *(u32 *)((s8 *)this + 0x20) = 90;
    THunterGuildWarning__sub_802119CC(this);
    THunterGuildWarning__sub_80211774(this, *(void **)((s8 *)this + 0x1C));
    THunterGuildWarning__instance = this;
}
extern "C" {

}
