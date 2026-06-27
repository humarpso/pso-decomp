#include "pso/TObjDFTenchuFuru.h"

extern "C" void TBoss4Type2__sub_80086C44(void*);

void TObjDFTenchuFuru::run_task() {}

TObjDFTenchuFuru::~TObjDFTenchuFuru() {
    if (m_2c != nullptr) TBoss4Type2__sub_80086C44(m_2c);
}
