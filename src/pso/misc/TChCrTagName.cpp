#include "pso/TChCrTagName.h"

TChCrTagName::~TChCrTagName() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802A28C0___vt__12TChCrTagName {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
u8 * __ct__8TChCrTagFv(void *, s32);
M2C_UNK TChCrTagName__sub_802A26E0(void *);
extern RecoveredGlobal_802A28C0___vt__12TChCrTagName __vt__12TChCrTagName;
extern s32 lbl_805D3DA0;
extern const f32 lbl_805DDE48;
extern const f32 lbl_805DDE8C;
extern const f32 lbl_805DDE90;
extern const f32 lbl_805DDE94;
extern const f32 lbl_805DDE98;
extern const f32 lbl_805DDE9C;
extern const f32 lbl_805DDEA0;
u8 *__ct__12TChCrTagNameFv(u8 *arg0, s32 arg1, s32 _w2);
}

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
void *__nw__7TObjectFUl(int);

void render__12TChCrTagNameFv(void* p) { TChCrTagName__sub_802A2500(p); TChCrTagName__sub_802A226C(p); TChCrTagName__sub_802A208C(p); }

void run_task__12TChCrTagNameFv(void *arg0) {
    TChCrTag__sub_802A1A00();
    TChCrTagName__sub_802A26E0(arg0);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
}

extern void *tl_03;

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_802A28C0___vt__12TChCrTagName_size[sizeof(RecoveredGlobal_802A28C0___vt__12TChCrTagName) == 0x20 ? 1 : -1];
u8 *__ct__12TChCrTagNameFv(u8 *arg0, s32 arg1, s32 _w2) {
    __ct__8TChCrTagFv(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TChCrTagName.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3DA0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DDE8C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DDE90;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DDE94;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DDE98;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DDE48;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) -((lbl_805DDEA0 * (f32) (0xC - M2C_FIELD(arg0, s32 *, 0x20))) - lbl_805DDE9C);
    TChCrTagName__sub_802A26E0(arg0);
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    return arg0;
}
#pragma pop

void *create__12TChCrTagNameFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = __ct__12TChCrTagNameFv((u8 *)(o), (s32)(tl_03), (s32)(arg0));
    }
    return o;
}

void create_all__12TChCrTagNameFv(void) { { int i; for (i = 0; i < 12; i++) { create__12TChCrTagNameFPv((void *)((void*)i)); } } }

}
