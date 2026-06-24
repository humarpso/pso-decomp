#include "pso/TItemLockCountCtrl.h"

extern "C" void fn_80147A80(void*);

TItemLockCountCtrl::~TItemLockCountCtrl() {
    fn_80147A80(this->m_20);
}
