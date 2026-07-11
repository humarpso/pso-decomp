#include "pso/TBoss6CrushPtcl.h"

extern "C" {
void request_destroy__11TBoss4Type2FUi(u32);
void queue_destruction__7TObjectFv(void*);
}

void TBoss6CrushPtcl::run_task() {
    m_1C++;
    if (m_1C >= 6) {
        if (m_20 != 0) {
            request_destroy__11TBoss4Type2FUi(m_20);
            m_20 = 0;
        }
        if (m_24 != 0) {
            request_destroy__11TBoss4Type2FUi(m_24);
            m_24 = 0;
        }
        queue_destruction__7TObjectFv(this);
    }
}

TBoss6CrushPtcl::~TBoss6CrushPtcl() {}
