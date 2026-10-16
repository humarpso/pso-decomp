#include "types.h"
#include "pso/item/TItemEffectWeapon.h"

extern "C" {

int decrement_packed_timer__15TObjBoss2TunnelFPUll(void*);

int TItemEffectWeapon::decrement_timer() { return decrement_packed_timer__15TObjBoss2TunnelFPUll(this); }

void TItemMoney__vt16(u8 *arg0, u8 *arg1) {
    *(s32 *)((s8 *)arg1 + 0x10) = (s32) *(s32 *)((s8 *)arg0 + 0xF8);
}

}
