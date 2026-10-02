#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct { u8 r, g, b, a; } GXColor_8029F5F8;
extern "C" {
extern f32 TScene__data_805D5FE4;
void TScene__sub_8029F5E4(f32 farg0);
M2C_UNK GXPixModeSync();
M2C_UNK GXSetTexCopySrc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTexCopyDst(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetCopyClear(GXColor_8029F5F8, M2C_UNK);
M2C_UNK GXCopyTex(s32, M2C_UNK);
M2C_UNK GXSetZMode(M2C_UNK, M2C_UNK, M2C_UNK);
extern GXColor_8029F5F8 lbl_805E1220;
void TObjPlayer__sub_8029F5F8(void *arg0);
}

extern "C" {

void TScene__sub_8029F5D8(void);
void TScene__sub_8029F5EC(void);
void fn_8029F5B0(M2C_UNK a0, M2C_UNK a1, M2C_UNK a2, M2C_UNK a3);
M2C_UNK GXSetTexCoordGen2(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void fn_8029F5B0(M2C_UNK a0, M2C_UNK a1, M2C_UNK a2, M2C_UNK a3) {
    GXSetTexCoordGen2(a0, a1, a2, a3, 0, 0x7D);
}

    extern int TScene__data_805D5FE0;
void TScene__sub_8029F5D8(void) { TScene__data_805D5FE0 = 0; }

    extern int TScene__data_805D5FE0;

void TScene__sub_8029F5E4(f32 farg0) {
    TScene__data_805D5FE4 = farg0;
}

void TScene__sub_8029F5EC(void) { TScene__data_805D5FE0 = 1; }
void TObjPlayer__sub_8029F5F8(void *arg0) {
    GXColor_8029F5F8 clr = lbl_805E1220;
    GXSetZMode(0, 7, 1);
    GXSetCopyClear(clr, 0xFFFFFF);
    GXSetTexCopySrc(0, 0, 0x280, 0x1E0);
    GXSetTexCopyDst(0x280, 0x1E0, 4, 0);
    GXCopyTex(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 8), void **, 0xC), s32 *, 0x20), 1);
    GXPixModeSync();
}

}
