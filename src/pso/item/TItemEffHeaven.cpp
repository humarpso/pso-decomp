#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemEffHeaven.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TItemEffHeaven::run_task() {}

TItemEffHeaven::~TItemEffHeaven() {
    for (int i = 0; i != 3; i++) {
        request_destroy__11TBoss4Type2FUi(m_arr[i]);
    }
}
#else
#if PSO_CLASS_PACKAGE == 0x80108FEC
#include "types.h"

extern "C" {

int destroy__14TItemEffHeavenFPv(void* p);
int queue_destruction__7TObjectFv(void*);

int destroy__14TItemEffHeavenFPv(void* p) { return queue_destruction__7TObjectFv(p); }

}
#endif
#endif
