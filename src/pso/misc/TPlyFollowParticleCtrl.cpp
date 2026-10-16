#include "types.h"
#include "pso/misc/TPlyFollowParticleCtrl.h"

extern "C" {

int vfunc_9__22TPlyFollowParticleCtrlFv(void);
s32 __dt__22TPlyFollowParticleCtrlFis(s32 arg0, s16 arg1);
void TPlyFollowParticleCtrl__sub_8030A694(void);

int __dl__FPv();

void TPlyFollowParticleCtrl::set_type(s16 v) { *(s16 *)&this->m_name = v; }
s32 __dt__22TPlyFollowParticleCtrlFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void TPlyFollowParticleCtrl__sub_8030A694(void) {  }
u16 TPlyFollowParticleCtrl::get_lifetime() { return this->m_ac; }
void*TPlyFollowParticleCtrl::vfunc_9() { return 0; }

}
