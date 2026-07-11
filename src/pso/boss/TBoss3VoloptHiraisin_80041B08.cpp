#include "types.h"

extern "C" {

void copy_position__20TBoss3VoloptHiraisinFi(s32 arg0);
int VecCopy__FP3VecPC3Vec(s32, s32);

void copy_position__20TBoss3VoloptHiraisinFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
