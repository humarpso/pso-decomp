#include "pso/TItemEffEquip.h"

extern "C" int  all_parents_unqueued_for_destruction__7TObjectFv(TObject*);
extern "C" void request_destroy__11TBoss4Type2FUi(void*);
extern "C" void queue_destruction__7TObjectFv(TObject*);

void TItemEffEquip::run_task() {
    if (all_parents_unqueued_for_destruction__7TObjectFv((TObject*)this->m_1c) == 0) {
        this->m_1c = NULL;
        queue_destruction__7TObjectFv(this);
    }
}

TItemEffEquip::~TItemEffEquip() {
    request_destroy__11TBoss4Type2FUi(this->m_20);
}
