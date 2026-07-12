#include "pso/TObjChallenge4PRetry.h"

extern "C" void TLobby__sub_80293000(int);

void TObjChallenge4PRetry::run_task() {}

TObjChallenge4PRetry::~TObjChallenge4PRetry() {
    if (m_20 != 0 && m_24 == 0) {
        TLobby__sub_80293000(0);
    }
}
