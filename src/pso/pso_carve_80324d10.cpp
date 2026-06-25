#include "types.h"

extern "C" {

int VecCopy__FP3VecPC3Vec(s32, s32, s32);

void fn_80324D10(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x2C, arg0);
}

}
