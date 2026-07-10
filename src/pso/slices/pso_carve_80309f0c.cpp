#include "types.h"

extern "C" {

s32 __dt__22TPlyFollowParticleCtrlFis(s32 a0 = 0, s32 a1 = 0);
s32 __dl__FPv(s32 a0 = 0);
int TPlyFollowParticleCtrl__sub_8030A694(void*);
void* fn_8030A114(void* p);
int fn_80309F0C(void* p, int a1);
int fn_8030A264(void*, int, int);

int fn_80309F0C(void* p, int a1) { return fn_8030A264(p, a1, 431); }
int fn_80309F30(void) { return 0; }
int fn_80309F78(void) { return 0; }
int fn_80309FD4(void) { return 0; }
int fn_8030A030(void) { return 0; }
int fn_8030A07C(void) { return 0; }
s32 fn_8030A0C8(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__22TPlyFollowParticleCtrlFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
void* fn_8030A114(void* p) { TPlyFollowParticleCtrl__sub_8030A694(p); *(int*)(p) = 0; *(int*)((char*)p + 0x4) = 0; return p; }
int fn_8030A150(void) { return 0; }

}
