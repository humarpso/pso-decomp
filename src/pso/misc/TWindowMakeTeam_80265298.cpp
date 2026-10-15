#include "types.h"

extern "C" {

void *__dt__15TWindowMakeTeamFv(void *arg0, s16 arg1);
void mem_free(void *);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern s32 __vt__15TWindowMakeTeam[];

void *__dt__15TWindowMakeTeamFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TWindowMakeTeam;
        mem_free(*(void **)((s8 *)arg0 + 0x28));
        mem_free(*(void **)((s8 *)arg0 + 0x24));
        if (*(void **)((s8 *)arg0 + 0x34) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x34)); *(s32 *)((s8 *)arg0 + 0x34) = 0; }
        if (*(void **)((s8 *)arg0 + 0x30) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x30)); *(s32 *)((s8 *)arg0 + 0x30) = 0; }
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x2C)); *(s32 *)((s8 *)arg0 + 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
