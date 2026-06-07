#include "ptmf.h"

__ptmf const __ptmf_null = {
    0,
    0,
    0,
};

asm long __ptmf_test(register __ptmf* ptmf) {
#include "orig_asm/PowerPC_EABI_Support/Runtime/Src/ptmf/__ptmf_test.inc"
}

asm long __ptmf_cmpr(void) {
#include "orig_asm/PowerPC_EABI_Support/Runtime/Src/ptmf/__ptmf_cmpr.inc"
}

asm void __ptmf_scall(...) {
#include "orig_asm/PowerPC_EABI_Support/Runtime/Src/ptmf/__ptmf_scall.inc"
}
