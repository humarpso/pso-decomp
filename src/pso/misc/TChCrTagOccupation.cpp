#include "pso/TChCrTagOccupation.h"

TChCrTagOccupation::~TChCrTagOccupation() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TChCrTagOccupation__vt4(void);
void *create__18TChCrTagOccupationFPv(void *arg0);
void create_all__18TChCrTagOccupationFv(void);
int render__18TChCrTagOccupationFv(void* p);
void *__ct__18TChCrTagOccupationFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);
int fn_802A2DF4(void*);

int render__18TChCrTagOccupationFv(void* p) { return fn_802A2DF4(p); }

int TChCrTagOccupation__vt4(void) { return 0; }

extern void *tl_03;

void *create__18TChCrTagOccupationFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = __ct__18TChCrTagOccupationFv(o, tl_03, arg0);
    }
    return o;
}

void create_all__18TChCrTagOccupationFv(void) { { int i; for (i = 0; i < 3; i++) { create__18TChCrTagOccupationFPv((void *)((void*)i)); } } }

}
