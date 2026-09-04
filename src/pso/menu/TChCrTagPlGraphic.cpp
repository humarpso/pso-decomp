#ifndef PSO_CLASS_PACKAGE
#include "pso/TChCrTagPlGraphic.h"

TChCrTagPlGraphic::~TChCrTagPlGraphic() {}
#else
#if PSO_CLASS_PACKAGE == 0x802A3354
#include "types.h"

extern "C" {

void run_task__17TChCrTagPlGraphicFv(void* p);

int TChCrTag__sub_802A1A00(void*);
int TChCrTagPlGraphic__sub_802A3230(void*);

void run_task__17TChCrTagPlGraphicFv(void* p) { TChCrTag__sub_802A1A00(p); TChCrTagPlGraphic__sub_802A3230(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A34E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TChCrTagPlGraphicFPv(void *arg0);
void *__ct__17TChCrTagPlGraphicFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_03;

void *create__17TChCrTagPlGraphicFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = __ct__17TChCrTagPlGraphicFv(o, tl_03, arg0);
    }
    return o;
}

}
#endif
#endif
