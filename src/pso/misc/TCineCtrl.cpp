#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TCineCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *, void *);

extern void *tl_fade;
extern const f32 lbl_805D91D0;
extern M2C_UNK __vt__9TCineCtrl[];
extern void *lbl_805D28A8;
extern void * lbl_805D4E60;

void *TCineCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TCineCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D28A8;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805D91D0;
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_805D91D0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    lbl_805D4E60 = arg0;
    return arg0;
}

}
