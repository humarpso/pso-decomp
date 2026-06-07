#include "types.h"

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
