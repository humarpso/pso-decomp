#include "types.h"

extern "C" {

int VecCopy__FP3VecPC3Vec(s32, s32);

void fn_80041B08(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
