#include "types.h"
#include "pso/object/TObjCamera.h"
#include "pso/TObject.h"

extern "C" {

s32 queue_destruction__7TObjectFv(u32);

void TObjCamera::queue_target_destruction() {
    if (((u32) *(u32 *)&this->m_down != 0U) && (((TObject *)(*(u32 *)&this->m_down))->all_parents_unqueued_for_destruction() != 0)) {
        queue_destruction__7TObjectFv(*(u32 *)&this->m_down);
    }
}

}
