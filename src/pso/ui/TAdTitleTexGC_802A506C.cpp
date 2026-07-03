#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__13TAdTitleTexGCFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__13TAdTitleTexGC[];
extern const f32 lbl_805DDF9C;
extern void *lbl_805D3DE8;
extern const f32 lbl_805DDFA0;
extern const f32 lbl_805DDFA4;
extern const f32 lbl_805DDFA8;
extern const f32 lbl_805DDFAC;
extern const f32 lbl_805DDFB0;
extern const f32 lbl_805DDFB4;
extern const f32 lbl_805DDFB8;
extern const f32 lbl_805DDFBC;
extern const f32 lbl_805DDFC0;

void *__ct__13TAdTitleTexGCFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TAdTitleTexGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3DE8;
    M2C_FIELD(arg0, u32 *, 0x7C) = 51;
    M2C_FIELD(arg0, u32 *, 0x80) = -1;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DDF9C;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DDFA0;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DDFA4;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DDFA8;
    M2C_FIELD(arg0, f32 *, 0x4C) = lbl_805DDFAC;
    M2C_FIELD(arg0, f32 *, 0x50) = lbl_805DDFA8;
    M2C_FIELD(arg0, f32 *, 0x54) = lbl_805DDFB0;
    M2C_FIELD(arg0, f32 *, 0x58) = lbl_805DDFA0;
    M2C_FIELD(arg0, f32 *, 0x84) = lbl_805DDFB4;
    M2C_FIELD(arg0, f32 *, 0x88) = lbl_805DDFB8;
    M2C_FIELD(arg0, f32 *, 0x8C) = lbl_805DDFBC;
    M2C_FIELD(arg0, f32 *, 0x90) = lbl_805DDFB8;
    M2C_FIELD(arg0, f32 *, 0x94) = lbl_805DDFC0;
    M2C_FIELD(arg0, f32 *, 0x98) = lbl_805DDFB8;
    return arg0;
}

}
