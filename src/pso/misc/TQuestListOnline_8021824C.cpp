#include "types.h"

extern "C" {

void *__dt__16TQuestListOnlineFv(void *arg0, s16 arg1);
s32 TWindow__close(void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__15TShopWindowBaseFv(void *, s32);

extern s32 __vt__16TQuestListOnline[];
extern s32 TQuestListOnline__instance;

void *__dt__16TQuestListOnlineFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TQuestListOnline;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x38));
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x3C));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x40));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x44) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x44));
            *(u32 *)((s8 *)arg0 + 0x44) = 0U;
        }
        TQuestListOnline__instance = 0;
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
