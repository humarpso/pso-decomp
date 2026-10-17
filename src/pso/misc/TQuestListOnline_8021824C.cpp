#include "types.h"
#include "pso/misc/TQuestListOnline.h"

extern "C" {

void *__dt__16TQuestListOnlineFv(void *arg0, s16 arg1);
void TWindow__close(u8 *arg0);
s32 __dl__7TObjectFPv(void *);
void *__dt__15TShopWindowBaseFv(void *self, s16 m);

extern s32 __vt__16TQuestListOnline[];
extern s32 TQuestListOnline__instance;

void *__dt__16TQuestListOnlineFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TQuestListOnline;
        if ((u32) ((TQuestListOnline *)arg0)->list_window != 0U) {
            TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x38)));
            ((TQuestListOnline *)arg0)->list_window = 0U;
        }
        if ((u32) ((TQuestListOnline *)arg0)->description_window != 0U) {
            TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x3C)));
            ((TQuestListOnline *)arg0)->description_window = 0U;
        }
        if ((u32) ((TQuestListOnline *)arg0)->info_window != 0U) {
            TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x40)));
            ((TQuestListOnline *)arg0)->info_window = 0U;
        }
        if ((u32) ((TQuestListOnline *)arg0)->confirm_window != 0U) {
            TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x44)));
            ((TQuestListOnline *)arg0)->confirm_window = 0U;
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
