#include "types.h"

extern "C" {

s32 VecCopy__FP3VecPC3Vec(s32, s32);
void fn_802ED868(void);

void fn_802ED828(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void fn_802ED868(void) {  }

}
