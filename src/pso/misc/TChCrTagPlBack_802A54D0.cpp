#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__14TChCrTagPlBackFv(void *arg0);
void __ct__8TChCrTagFv(void *);

extern const f32 lbl_805DDFE4;
extern M2C_UNK __vt__14TChCrTagPlBack[];
extern const f32 lbl_805DDFE8;
extern void *lbl_805D3DF0;

void *__ct__14TChCrTagPlBackFv(void *arg0) {
    __ct__8TChCrTagFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TChCrTagPlBack;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3DF0;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805DDFE4;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DDFE8;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DDFE4;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DDFE8;
    return arg0;
}

}
