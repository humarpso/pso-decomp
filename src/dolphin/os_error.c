#include "types.h"
#include "dolphin/os.h"

typedef void (*OSExceptionHandler)(void);

extern OSExceptionHandler *__OSExceptionTable;

OSExceptionHandler __OSSetExceptionHandler(u8 exception, OSExceptionHandler handler) {
    OSExceptionHandler old = __OSExceptionTable[exception];
    __OSExceptionTable[exception] = handler;
    return old;
}

OSExceptionHandler __OSGetExceptionHandler(u8 exception) {
    return __OSExceptionTable[exception];
}

void __OSFPUExceptionHandler(void) {
    extern void __my_fpu_handler(void);
    __OSSetExceptionHandler(7, __my_fpu_handler);
    *(vu32 *)0x800000D8 = 0;
    OSReport("FPU-unavailable handler installed\n");
}
