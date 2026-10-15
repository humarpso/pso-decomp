#include "types.h"

extern "C" {

void *delete_instance__7TObjectFPvs(void *arg0, s16 arg1);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);

extern s32 quest_bgm_object_dispatch_table[];
extern void *pending_destroy_object;

void *delete_instance__7TObjectFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = quest_bgm_object_dispatch_table;
        if (pending_destroy_object == arg0) {
            pending_destroy_object = NULL;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
