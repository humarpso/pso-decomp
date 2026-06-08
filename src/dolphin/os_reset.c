#include "types.h"

extern void func_80014DFC(void);
extern void PPCHalt(void);

void func_80014DDC(void) {
    func_80014DFC();
}

void func_80014E50(void) {
    PPCHalt();
}
