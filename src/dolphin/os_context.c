#include "dolphin/os.h"

#define OS_CURRENT_CONTEXT     ((volatile u32*)0x800000D4)
#define OS_CURRENT_CONTEXT_PA  ((volatile u32*)0x800000C0)
#define OS_FPU_CONTEXT         ((volatile u32*)0x800000D8)

void __OSSetCurrentContext_noFPU(void);

asm void OSSetCurrentContext(register OSContext* context) {
#include "orig_asm/dolphin/os_context/OSSetCurrentContext.inc"
}

OSContext* OSGetCurrentContext(void) {
    return *(OSContext**)0x800000D4;
}

asm s32 OSSaveContext(register OSContext* context) {
#include "orig_asm/dolphin/os_context/OSSaveContext.inc"
}

asm void OSLoadContext(register OSContext* context) {
#include "orig_asm/dolphin/os_context/OSLoadContext.inc"
}

void OSClearContext(OSContext* context) {
    context->mode = 0;
    context->state = 0;
    if (context == *(OSContext**)0x800000D8) {
        *(u32*)0x800000D8 = 0;
    }
}
