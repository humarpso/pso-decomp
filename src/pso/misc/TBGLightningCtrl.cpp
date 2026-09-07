#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_802A9C24___vt__16TBGLightningCtrl {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK __vt__16TBGLightningCtrl[];
extern s32 lbl_805D3E3C;
u8 *TBGLightningCtrl__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TBGLightningCtrl__sub_802A9A08(void);
void *__dt__16TBGLightningCtrlFv(void *arg0, s16 arg1);
void render__16TBGLightningCtrlFv(void);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
int set_global_param__8TObjFishFi(void*);

    extern int lbl_805D66D0;
void TBGLightningCtrl__sub_802A9A08(void) { set_global_param__8TObjFishFi((void*)(lbl_805D66D0)); }

void render__16TBGLightningCtrlFv(void) {  }

extern M2C_UNK __vt__16TBGLightningCtrl[];

void *__dt__16TBGLightningCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TBGLightningCtrl;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802A9C24___vt__16TBGLightningCtrl_size[sizeof(RecoveredGlobal_802A9C24___vt__16TBGLightningCtrl) == 0x34 ? 1 : -1];
u8 *TBGLightningCtrl__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802A9C24___vt__16TBGLightningCtrl *)&__vt__16TBGLightningCtrl).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E3C;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    return arg0;
}

}
