#ifndef PSO_CLASS_PACKAGE
#include "pso/TChCrTag.h"

TChCrTag::~TChCrTag() {}
#else
#if PSO_CLASS_PACKAGE == 0x802A1B84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__8TChCrTagFv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__8TChCrTag[];
extern const f32 lbl_805DDE04;
extern const f32 lbl_805DDE08;
extern void *lbl_805D3D90;
extern const f32 lbl_805DDE0C;

void *__ct__8TChCrTagFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TChCrTag;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D90;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_805DDE04;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DDE04;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DDE08;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805DDE08;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DDE0C;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DDE0C;
    return arg0;
}

}
#endif
#endif
