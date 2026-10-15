#include "types.h"

extern "C" {

void *destroy_and_delete__7TObjectFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern s32 lbl_804E4788[];

void *destroy_and_delete__7TObjectFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E4788;
        if (*(void **)((s8 *)arg0 + 0x11C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x11C)); *(s32 *)((s8 *)arg0 + 0x11C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
