#include "pso/TObjChallengeRetry.h"

extern "C" void fn_80072308(int);

void TObjChallengeRetry::run_task() {}

TObjChallengeRetry::~TObjChallengeRetry() {
    if (m_20 != 0 && m_24 == 0) {
        fn_80072308(0);
    }
}
