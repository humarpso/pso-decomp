#include "pso/system/MiddlewareInterruptLock.h"
#include "types.h"

extern "C" {

void update_scroll_impl__6TLobbyFv(void);
void TLobby__sub_803CE220(void);

void update_scroll_impl__6TLobbyFv(void) {
    middleware_interrupt_lock_leave();
}

void TLobby__sub_803CE220(void) {
    middleware_interrupt_lock_enter();
}

}
