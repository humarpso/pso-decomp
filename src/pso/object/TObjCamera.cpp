#include "types.h"
#include "pso/object/TObjCamera.h"
#include "pso/TObject.h"

extern "C" {

void queue_destruction__7TObjectFv(void *arg0);

void TObjCamera::queue_target_destruction() {
    if (((u32) this->m_down != 0U) && (((TObject *)(this->m_down))->all_parents_unqueued_for_destruction() != 0)) {
        queue_destruction__7TObjectFv(this->m_down);
    }
}

}
