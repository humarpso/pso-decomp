#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TOTrapChainSawDamage__sub_802C9C00(u8 *arg0, s32 arg1);
}

extern "C" {

void TOTrapChainSaw__vt14(void);
void TOTrapChainSaw__vt23(void);
void set_damage__20TOTrapChainSawDamageFPvi(void* p, s32 v);
void TOTrapChainSawEdge__vt15(void);
void TOTrapChainSaw__sub_802C9BE4(void);
void TOTrapChainSaw__sub_802C9BE8(void);
void TOTrapChainSaw__sub_802C9BEC(void);
void TOTrapChainSaw__sub_802C9BF0(void);
void TOTrapChainSaw__sub_802C9BF4(void);

void set_damage__20TOTrapChainSawDamageFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xf8) = v; }

void TOTrapChainSawDamage__sub_802C9C00(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x100) = (s32) (M2C_FIELD(arg0, s32 *, 0x100) + arg1);
}

void TOTrapChainSaw__vt23(void) {  }
void TOTrapChainSaw__vt14(void) {  }

}
