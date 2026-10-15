#include "types.h"

extern "C" {
}

extern "C" {

int decrement_timer__17TItemEffectWeaponFPv(void* p);
int decrement_packed_timer__15TObjBoss2TunnelFPvi(void*);

int decrement_timer__17TItemEffectWeaponFPv(void* p) { return decrement_packed_timer__15TObjBoss2TunnelFPvi(p); }

void TItemMoney__vt16(u8 *arg0, u8 *arg1) {
    *(s32 *)((s8 *)arg1 + 0x10) = (s32) *(s32 *)((s8 *)arg0 + 0xF8);
}

}
