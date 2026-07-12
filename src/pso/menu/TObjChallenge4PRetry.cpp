#include "pso/TObjChallenge4PRetry.h"

extern "C" void set_retry_selection__6TLobbyFi(int);

void TObjChallenge4PRetry::run_task() {}

TObjChallenge4PRetry::~TObjChallenge4PRetry() {
    if (m_20 != 0 && m_24 == 0) {
        set_retry_selection__6TLobbyFi(0);
    }
}
