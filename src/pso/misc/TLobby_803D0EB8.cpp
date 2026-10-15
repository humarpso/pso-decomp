#include "pso/system/MiddlewareInterruptLock.h"
#include "types.h"

extern "C" {

void set_callback__6TLobbyFUii(u32 arg0, s32 arg1);
void notify_dvd_read__6TLobbyFv(void);
void enter_lock__6TLobbyFv(void);

extern u32 log_printf_callback;
extern s32 lobby_log_callback_arg;

void set_callback__6TLobbyFUii(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        log_printf_callback = 0U;
        lobby_log_callback_arg = 0;
        return;
    }
    log_printf_callback = arg0;
    lobby_log_callback_arg = arg1;
}

void notify_dvd_read__6TLobbyFv(void) {
    middleware_interrupt_lock_leave();
}

void enter_lock__6TLobbyFv(void) {
    middleware_interrupt_lock_enter();
}

}
