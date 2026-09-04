#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemEffLavis.h"

void TItemEffLavis::hook() {}

TItemEffLavis::~TItemEffLavis() {}
#else
#if PSO_CLASS_PACKAGE == 0x801096CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemEffLavis__ct(void *arg0);
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *);

extern M2C_UNK __vt__13TItemEffLavis[];
extern void *lbl_805D2BC0;

void *TItemEffLavis__ct(void *arg0) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TItemEffLavis;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2BC0;
    return arg0;
}

}
#endif
#endif
