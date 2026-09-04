#include "pso/TChCrTagName.h"

TChCrTagName::~TChCrTagName() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__12TChCrTagNameFPv(void *arg0);
void create_all__12TChCrTagNameFv(void);
void render__12TChCrTagNameFv(void* p);
void run_task__12TChCrTagNameFv(void *arg0);
int TChCrTagName__sub_802A208C(void*);
int TChCrTagName__sub_802A226C(void*);
int TChCrTagName__sub_802A2500(void*);
M2C_UNK TChCrTagName__sub_802A26E0(void *);
M2C_UNK TChCrTag__sub_802A1A00();
void *__ct__12TChCrTagNameFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void render__12TChCrTagNameFv(void* p) { TChCrTagName__sub_802A2500(p); TChCrTagName__sub_802A226C(p); TChCrTagName__sub_802A208C(p); }

void run_task__12TChCrTagNameFv(void *arg0) {
    TChCrTag__sub_802A1A00();
    TChCrTagName__sub_802A26E0(arg0);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
}

extern void *tl_03;

void *create__12TChCrTagNameFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = __ct__12TChCrTagNameFv(o, tl_03, arg0);
    }
    return o;
}

void create_all__12TChCrTagNameFv(void) { { int i; for (i = 0; i < 12; i++) { create__12TChCrTagNameFPv((void *)((void*)i)); } } }

}
