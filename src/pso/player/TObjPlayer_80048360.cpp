#include "types.h"

extern "C" {

void *TObjPlayer__sub_800483A0(void *arg0, s16 arg1);
void tick_countdown_destroy__10TObjPlayerFPv(void *arg0);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 queue_destruction__7TObjectFv();

void tick_countdown_destroy__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;

    *(s32 *)((s8 *)arg0 + 0x2C) = (s32) (*(s32 *)((s8 *)arg0 + 0x2C) + *(s32 *)((s8 *)arg0 + 0x38));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x24) - 1;
    *(s32 *)((s8 *)arg0 + 0x24) = temp_r0;
    if (temp_r0 <= 0) {
        queue_destruction__7TObjectFv();
    }
}

extern s32 direction_line_object_dispatch_table[];

void *TObjPlayer__sub_800483A0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = direction_line_object_dispatch_table;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
