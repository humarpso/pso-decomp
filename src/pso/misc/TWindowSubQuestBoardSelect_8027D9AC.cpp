#include "types.h"
#include "pso/misc/TWindowDD.h"

extern "C" {

void *__dt__26TWindowSubQuestBoardSelectFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_status_display__20TWindowSubStatusDispFls(void *, int);

extern s32 __vt__26TWindowSubQuestBoardSelect[];

void *__dt__26TWindowSubQuestBoardSelectFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__26TWindowSubQuestBoardSelect;
        destroy_status_display__20TWindowSubStatusDispFls(*(void **)((s8 *)arg0 + 0x64), 1);
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
