#include "types.h"

extern "C" {

s32 fn_802879C4(s32 a0 = 0, s32 a1 = 0);
s32 __dl__FPv(s32 a0 = 0);
int fn_80288030(void* p);
int fn_80288050(void* p);
int fn_80287974(void*);
int fn_802879B0(void*);

int fn_80288030(void* p) { return fn_80287974(p); }
int fn_80288050(void* p) { return fn_802879B0(p); }
s32 fn_80288070(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        fn_802879C4(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
