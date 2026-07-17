#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TParticleCtrl__sub_8008B4E0(void *arg0, void *arg1, void *arg2);
void *TParticleCtrl__sub_8008C21C(void *, void *, void *, void *);
void *TParticleCtrl__sub_8008673C(int);

void * TParticleCtrl__sub_8008B4E0(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = TParticleCtrl__sub_8008673C(0x130);
    if (o != NULL) {
        o = TParticleCtrl__sub_8008C21C(o, arg0, arg1, arg2);
    }
    return o;
}

}
