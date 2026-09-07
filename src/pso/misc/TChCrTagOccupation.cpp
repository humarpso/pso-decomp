#include "pso/TChCrTagOccupation.h"

TChCrTagOccupation::~TChCrTagOccupation() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802A300C___vt__18TChCrTagOccupation {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
u8 * __ct__8TChCrTagFv(void *, s32);
extern RecoveredGlobal_802A300C___vt__18TChCrTagOccupation __vt__18TChCrTagOccupation;
extern s32 lbl_805D3DB0;
extern const f32 lbl_805DDEF0;
extern const f32 lbl_805DDF00;
extern const f32 lbl_805DDF04;
extern const f32 lbl_805DDF08;
extern const f32 lbl_805DDF0C;
extern const f32 lbl_805DDF10;
extern const f32 lbl_805DDF14;
u8 *__ct__18TChCrTagOccupationFv(u8 *arg0, s32 arg1, s32 _w2);
}

extern "C" {

int TChCrTagOccupation__vt4(void);
void *create__18TChCrTagOccupationFPv(void *arg0);
void create_all__18TChCrTagOccupationFv(void);
int render__18TChCrTagOccupationFv(void* p);
void *__nw__7TObjectFUl(int);
int fn_802A2DF4(void*);

int render__18TChCrTagOccupationFv(void* p) { return fn_802A2DF4(p); }

int TChCrTagOccupation__vt4(void) { return 0; }

extern void *tl_03;

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_802A300C___vt__18TChCrTagOccupation_size[sizeof(RecoveredGlobal_802A300C___vt__18TChCrTagOccupation) == 0x20 ? 1 : -1];
u8 *__ct__18TChCrTagOccupationFv(u8 *arg0, s32 arg1, s32 _w2) {
    __ct__8TChCrTagFv(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__18TChCrTagOccupation.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3DB0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DDF00;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DDF04;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DDF08;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DDF0C;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((lbl_805DDF14 * (f32) M2C_FIELD(arg0, s32 *, 0x20)) + lbl_805DDF10);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805DDEF0;
    return arg0;
}
#pragma pop

void *create__18TChCrTagOccupationFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = __ct__18TChCrTagOccupationFv((u8 *)(o), (s32)(tl_03), (s32)(arg0));
    }
    return o;
}

void create_all__18TChCrTagOccupationFv(void) { { int i; for (i = 0; i < 3; i++) { create__18TChCrTagOccupationFPv((void *)((void*)i)); } } }

}
