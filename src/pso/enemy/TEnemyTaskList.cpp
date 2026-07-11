#include "pso/TEnemyTaskList.h"

extern "C" void free__11TOBoss4RockFUi(void*);

TEnemyTaskList::~TEnemyTaskList() {
    free__11TOBoss4RockFUi(m_28);
    free__11TOBoss4RockFUi(m_24);
}
