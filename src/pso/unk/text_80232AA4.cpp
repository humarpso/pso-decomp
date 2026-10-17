#include "types.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/system/vector.h"
#include "pso/unk/TUnk_804CC870.h"

extern "C" {
void *find_entity_by_id(u16 id);
extern const f32 lbl_805DC844;
void TUnk_804CC870::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 entity;
    entity = (s32)find_entity_by_id((*(u16 *)((s8 *)arg0 + 0x1C)));
    if (entity != 0) {
        VecCopy((Vec *)(arg0 + 0x20), (const Vec *)(entity + 0x38));
    }
    this->m_48 = (this->m_48 + 1);
    if ((s32) this->m_48 >= 7) {
        this->m_48 = 0;
    }
    if (this->m_38 <= lbl_805DC844) {
        queue_destruction__7TObjectFv((arg0));
    }
}

}
