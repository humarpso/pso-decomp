#include "pso/TItemEffLandHit.h"

extern "C" void queue_destruction__7TObjectFv(TObject*);

void TItemEffLandHit::run_task() {
    if (this->m_38) {
        queue_destruction__7TObjectFv(this);
    }
}

TItemEffLandHit::~TItemEffLandHit() {}
