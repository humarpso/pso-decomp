











#include "types.h"
#include "dolphin/os.h"
#include <stdarg.h>

extern int vprintf(const char *fmt, va_list args);





asm void OSReport_prologue(void) {
#include "orig_asm/dolphin/os_report/OSReport_prologue.inc"
}










void OSReport(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
}



















void OSPanic(const char *file, int line, const char *fmt, ...) {
    va_list args;
    u32 *sp;
    int i;

    OSDisableInterrupts();

    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);

    OSReport(" in \"%s\" on line %d.\n", file, line);
    OSReport("\nAddress:   Back Chain   LR Save\n");

    sp = (u32 *)OSGetStackPointer();
    for (i = 0; sp != NULL && (u32)sp != 0xFFFFFFFF && i < 16; i++) {
        OSReport("0x%08x  0x%08x   0x%08x\n", (u32)sp, sp[0], sp[1]);
        sp = (u32 *)sp[0];
    }

    PPCHalt();
}
