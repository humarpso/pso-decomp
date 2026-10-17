#include "types.h"

extern "C" {

void *__dt__12TObjQuestColFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
u8 *__dt__16TObjQuestColBaseFv(u8 *arg0, s16 arg1);

extern s32 __vt__12TObjQuestCol[];

void *__dt__12TObjQuestColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjQuestCol;
        __dt__16TObjQuestColBaseFv((u8 *)arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
