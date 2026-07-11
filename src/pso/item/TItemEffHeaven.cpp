#include "pso/TItemEffHeaven.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TItemEffHeaven::run_task() {}

TItemEffHeaven::~TItemEffHeaven() {
    for (int i = 0; i != 3; i++) {
        request_destroy__11TBoss4Type2FUi(m_arr[i]);
    }
}
