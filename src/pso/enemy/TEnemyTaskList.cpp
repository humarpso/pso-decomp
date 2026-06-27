#include "pso/TEnemyTaskList.h"

extern "C" void TOBoss4Rock__sub_80147A80(void*);

TEnemyTaskList::~TEnemyTaskList() {
    TOBoss4Rock__sub_80147A80(m_28);
    TOBoss4Rock__sub_80147A80(m_24);
}
