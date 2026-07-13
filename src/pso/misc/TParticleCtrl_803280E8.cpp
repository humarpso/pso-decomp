#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_ind_tev_stages__13TParticleCtrlFv(void);
void play_particle__13TParticleCtrlFPvis(void *arg0, s32 arg1, s16 arg2);
void *TParticleCtrl__sub_80328160(void *arg0, s16 arg1);
int GXSetNumIndStages(int);
int GXSetTevDirect(int);
int TObjPlayer__sub_803DC83C(int);
int TParticleCtrl__sub_803280C8(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int fn_802A8260(void*);
s32 TObjPlayer__sub_802A8368(u8, u8, s32, s32, s32, s32);

void reset_ind_tev_stages__13TParticleCtrlFv(void) { GXSetTevDirect(1); GXSetNumIndStages(0); TObjPlayer__sub_803DC83C(0); }
void play_particle__13TParticleCtrlFPvis(void *arg0, s32 arg1, s16 arg2) {
    if (arg2 < 0) {
        arg2 = (s16) M2C_FIELD(arg0, u8 *, 0x1C);
    }
    TObjPlayer__sub_802A8368((u8) arg2, M2C_FIELD(arg0, u8 *, 0x1D), 0, 0, 0, 1);
}

extern M2C_UNK lbl_804ED5B0[];

void *TParticleCtrl__sub_80328160(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED5B0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
