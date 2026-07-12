#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TParticleCtrl__sub_800885B4(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007EBB4(u32);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK free__11TOBoss4RockFUi(s32);

extern s32 lbl_805D4EFC;
extern u32 TParticleCtrl__data_805D4F00;
extern u32 TParticleCtrl__data_805D4F04;

void TParticleCtrl__sub_800885B4(void) {
    free__11TOBoss4RockFUi(lbl_805D4EFC);
    lbl_805D4EFC = 0;
    if ((u32) TParticleCtrl__data_805D4F00 != 0U) {
        TLobby__sub_8001FE7C((void*)TParticleCtrl__data_805D4F00, 1);
        TParticleCtrl__data_805D4F00 = 0U;
    }
    if ((u32) TParticleCtrl__data_805D4F04 != 0U) {
        TLobby__sub_803DA16C((void*)TParticleCtrl__data_805D4F04);
        TAdSinglePlyChrSelectGC__sub_8007EBB4(TParticleCtrl__data_805D4F04);
        TParticleCtrl__data_805D4F04 = 0U;
    }
}

}
