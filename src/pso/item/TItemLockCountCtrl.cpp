#include "pso/TItemLockCountCtrl.h"

extern "C" void TOBoss4Rock__sub_80147A80(void*);

TItemLockCountCtrl::~TItemLockCountCtrl() {
    TOBoss4Rock__sub_80147A80(this->m_20);
}
