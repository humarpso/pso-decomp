#include "types.h"

extern "C" {

void TBoss8Dragon__sub_80324D3C(s32 arg0, s32 arg1);
int VecCopy__FP3VecPC3Vec(s32, s32, s32);

void TBoss8Dragon__sub_80324D3C(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x20, arg0);
}

}
