#include "types.h"

extern "C" {

s32 VecCopy__FP3VecPC3Vec(s32, s32);
void fn_80065360(void);
void fn_80065364(void);
void fn_80065368(void);
void fn_8006536C(void);

void fn_80065320(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x3C0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void fn_80065360(void) {  }
void fn_80065364(void) {  }
void fn_80065368(void) {  }
void fn_8006536C(void) {  }

}
