#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

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

}
