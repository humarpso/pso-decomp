#include "types.h"

extern "C" {

void *__dt__19TWindowMessageQuestFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__14TWindowMessageFv(void *, int);

extern s32 __vt__19TWindowMessageQuest[];

void *__dt__19TWindowMessageQuestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowMessageQuest;
        __dt__14TWindowMessageFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
