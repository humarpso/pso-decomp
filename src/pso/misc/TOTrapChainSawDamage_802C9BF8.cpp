#include "types.h"
#include "pso/misc/TOTrapChainSawDamage_802C9BF8.h"
#include "pso/misc/TOTrapChainSawEdge.h"
#include "pso/misc/TOTrapChainSaw.h"
#include "pso/misc/TOTrapChainSawDamage.h"

void TOTrapChainSawDamage::set_damage(s32 v) { this->m_f8 = v; }

void TOTrapChainSawDamage__sub_802C9C00(u8 *arg0, s32 arg1) {
    *(s32 *)((s8 *)arg0 + 0x100) = (s32) (*(s32 *)((s8 *)arg0 + 0x100) + arg1);
}

void TOTrapChainSaw::vfunc_25() {  }
void TOTrapChainSaw::vfunc_16() {  }
