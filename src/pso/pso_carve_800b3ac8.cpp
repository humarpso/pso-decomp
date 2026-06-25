#include "types.h"

extern "C" {

int VecCopy__FP3VecPC3Vec(void*, void*);
int fn_800BAAE4(void*, void*, void*);
void fn_800B3BE8(void);
void fn_800B3CBC(void);

int fn_800B3AC8(void) { return 0; }
int fn_800B3ADC(void) { return 0; }
void fn_800B3B94(void* p) { fn_800BAAE4(p, (char*)p + 0x2fc, (void*)0); }
void fn_800B3BBC(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void fn_800B3BE8(void) {  }
int fn_800B3BEC(void) { return 0; }
int fn_800B3C64(void) { return 0; }
void fn_800B3CBC(void) {  }

}
