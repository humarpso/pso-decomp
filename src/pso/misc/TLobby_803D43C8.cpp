#include "pso/system/MiddlewareInterruptLock.h"
#include "types.h"

extern "C" {

void gcrna_interrupt_lock_leave(void);
void gcrna_interrupt_lock_enter(void);
void TLobby__sub_803D4408(u8 *arg0, s32 arg1);

void gcrna_interrupt_lock_leave(void) {
    middleware_interrupt_lock_leave();
}

void gcrna_interrupt_lock_enter(void) {
    middleware_interrupt_lock_enter();
}

void TLobby__sub_803D4408(u8 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        *(s32 *)((s8 *)arg0 + 0x74) = arg1;
    }
}

}
