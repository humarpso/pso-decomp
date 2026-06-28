#include "types.h"

extern "C" {

s32 fn_803CC500();
s32 fn_803CCE9C(s32);
s32 fn_803CD3A8(s32, s32);
int fn_800F9D80(void* p);
int fn_800FD944(void*);

int fn_800F9D80(void* p) { return fn_800FD944(p); }
s32 fn_800F9DA0(void) {
    s32 temp_r31;
    s32 temp_r3;
    s32 uninit;

    temp_r3 = fn_803CD3A8(uninit, 0);
    if (temp_r3 == 0) {
        return -1;
    }
    temp_r31 = fn_803CC500();
    fn_803CCE9C(temp_r3);
    return temp_r31;
}

}
