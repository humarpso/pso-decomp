#ifndef PSO_SYSTEM_MIDDLEWARE_INTERRUPT_LOCK_H
#define PSO_SYSTEM_MIDDLEWARE_INTERRUPT_LOCK_H

extern "C" {
void middleware_interrupt_lock_leave(void);
void middleware_interrupt_lock_enter(void);
}
extern "C" {
void middleware_interrupt_lock_enter(void);
void middleware_interrupt_lock_leave(void);
}

#endif
