#include "types.h"

extern "C" {

s32 __dt__22TPlyFollowParticleCtrlFis(s32 a0 = 0, s32 a1 = 0);
s32 __dl__FPv(s32 a0 = 0);
int TPlyFollowParticleCtrl__sub_8030A694(void*);
void* TObjPlayer__sub_8030A114(void* p);
int TObjPlayer__sub_80309F0C(void* p, int a1);
int check_hit_by_id__10TObjPlayerFiii(void*, int, int);

s32 TObjPlayer__sub_8030A0C8(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__22TPlyFollowParticleCtrlFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
void* TObjPlayer__sub_8030A114(void* p) { TPlyFollowParticleCtrl__sub_8030A694(p); *(int*)(p) = 0; *(int*)((char*)p + 0x4) = 0; return p; }

}
