#include "pso/system/MiddlewareInterruptLock.h"
#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TLobby__sub_803CE220(void);

void TLobby::update_scroll_impl() {
    middleware_interrupt_lock_leave();
}

void TLobby__sub_803CE220(void) {
    middleware_interrupt_lock_enter();
}

}
