#include "types.h"
#include "pso/unk/TUnk_804CC870.h"

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(void *);
s32 find_entity_by_id(int);
extern const f32 lbl_805DC844;
}

extern "C" {

void TUnk_804CC870::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 entity;
    entity = find_entity_by_id((int) (*(u16 *)((s8 *)arg0 + 0x1C)));
    if (entity != 0) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (void *) (entity + 0x38));
    }
    this->m_48 = (s32) (this->m_48 + 1);
    if ((s32) this->m_48 >= 7) {
        this->m_48 = 0;
    }
    if (this->m_38 <= lbl_805DC844) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
