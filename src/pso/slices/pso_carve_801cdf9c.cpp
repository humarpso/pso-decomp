#include "types.h"

extern "C" {

s32 fn_801CEAC8();
s32 fn_801D2FB0(s32, s32, s32, s32);
void fn_801CE064(void);
int fn_801CE17C(void* p);
int fn_801BA2F4(void*);

int fn_801CDF9C(void) { return 0; }
void fn_801CE064(void) {  }
int fn_801CE068(void) { return 0; }
void fn_801CE134(s32 arg0) {
    s32 temp_r3;

    temp_r3 = fn_801CEAC8();
    if (temp_r3 != -1) {
        fn_801D2FB0(arg0 + 0x7CC, arg0, temp_r3, 2);
    }
}
int fn_801CE17C(void* p) { return fn_801BA2F4(p); }

}
