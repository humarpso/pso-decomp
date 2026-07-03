#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TEffect__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *, void *);

extern void *tl_particle;
extern const f32 lbl_805D93B8;
extern M2C_UNK __vt__7TEffect[];
extern const f32 lbl_805D93BC;
extern void *lbl_805D2908;

void *TEffect__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_particle);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__7TEffect;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2908;
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_805D93B8;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_805D93B8;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805D93B8;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805D93B8;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805D93B8;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805D93B8;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805D93B8;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805D93BC;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_805D93BC;
    M2C_FIELD(arg0, f32 *, 0x44) = lbl_805D93BC;
    M2C_FIELD(arg0, f32 *, 0x48) = lbl_805D93B8;
    M2C_FIELD(arg0, f32 *, 0x4C) = lbl_805D93B8;
    M2C_FIELD(arg0, f32 *, 0x50) = lbl_805D93B8;
    M2C_FIELD(arg0, u32 *, 0x54) = 0;
    M2C_FIELD(arg0, u32 *, 0x58) = 0;
    M2C_FIELD(arg0, u32 *, 0x5C) = 0;
    M2C_FIELD(arg0, f32 *, 0x60) = lbl_805D93B8;
    M2C_FIELD(arg0, f32 *, 0x64) = lbl_805D93B8;
    M2C_FIELD(arg0, u32 *, 0x68) = 0;
    M2C_FIELD(arg0, u32 *, 0x6C) = 0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
