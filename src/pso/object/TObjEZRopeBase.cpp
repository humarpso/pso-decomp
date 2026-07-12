#include "pso/TObjEZRopeBase.h"

extern "C" void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

TObjEZRopeBase::~TObjEZRopeBase() {
    if (m_2c != nullptr) { safe_free__23TAdSinglePlyChrSelectGCFUi(m_2c); m_2c = nullptr; }
}
