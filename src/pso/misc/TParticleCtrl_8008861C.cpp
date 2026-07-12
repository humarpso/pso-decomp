#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TParticleCtrl__sub_8008861C(void);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
s32 TLobby__sub_800F9DF4(s32, s32);

extern s32 lbl_805D2944;
extern u32 lbl_805D2948;
extern s32 lbl_805D4EF8;

void TParticleCtrl__sub_8008861C(void) {
    s32 temp_r3;

    temp_r3 = TLobby__sub_800F9DF4(lbl_805D2944, (lbl_805D4EF8 = alloc_buffer__11TOBoss4RockFPv(0x13000)));
    lbl_805D2948 = 0;
    if (temp_r3 >= 0) {
        lbl_805D2948 = (u32) temp_r3 / 152U;
    }
}

}
