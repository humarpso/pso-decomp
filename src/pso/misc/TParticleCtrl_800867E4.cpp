#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjFish__sub_8001EDC4(void *, s32);
extern u8 *TParticleCtrl__data_805D4F00;
s32 TParticleCtrl__sub_80086884(s32 arg0);
}

extern "C" {

int get_instance__13TParticleCtrlFv(void);
void init_heap__13TParticleCtrlFPv(void *arg0);
void *__ct__5THeapFUli(void *, void *, int);
void *__nw__5THeapFUl(int);

extern void *TParticleCtrl__data_805D4EF0;

void init_heap__13TParticleCtrlFPv(void *arg0) {
    void *o;
    if (TParticleCtrl__data_805D4EF0 == NULL) {
        o = __nw__5THeapFUl(0x14);
        if (o != NULL) {
            o = __ct__5THeapFUli(o, arg0, 16);
        }
        TParticleCtrl__data_805D4EF0 = o;
    }
}

    extern int TParticleCtrl__data_805D4F04;

s32 TParticleCtrl__sub_80086884(s32 arg0) {
    if (arg0 < 3) {
        return TObjFish__sub_8001EDC4(TParticleCtrl__data_805D4F00, arg0);
    }
    return 0;
}

int get_instance__13TParticleCtrlFv(void) {  return TParticleCtrl__data_805D4F04; }

}
