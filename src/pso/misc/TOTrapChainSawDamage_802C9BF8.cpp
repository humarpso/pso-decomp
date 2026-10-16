#include "types.h"
#include "pso/misc/TOTrapChainSaw.h"
#include "pso/misc/TOTrapChainSawDamage.h"

extern "C" {
void TOTrapChainSawDamage__sub_802C9C00(u8 *arg0, s32 arg1);
}

extern "C" {

void TOTrapChainSaw__vt14(void);
void vfunc_25__14TOTrapChainSawFv(void);
void TOTrapChainSawEdge__vt15(void);
void TOTrapChainSaw__sub_802C9BE4(void);
void vfunc_26__14TOTrapChainSawFv(void);
void vfunc_27__14TOTrapChainSawFv(void);
void vfunc_28__14TOTrapChainSawFv(void);
void vfunc_29__14TOTrapChainSawFv(void);

void TOTrapChainSawDamage::set_damage(s32 v) { *(s32 *)&this->m_f8 = v; }

void TOTrapChainSawDamage__sub_802C9C00(u8 *arg0, s32 arg1) {
    *(s32 *)((s8 *)arg0 + 0x100) = (s32) (*(s32 *)((s8 *)arg0 + 0x100) + arg1);
}

void TOTrapChainSaw::vfunc_25() {  }
void TOTrapChainSaw__vt14(void) {  }

}
