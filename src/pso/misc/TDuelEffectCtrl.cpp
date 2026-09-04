#include "pso/misc/TDuelEffectCtrl.h"

extern "C" {
void fn_8007FA94(TDuelEffectCtrl*);
void fn_8007FB14(TDuelEffectCtrl*);
}

void TDuelEffectCtrl::render() {}

void TDuelEffectCtrl::run_task() {
    switch (m_state) {
    case 0:
        fn_8007FB14(this);
        break;
    case 1:
        fn_8007FA94(this);
        break;
    }
    ++m_frameCount;
}

TDuelEffectCtrl::~TDuelEffectCtrl() {
    if (m_effect != NULL) {
        m_effect->queue_destruction();
        m_effect = NULL;
    }
}
