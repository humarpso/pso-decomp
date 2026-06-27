#include "pso/TItemEffHeaven.h"

extern "C" void TBoss4Type2__sub_80086C44(void*);

void TItemEffHeaven::run_task() {}

TItemEffHeaven::~TItemEffHeaven() {
    for (int i = 0; i != 3; i++) {
        TBoss4Type2__sub_80086C44(m_arr[i]);
    }
}
