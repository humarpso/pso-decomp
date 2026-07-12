#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802A8368(u8, u8, s32, s32, s32, s32);
int TParticleCtrl__sub_803280C8(void* p);
void fn_803280E8(void);
int GXSetNumIndStages(int);
int GXSetTevDirect(int);
int fn_802A8260(void*);
int fn_803DC83C(int);

void TParticleCtrl__sub_80328048(s32 arg0) {
    if (arg0 != 0) {
        GXSetTevDirect(1);
    } else {
        GXSetTevDirect(0);
    }
    GXSetNumIndStages(0);
    fn_803DC83C(0);
}

}
