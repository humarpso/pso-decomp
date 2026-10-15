#include "types.h"
#include "pso/misc/TOTrapChainSawDamage.h"

extern "C" {
void TOTrapChainSawDamage__sub_802C9C00(u8 *arg0, s32 arg1);
}

extern "C" {

void TOTrapChainSaw__vt14(void);
void TOTrapChainSaw__vt23(void);
void TOTrapChainSawEdge__vt15(void);
void TOTrapChainSaw__sub_802C9BE4(void);
void TOTrapChainSaw__sub_802C9BE8(void);
void TOTrapChainSaw__sub_802C9BEC(void);
void TOTrapChainSaw__sub_802C9BF0(void);
void TOTrapChainSaw__sub_802C9BF4(void);

void TOTrapChainSawDamage::set_damage(s32 v) { *(s32*)((char*)this + 0xf8) = v; }

void TOTrapChainSawDamage__sub_802C9C00(u8 *arg0, s32 arg1) {
    *(s32 *)((s8 *)arg0 + 0x100) = (s32) (*(s32 *)((s8 *)arg0 + 0x100) + arg1);
}

void TOTrapChainSaw__vt23(void) {  }
void TOTrapChainSaw__vt14(void) {  }

}
