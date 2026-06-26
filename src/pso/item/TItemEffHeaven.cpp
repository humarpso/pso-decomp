#include "pso/TItemEffHeaven.h"

extern "C" void fn_80086C44(void*);

void TItemEffHeaven::run_task() {}

TItemEffHeaven::~TItemEffHeaven() {
    for (int i = 0; i != 3; i++) {
        fn_80086C44(m_arr[i]);
    }
}
