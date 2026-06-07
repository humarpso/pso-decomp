#include "types.h"

asm BOOL OSDisableInterrupts(void) {
#include "orig_asm/dolphin/os_interrupt/OSDisableInterrupts.inc"
}

asm BOOL OSEnableInterrupts(void) {
#include "orig_asm/dolphin/os_interrupt/OSEnableInterrupts.inc"
}

asm BOOL OSRestoreInterrupts(register BOOL level) {
#include "orig_asm/dolphin/os_interrupt/OSRestoreInterrupts.inc"
}

extern void** __OSInterruptTable;

void* __OSSetInterruptHandler(s16 interrupt, void* handler) {
    void** table = __OSInterruptTable;
    void* old = table[interrupt];
    table[interrupt] = handler;
    return old;
}

void* __OSGetInterruptHandler(s16 interrupt) {
    void** table = __OSInterruptTable;
    return table[interrupt];
}
