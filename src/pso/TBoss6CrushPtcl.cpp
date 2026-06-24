#include "pso/TBoss6CrushPtcl.h"

extern "C" {
void fn_80086C44(u32);
void queue_destruction__7TObjectFv(void*);
}

void TBoss6CrushPtcl::run_task() {
    m_1C++;
    if (m_1C >= 6) {
        if (m_20 != 0) {
            fn_80086C44(m_20);
            m_20 = 0;
        }
        if (m_24 != 0) {
            fn_80086C44(m_24);
            m_24 = 0;
        }
        queue_destruction__7TObjectFv(this);
    }
}

TBoss6CrushPtcl::~TBoss6CrushPtcl() {}
