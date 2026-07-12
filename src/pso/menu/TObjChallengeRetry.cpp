#include "pso/TObjChallengeRetry.h"

extern "C" void TLobby__sub_80072308(int);

void TObjChallengeRetry::run_task() {}

TObjChallengeRetry::~TObjChallengeRetry() {
    if (m_20 != 0 && m_24 == 0) {
        TLobby__sub_80072308(0);
    }
}
