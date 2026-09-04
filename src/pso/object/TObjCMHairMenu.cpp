#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__14TObjCMHairMenuFPv(void *arg0);
void *__ct__14TObjCMHairMenuFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__14TObjCMHairMenuFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = __ct__14TObjCMHairMenuFv(o, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801E3F54
#include "types.h"

extern "C" {

void TObjEneRe4Sorcerer__sub_801E3F14(void);
void TObjEneRe4Sorcerer__sub_801E3F18(void);
void TObjEneRe4Sorcerer__sub_801E3F1C(void);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
void TObjCMHairMenu__sub_801E3F54(void* p, void* q);

void TObjCMHairMenu__sub_801E3F54(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

}
#endif
#endif
