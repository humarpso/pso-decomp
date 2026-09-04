#include "pso/TObjChallengeRetry.h"

extern "C" void TLobby__sub_80072308(int);

void TObjChallengeRetry::run_task() {}

TObjChallengeRetry::~TObjChallengeRetry() {
    if (m_20 != 0 && m_24 == 0) {
        TLobby__sub_80072308(0);
    }
}

#include "types.h"

extern "C" {

int fn_800733C4(void);
int is_visible__17TWindowSubComCardFPv(void* p);
void set_loss_flag__6TLobbyFPv(void* p);

int fn_800733C4(void) { return 0; }

}
