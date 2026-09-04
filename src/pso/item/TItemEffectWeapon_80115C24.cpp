#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
}

extern "C" {

int decrement_timer__17TItemEffectWeaponFPv(void* p);
int decrement_packed_timer__15TObjBoss2TunnelFPvi(void*);

int decrement_timer__17TItemEffectWeaponFPv(void* p) { return decrement_packed_timer__15TObjBoss2TunnelFPvi(p); }

void TItemMoney__vt16(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0xF8);
}

}
