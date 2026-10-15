#include "types.h"

extern "C" {

void *THunterGuildWarning__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void THunterGuildWarning__sub_80211774(void *, void *);
void THunterGuildWarning__sub_802119CC(void *);

extern s32 __vt__19THunterGuildWarning[];
extern void *lbl_805D3648;
extern void * THunterGuildWarning__instance;

void *THunterGuildWarning__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__19THunterGuildWarning;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3648;
    *(void **)((s8 *)arg0 + 0x1C) = arg2;
    *(u32 *)((s8 *)arg0 + 0x20) = 90;
    THunterGuildWarning__sub_802119CC(arg0);
    THunterGuildWarning__sub_80211774(arg0, *(void **)((s8 *)arg0 + 0x1C));
    THunterGuildWarning__instance = arg0;
    return arg0;
}

}
