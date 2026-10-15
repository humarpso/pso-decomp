#include "types.h"

extern "C" {

void queue_target_destruction__10TObjCameraFPv(void *arg0);

s32 queue_destruction__7TObjectFv(u32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(u32);

void queue_target_destruction__10TObjCameraFPv(void *arg0) {
    if (((u32) *(u32 *)((s8 *)arg0 + 0x14) != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv(*(u32 *)((s8 *)arg0 + 0x14)) != 0)) {
        queue_destruction__7TObjectFv(*(u32 *)((s8 *)arg0 + 0x14));
    }
}

}
