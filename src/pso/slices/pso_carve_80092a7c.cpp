#include "types.h"

extern "C" {

s32 VecCopy__FP3VecPC3Vec(s32, s32);
void fn_80092A7C(void);
int fn_80092A80(void);
void fn_80092A88(void* p);

void fn_80092A7C(void) {  }
int fn_80092A80(void) { return 0; }
void fn_80092A88(void* p) { *(s16*)((char*)p + 0xb8) = 0; }
void fn_80092A94(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, VecCopy__FP3VecPC3Vec(arg0 + 0x290, VecCopy__FP3VecPC3Vec(arg0 + 0x29C, arg0 + 0x38)));
}

}
