#include "pso/misc/TDuelEffectCtrl.h"

extern "C" {
extern TObject* tl_clipout;
extern const char* lbl_805D28D8;
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

TDuelEffectCtrl::TDuelEffectCtrl(TObject* parent, u8 state) : TObject(parent) {
    m_name = lbl_805D28D8;
    m_state = state;
    m_frameCount = 0;
    m_effect = new TObject(tl_clipout);
}
