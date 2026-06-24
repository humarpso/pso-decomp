#include "pso/TObjEZRopeBase.h"

extern "C" void fn_8007EBB4(void*);

TObjEZRopeBase::~TObjEZRopeBase() {
    if (m_2c != nullptr) fn_8007EBB4(m_2c);
    m_2c = nullptr;
}
