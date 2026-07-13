#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TParticleCtrl__sub_801D6B8C(void *arg0);
void queue_destruction__7TObjectFv(void *);
void *validate_ctrl__13TParticleCtrlFPv(void *);

void TParticleCtrl__sub_801D6B8C(void *arg0) {
    void *x;
    x = validate_ctrl__13TParticleCtrlFPv(arg0);
    if (x != NULL) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4));
    }
}

}
