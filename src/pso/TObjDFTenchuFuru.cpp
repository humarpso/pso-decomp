#include "pso/TObjDFTenchuFuru.h"

extern "C" void fn_80086C44(void*);

void TObjDFTenchuFuru::run_task() {}

TObjDFTenchuFuru::~TObjDFTenchuFuru() {
    if (m_2c != nullptr) fn_80086C44(m_2c);
}
