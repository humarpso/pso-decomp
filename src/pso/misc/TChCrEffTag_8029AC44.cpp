#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__11TChCrEffTagFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__11TChCrEffTag[];
extern const f32 lbl_805DDCA4;
extern void *lbl_805D3D08;
extern u32 TChCrEffTag__selected_heading;

void *__ct__11TChCrEffTagFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TChCrEffTag;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D08;
    M2C_FIELD(arg0, u32 *, 0x1C) = -1;
    TChCrEffTag__selected_heading = -1;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_805DDCA4;
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_805DDCA4;
    return arg0;
}

}
