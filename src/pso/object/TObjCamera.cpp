#include "types.h"
#include "pso/object/TObjCamera.h"
#include "pso/TObject.h"

extern "C" {

s32 queue_destruction__7TObjectFv(u32);

void TObjCamera::queue_target_destruction() {
    if (((u32) *(u32 *)((s8 *)this + 0x14) != 0U) && (((TObject *)(*(u32 *)((s8 *)this + 0x14)))->all_parents_unqueued_for_destruction() != 0)) {
        queue_destruction__7TObjectFv(*(u32 *)((s8 *)this + 0x14));
    }
}

}
