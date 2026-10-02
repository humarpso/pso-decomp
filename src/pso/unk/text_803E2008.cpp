#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TParticleCtrl__sub_803E2008(s32 arg0);
struct G_803E2010 { u8 pad[0x44]; f32 f44; f32 f48; };
extern G_803E2010 lbl_8058CA60;
extern f32 lbl_805D77BC;
extern f32 lbl_805D77C0;
extern u32 lbl_805D77C4;
extern s8 lbl_805D77C8;
typedef struct { u8 r, g, b, a; } Col_803E2010;
void Dolphin_GXSetFog(s32, f32, f32, f32, f32, Col_803E2010);
void TParticleCtrl__sub_803E2010(void);

extern s32 lbl_805D77B8;

void TParticleCtrl__sub_803E2008(s32 arg0) {
    lbl_805D77B8 = arg0;
}

void TParticleCtrl__sub_803E2010(void) {
    s32 type;
    if (lbl_805D77C8 != 0) {
        type = lbl_805D77B8;
    } else {
        type = 0;
    }
    Dolphin_GXSetFog(type, lbl_805D77C0, lbl_805D77BC, lbl_8058CA60.f44, lbl_8058CA60.f48, *(Col_803E2010 *)&lbl_805D77C4);
}

}
