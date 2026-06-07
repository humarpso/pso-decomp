#include "types.h"

extern void __init_registers(void);
extern void __init_data(void);
extern void __init_hardware(void);

void __start(void) {
    __init_registers();
    __init_data();
}

void __PSInit(void) {
    u32 msr = PPCMfmsr();
    msr |= 0x00000030;
    PPCMtmsr(msr);
}
