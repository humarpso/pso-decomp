#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TTecPlayerInfluence__sub_80237258(void* p);

void TTecPlayerInfluence__sub_80237258(void* p) { *(f32*)((char*)p + 0xbc) = *(f32*)((char*)p + 0x3c); }

}
#else
#if PSO_CLASS_PACKAGE == 0x802372A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TTecPlayerInfluenceFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TEffectFv(void *, int);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__19TTecPlayerInfluence[];

void *__dt__19TTecPlayerInfluenceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TTecPlayerInfluence;
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { TObjEneGibbles__sub_80156720(M2C_FIELD(arg0, void **, 0xDC)); }
        __dt__7TEffectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80237490
#include "types.h"

extern "C" {

void TTecPlayerInfluence__vt5(void);

void TTecPlayerInfluence__vt5(void) {  }

}
#endif
#endif
