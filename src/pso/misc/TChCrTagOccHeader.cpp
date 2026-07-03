#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__17TChCrTagOccHeaderFv(void *arg0);
void __ct__8TChCrTagFv(void *);

extern const f32 lbl_805DDECC;
extern M2C_UNK __vt__17TChCrTagOccHeader[];
extern const f32 lbl_805DDED0;
extern void *lbl_805D3DA8;

void *__ct__17TChCrTagOccHeaderFv(void *arg0) {
    __ct__8TChCrTagFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TChCrTagOccHeader;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3DA8;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805DDECC;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DDED0;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DDECC;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DDED0;
    return arg0;
}

}
