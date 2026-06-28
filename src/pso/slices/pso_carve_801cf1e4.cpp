#include "types.h"

extern "C" {

s32 fn_801CEAC8();
s32 fn_801D2FB0(s32, s32, s32, s32);
void fn_801CF2AC(void);
int fn_801CF3C0(void* p);
int fn_801BA2F4(void*);

int fn_801CF1E4(void) { return 0; }
void fn_801CF2AC(void) {  }
int fn_801CF2B0(void) { return 0; }
void fn_801CF378(s32 arg0) {
    s32 temp_r3;

    temp_r3 = fn_801CEAC8();
    if (temp_r3 != -1) {
        fn_801D2FB0(arg0 + 0x7CC, arg0, temp_r3, 1);
    }
}
int fn_801CF3C0(void* p) { return fn_801BA2F4(p); }

}
