#include "pso/TEnemyTaskList.h"

extern "C" void fn_80147A80(void*);

TEnemyTaskList::~TEnemyTaskList() {
    fn_80147A80(m_28);
    fn_80147A80(m_24);
}
