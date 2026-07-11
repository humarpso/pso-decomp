#include "pso/TItemLockCountCtrl.h"

extern "C" void free__11TOBoss4RockFUi(void*);

TItemLockCountCtrl::~TItemLockCountCtrl() {
    free__11TOBoss4RockFUi(this->m_20);
}
