#ifndef PSO_CLASS_PACKAGE
#include "pso/TChCrTagName.h"

TChCrTagName::~TChCrTagName() {}
#else
#if PSO_CLASS_PACKAGE == 0x802A27A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__12TChCrTagNameFv(void *arg0);

M2C_UNK TChCrTag__sub_802A1A00();
M2C_UNK TChCrTagName__sub_802A26E0(void *);

void run_task__12TChCrTagNameFv(void *arg0) {
    TChCrTag__sub_802A1A00();
    TChCrTagName__sub_802A26E0(arg0);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A2978
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TChCrTagNameFPv(void *arg0);
void *__ct__12TChCrTagNameFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_03;

void *create__12TChCrTagNameFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = __ct__12TChCrTagNameFv(o, tl_03, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A29C4
#include "types.h"

extern "C" {

void create_all__12TChCrTagNameFv(void);
int create__12TChCrTagNameFPv(void*);

void create_all__12TChCrTagNameFv(void) { { int i; for (i = 0; i < 12; i++) { create__12TChCrTagNameFPv((void*)i); } } }

}
#endif
#endif
