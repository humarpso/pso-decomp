#include "pso/system/MiddlewareInterruptLock.h"
#include "pso/misc/TLobby_803CE200.h"
#include "types.h"
#include "pso/misc/TLobby.h"

void TLobby::update_scroll_impl() {
    middleware_interrupt_lock_leave();
}

void TLobby__sub_803CE220(void) {
    middleware_interrupt_lock_enter();
}
