#include "types.h"
#include "dolphin/os.h"

typedef void (*__OSExceptionHandler)(void);
extern __OSExceptionHandler* __OSExceptionTable;

#pragma push
#pragma peephole off

__OSExceptionHandler __OSSetExceptionHandler(u8 exception, __OSExceptionHandler handler) {
    __OSExceptionHandler old = __OSExceptionTable[exception];
    __OSExceptionTable[exception] = handler;
    return old;
}

__OSExceptionHandler __OSGetExceptionHandler(u8 exception) {
    return __OSExceptionTable[exception];
}

#pragma pop
