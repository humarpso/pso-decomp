#include "pso/TObjDFTenchuFuru.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TObjDFTenchuFuru::run_task() {}

TObjDFTenchuFuru::~TObjDFTenchuFuru() {
    if (m_2c != nullptr) request_destroy__11TBoss4Type2FUi(m_2c);
}
