#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TCineCtrl__ct(void *arg0);
void reset__9TCineCtrlFi(s32 arg0);
void reset_state__9TCineCtrlFi(s32 arg0);
void __ct__7TObjectFP7TObject(void *, void *);

extern void *lbl_805D4E60;
extern const f32 lbl_805D91E8;
extern const f32 lbl_805D91EC;

void reset_state__9TCineCtrlFi(s32 arg0) {
    if ((void *) lbl_805D4E60 != NULL) {
        M2C_FIELD(lbl_805D4E60, s32 *, 0x2C) = arg0;
        M2C_FIELD(lbl_805D4E60, f32 *, 0x1C) = (f32) lbl_805D91E8;
        M2C_FIELD(lbl_805D4E60, f32 *, 0x20) = (f32) lbl_805D91EC;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x26) = 0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x25) = 0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x24) = 0;
        M2C_FIELD(lbl_805D4E60, s32 *, 0x28) = 2;
    }
}

extern void *lbl_805D4E60;
extern const f32 TCineCtrl__data_805D91D0;

void reset__9TCineCtrlFi(s32 arg0) {
    if ((void *) lbl_805D4E60 != NULL) {
        M2C_FIELD(lbl_805D4E60, s32 *, 0x2C) = arg0;
        M2C_FIELD(lbl_805D4E60, f32 *, 0x1C) = (f32) TCineCtrl__data_805D91D0;
        M2C_FIELD(lbl_805D4E60, f32 *, 0x20) = (f32) TCineCtrl__data_805D91D0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x26) = 0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x25) = 0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x24) = 0;
        M2C_FIELD(lbl_805D4E60, s32 *, 0x28) = 1;
    }
}

extern void *tl_fade;
extern const f32 TCineCtrl__data_805D91D0;
extern M2C_UNK __vt__9TCineCtrl[];
extern void *lbl_805D28A8;
extern void * lbl_805D4E60;

void *TCineCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TCineCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D28A8;
    M2C_FIELD(arg0, f32 *, 0x1C) = TCineCtrl__data_805D91D0;
    M2C_FIELD(arg0, f32 *, 0x20) = TCineCtrl__data_805D91D0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    lbl_805D4E60 = arg0;
    return arg0;
}

}
