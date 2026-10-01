#include "types.h"
struct RMode_803DCDFC {
    u32 viTVmode;
    u16 fbWidth;
    u16 efbHeight;
    u16 xfbHeight;
    u16 viXOrigin;
    u16 viYOrigin;
    u16 viWidth;
    u16 viHeight;
    u32 xFBmode;
    u8 field_rendering;
};

extern "C" {
u32 VIGetNextField(void);
void GXInvalidateVtxCache(void);
void GXInvalidateTexAll(void);
void GXSetViewportJitter(f32, f32, f32, f32, f32, f32, u32);
void GXSetViewport(f32, f32, f32, f32, f32, f32);
extern RMode_803DCDFC *lbl_805D7734;
void func_803DCDFC__Fv(void);
}

extern "C" {

void func_803DCDFC__Fv(void) {
    RMode_803DCDFC *rmode = lbl_805D7734;
    if (rmode->field_rendering) {
        GXSetViewportJitter(0.0f, 0.0f, rmode->fbWidth, rmode->efbHeight, 0.0f, 1.0f, VIGetNextField());
    } else {
        GXSetViewport(0.0f, 0.0f, rmode->fbWidth, rmode->efbHeight, 0.0f, 1.0f);
    }
    GXInvalidateVtxCache();
    GXInvalidateTexAll();
}

}
