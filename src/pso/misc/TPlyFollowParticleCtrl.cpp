#include "types.h"

extern "C" {

int TPlyFollowParticleCtrl__vt7(void);
void TPlyFollowParticleCtrl__sub_8030A650(void* p, s16 v);
s32 __dt__22TPlyFollowParticleCtrlFis(s32 arg0, s16 arg1);
void TPlyFollowParticleCtrl__sub_8030A694(void);
u16 get_lifetime__22TPlyFollowParticleCtrlFPv(void* p);

int __dl__FPv();

void TPlyFollowParticleCtrl__sub_8030A650(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
s32 __dt__22TPlyFollowParticleCtrlFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void TPlyFollowParticleCtrl__sub_8030A694(void) {  }
u16 get_lifetime__22TPlyFollowParticleCtrlFPv(void* p) { return *(u16*)((char*)p + 0xac); }
int TPlyFollowParticleCtrl__vt7(void) { return 0; }

}
